using IOEXTENDGRG.Models;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.ComponentModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace IOEXTENDGRG
{
    public partial class MainWindow : Window
    {
        IOBoard siu;
        private const string logicalName = "IOEXTENDDEV";
        private ObservableCollection<LightViewModel> lights;

        public MainWindow()
        {
            InitializeComponent();
            siu = new IOBoard(logicalName);
            lights = new ObservableCollection<LightViewModel>();
            LightsList.ItemsSource = lights;
            // Inicializar la lista de luces
            for (int i = 1; i <= 14; i++)
            {
                lights.Add(new LightViewModel { LightNumber = i });
            }
        }

        private StringBuilder GetMessage(string header, errorData errorDescription)
        {
            StringBuilder sb = new StringBuilder();
            string resp = "";
            if (errorDescription.Result == 0)
                resp = "SUCCESS";
            else
                resp = "ERROR";
            sb.AppendLine($"=> {DateTime.Now:yyyy-MM-dd HH:mm:ss} {header} {resp}");
            sb.AppendLine("Code: " + errorDescription.Code?.ToString());
            sb.AppendLine("Description: " + errorDescription.Description?.ToString());
            if (errorDescription.Status.acReserve != null)
            {
                sb.AppendLine("Device Status.iPhyCode: " + errorDescription.Status.iPhyCode);
            }
            sb.AppendLine();

            return sb;
        }

        private void ShowMsg(StringBuilder sb)
        {
            try
            {
                ResultsTextBox.Text += sb.ToString();
                ResultsTextBox.ScrollToEnd();
            }
            catch (Exception e)
            {
                MessageBox.Show("Error: " + e.Message);
            }
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {

            StringBuilder sb = siu.vSetLogicalDevName(logicalName);
            ShowMsg(sb);
        }
    }

    // ViewModel para cada luz
    public class LightViewModel 
    {

        public int LightNumber { get; set; }
        public bool IsOn { get; set; }
        public int LightStatus { get; set; }
    }
}
