using IOEXTENDGRG.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace IOEXTENDGRG
{
    public class IOBoard
    {
        private IntPtr m_hDevHandle;
        private string m_szLogicDevName;

        public IOBoard(string deviceName)
        {
            if (deviceName.Length > 0)
                m_szLogicDevName = deviceName;
            m_hDevHandle = OIOExtendDevWrapper.hOpenLogicDevice(m_szLogicDevName);
        }
        ~IOBoard()
        {
            OIOExtendDevWrapper.vCloseLogicDevice(m_hDevHandle);
            Marshal.FreeHGlobal(m_hDevHandle);
        }
        private Struct[] IntPtrToStructarray<Struct>(System.IntPtr intPtr)
        {
            Struct[] StructReturn = new Struct[8];
            for (int i = 0; i < StructReturn.Length; i++)
            {
                IntPtr ptr = (IntPtr)((UInt32)intPtr + i * Marshal.SizeOf(typeof(Struct)));
                StructReturn[i] = (Struct)Marshal.PtrToStructure(ptr, typeof(Struct));
            }
            return StructReturn;
        }

        public StringBuilder vSetLogicalDevName(string p_szLogDevName)
        {
            StringBuilder respuesta = new StringBuilder();
            if (m_szLogicDevName == p_szLogDevName)
            {
                respuesta.AppendLine("");
                return respuesta;
            }
            m_szLogicDevName = p_szLogDevName;
            OIOExtendDevWrapper.vCloseLogicDevice(m_hDevHandle);
            m_hDevHandle = OIOExtendDevWrapper.hOpenLogicDevice(m_szLogicDevName);
            if (m_hDevHandle == IntPtr.Zero)
            {
                respuesta.AppendLine( "Error hOpenLogicDevice:" + m_szLogicDevName);
            }
            else
                respuesta.AppendLine("Conectado al dispositivo");
            return respuesta;
        }
        public void Disconnect()
        {
            if (m_hDevHandle == IntPtr.Zero)
                return;
            OIOExtendDevWrapper.vCloseLogicDevice(m_hDevHandle);
        }

        public errorData SetCommPara(IntPtr p_psStatus)
        {
            //return OIOExtendDevDll.iSetCommPara(m_hDevHandle, p_psStatus);
            try
            {
                int result = OIOExtendDevWrapper.iSetCommPara(m_hDevHandle, p_psStatus);
                //tDevReturn status = (tDevReturn)Marshal.PtrToStructure(p_psStatus, typeof(tDevReturn));
                tDevReturn[] status = IntPtrToStructarray<tDevReturn>(p_psStatus);

                errorData errorDescription = Error.GetErrorDescription(status[0].iLogicCode);
                errorDescription.Status = status[0];
                errorDescription.Result = result;
                return errorDescription;
            }
            catch (Exception ex)
            {
                return new errorData { Code = "-1", Description = "Error en el método SetCommPara():" + ex.Message };
            }
        }

        public errorData Init(IntPtr p_psStatus)
        {
            try
            {
                int result = OIOExtendDevWrapper.iInit(m_hDevHandle, p_psStatus);
                tDevReturn status = (tDevReturn)Marshal.PtrToStructure(p_psStatus, typeof(tDevReturn));

                errorData errorDescription = Error.GetErrorDescription(status.iLogicCode);
                errorDescription.Status = status;
                errorDescription.Result = result;
                return errorDescription;
            }
            catch (Exception ex)
            {
                return new errorData { Code = "-1", Description = "Error en el método SetCommPara():" + ex.Message };
            }
        }

        public errorData GetLightStatus(int p_piLightNum, IntPtr p_psStatus)
        {
            try
            {
                int result = OIOExtendDevWrapper.iGetLightStatus(m_hDevHandle, p_piLightNum, p_psStatus);
                tDevReturn status = (tDevReturn)Marshal.PtrToStructure(p_psStatus, typeof(tDevReturn));

                errorData errorDescription = Error.GetErrorDescription(status.iLogicCode);
                errorDescription.Status = status;
                errorDescription.Result = result;
                return errorDescription;
            }
            catch (Exception ex)
            {
                return new errorData { Code = "-1", Description = "Error en el método SetCommPara():" + ex.Message };
            }
        }

        public errorData SetLightStatus(int p_piLightNum, int p_piStatus, IntPtr p_psStatus)
        {
            try
            {
                int result = OIOExtendDevWrapper.iSetLightStatus(m_hDevHandle, p_piLightNum, p_piStatus, p_psStatus);
                tDevReturn status = (tDevReturn)Marshal.PtrToStructure(p_psStatus, typeof(tDevReturn));

                errorData errorDescription = Error.GetErrorDescription(status.iLogicCode);
                errorDescription.Status = status;
                errorDescription.Result = result;
                return errorDescription;
            }
            catch (Exception ex)
            {
                return new errorData { Code = "-1", Description = "Error en el método SetCommPara():" + ex.Message };
            }
        }

        public errorData GetDoorStatus(int p_piDoorNum, IntPtr p_psStatus)
        {
            try
            {
                int result = OIOExtendDevWrapper.iGetDoorStatus(m_hDevHandle, p_piDoorNum, p_psStatus);
                tDevReturn status = (tDevReturn)Marshal.PtrToStructure(p_psStatus, typeof(tDevReturn));

                errorData errorDescription = Error.GetErrorDescription(status.iLogicCode);
                errorDescription.Status = status;
                errorDescription.Result = result;
                return errorDescription;
            }
            catch (Exception ex)
            {
                return new errorData { Code = "-1", Description = "Error en el método SetCommPara():" + ex.Message };
            }
        }

        public errorData GetDevStatus(IntPtr p_psStatus)
        {
            try
            {
                int result = OIOExtendDevWrapper.iGetDevStatus(m_hDevHandle, p_psStatus);
                tDevReturn status = (tDevReturn)Marshal.PtrToStructure(p_psStatus, typeof(tDevReturn));

                errorData errorDescription = Error.GetErrorDescription(status.iLogicCode);
                errorDescription.Status = status;
                errorDescription.Result = result;
                return errorDescription;
            }
            catch (Exception ex)
            {
                return new errorData { Code = "-1", Description = "Error en el método SetCommPara():" + ex.Message };
            }
        }

        public errorData GetStatus(IntPtr p_psStatus)
        {
            try
            {
                int result = OIOExtendDevWrapper.iGetStatus(m_hDevHandle, p_psStatus);
                tDevReturn status = (tDevReturn)Marshal.PtrToStructure(p_psStatus, typeof(tDevReturn));

                errorData errorDescription = Error.GetErrorDescription(status.iLogicCode);
                errorDescription.Status = status;
                errorDescription.Result = result;
                return errorDescription;
            }
            catch (Exception ex)
            {
                return new errorData { Code = "-1", Description = "Error en el método SetCommPara():" + ex.Message };
            }
        }

        public errorData GetDevVersion(StringBuilder p_pcVersion)
        {
            try
            {
                int result = OIOExtendDevWrapper.iGetDevVersion(m_hDevHandle, p_pcVersion);
                //string version = Marshal.PtrToStringAnsi(p_pcVersion);
                string version = p_pcVersion.ToString();

                return new errorData { Result = result, Code = result.ToString(), Description = version };
            }
            catch (Exception ex)
            {
                return new errorData { Code = "-1", Description = "Error en el método GetDevVersion():" + ex.Message };
            }
        }

        public errorData GetVersion(StringBuilder p_pcVersion)
        {
            try
            {
                int result = OIOExtendDevWrapper.iGetVersion(m_hDevHandle, p_pcVersion);
                //string version = Marshal.PtrToStringAnsi(p_pcVersion);
                string version = p_pcVersion.ToString();

                return new errorData { Result = result, Code = result.ToString(), Description = version };
            }
            catch (Exception ex)
            {
                return new errorData { Code = "-1", Description = "Error en el método GetDevVersion():" + ex.Message };
            }
        }

        public errorData GetSerialNumber(StringBuilder p_pcSerial, IntPtr p_psStatus)
        {
            try
            {
                int result = OIOExtendDevWrapper.iGetSerialNumber(m_hDevHandle, p_pcSerial, p_psStatus);
                tDevReturn status = (tDevReturn)Marshal.PtrToStructure(p_psStatus, typeof(tDevReturn));
                //string serialNumber = Marshal.PtrToStringAnsi(p_pcSerial);
                string serialNumber = p_pcSerial.ToString();

                errorData errorDescription = Error.GetErrorDescription(status.iLogicCode);
                errorDescription.Status = status;
                errorDescription.Result = result;

                if (result == 0)
                {
                    errorDescription.Description = serialNumber;
                }
                return errorDescription;
            }
            catch (Exception ex)
            {
                return new errorData { Code = "-1", Description = ex.Message };
            }
        }

        public errorData GetDevCapability(IntPtr p_puiCapability, int p_uiNumber)
        {
            try
            {
                int result = OIOExtendDevWrapper.iGetDevCapability(m_hDevHandle, p_puiCapability, p_uiNumber);
                string Capability = Marshal.PtrToStringAnsi(p_puiCapability);
                return new errorData { Result = result, Code = result.ToString(), Description = Capability };
            }
            catch (Exception ex)
            {
                return new errorData { Code = "-1", Description = "Error en el método SetCommPara():" + ex.Message };
            }
        }

        public errorData GetPowerBtnStatus(int p_piBtnStatus, IntPtr p_psStatus)
        {
            try
            {
                int result = OIOExtendDevWrapper.iGetPowerBtnStatus(m_hDevHandle, p_piBtnStatus, p_psStatus);
                tDevReturn status = (tDevReturn)Marshal.PtrToStructure(p_psStatus, typeof(tDevReturn));

                errorData errorDescription = Error.GetErrorDescription(status.iLogicCode);
                errorDescription.Status = status;
                errorDescription.Result = result;
                return errorDescription;
            }
            catch (Exception ex)
            {
                return new errorData { Code = "-1", Description = ex.Message };
            }
        }

        public errorData SetDelaySwitchPower(int p_iDelayOff, int p_iDelayOn, IntPtr p_psStatus)
        {
            try
            {
                int result = OIOExtendDevWrapper.iSetDelaySwitchPower(m_hDevHandle, p_iDelayOff, p_iDelayOn, p_psStatus);
                tDevReturn status = (tDevReturn)Marshal.PtrToStructure(p_psStatus, typeof(tDevReturn));
                errorData errorDescription = Error.GetErrorDescription(status.iLogicCode);
                errorDescription.Status = status;
                errorDescription.Result = result;
                return errorDescription;
            }
            catch (Exception ex)
            {
                return new errorData { Code = "-1", Description = ex.Message };
            }
        }

        public errorData SetSwitchMachineConf(IntPtr p_psConfInfo, IntPtr p_psStatus)
        {
            try
            {
                int result = OIOExtendDevWrapper.iSetSwitchMachineConf(m_hDevHandle, p_psConfInfo, p_psStatus);
                tDevReturn status = (tDevReturn)Marshal.PtrToStructure(p_psStatus, typeof(tDevReturn));

                errorData errorDescription = Error.GetErrorDescription(status.iLogicCode);
                errorDescription.Status = status;
                errorDescription.Result = result;
                return errorDescription;
            }
            catch (Exception ex)
            {
                return new errorData { Code = "-1", Description = "Error en el método SetCommPara():" + ex.Message };
            }
        }

        public errorData iAdjustLightSetting(IntPtr p_psConfInfo, IntPtr p_psStatus)
        {
            try
            {
                int result = OIOExtendDevWrapper.iAdjustLightSetting(m_hDevHandle, p_psConfInfo, p_psStatus);
                tDevReturn status = (tDevReturn)Marshal.PtrToStructure(p_psStatus, typeof(tDevReturn));

                errorData errorDescription = Error.GetErrorDescription(status.iLogicCode);
                errorDescription.Status = status;
                errorDescription.Result = result;
                return errorDescription;
            }
            catch (Exception ex)
            {
                return new errorData { Code = "-1", Description = "Error en el método SetCommPara():" + ex.Message };
            }
        }

        public errorData UsbOnOffSetting(int p_byUsb1, int p_byUsb2, IntPtr p_psStatus)
        {
            try
            {
                int result = OIOExtendDevWrapper.iUsbOnOffSetting(m_hDevHandle, p_byUsb1, p_byUsb2, p_psStatus);
                tDevReturn status = (tDevReturn)Marshal.PtrToStructure(p_psStatus, typeof(tDevReturn));

                errorData errorDescription = Error.GetErrorDescription(status.iLogicCode);
                errorDescription.Status = status;
                errorDescription.Result = result;
                return errorDescription;
            }
            catch (Exception ex)
            {
                return new errorData { Code = "-1", Description = "Error en el método SetCommPara():" + ex.Message };
            }
        }

        public errorData GetLightSensingVoltage(uint p_uiLightSensingVoltage, IntPtr p_psStatus)
        {
            try
            {
                int result = OIOExtendDevWrapper.iGetLightSensingVoltage(m_hDevHandle, out p_uiLightSensingVoltage, p_psStatus);
                tDevReturn status = (tDevReturn)Marshal.PtrToStructure(p_psStatus, typeof(tDevReturn));

                errorData errorDescription = Error.GetErrorDescription(status.iLogicCode);
                errorDescription.Status = status;
                errorDescription.Result = result;
                return errorDescription;
            }
            catch (Exception ex)
            {
                return new errorData { Code = "-1", Description = "Error en el método SetCommPara():" + ex.Message };
            }
        }

        public errorData iSetPowerIndicatorConf(int p_byIndicatorFlag, int p_byIndicatorOutlet, int p_byIndicatorOnLevel, int p_byIndicatorFickerFrequency, IntPtr p_psStatus)
        {
            try
            {
                int result = OIOExtendDevWrapper.iSetPowerIndicatorConf(m_hDevHandle, p_byIndicatorFlag, p_byIndicatorOutlet, p_byIndicatorOnLevel, p_byIndicatorFickerFrequency, p_psStatus);
                tDevReturn status = (tDevReturn)Marshal.PtrToStructure(p_psStatus, typeof(tDevReturn));

                errorData errorDescription = Error.GetErrorDescription(status.iLogicCode);
                errorDescription.Status = status;
                errorDescription.Result = result;
                return errorDescription;
            }
            catch (Exception ex)
            {
                return new errorData { Code = "-1", Description = "Error en el método SetCommPara():" + ex.Message };
            }
        }

        public errorData Alarm(int p_bySwitch, IntPtr p_psStatus)
        {
            try
            {
                int result = OIOExtendDevWrapper.iAlarm(m_hDevHandle, p_bySwitch, p_psStatus);
                tDevReturn status = (tDevReturn)Marshal.PtrToStructure(p_psStatus, typeof(tDevReturn));

                errorData errorDescription = Error.GetErrorDescription(status.iLogicCode);
                errorDescription.Status = status;
                errorDescription.Result = result;
                return errorDescription;
            }
            catch (Exception ex)
            {
                return new errorData { Code = "-1", Description = "Error en el método SetCommPara():" + ex.Message };
            }
        }

        public errorData SetDuniteCfg(string CfgFileDir, string UsbSetDeviceFd, IntPtr p_psStatus)
        {
            try
            {
                int result = OIOExtendDevWrapper.iSetDuniteCfg(m_hDevHandle, CfgFileDir, UsbSetDeviceFd, p_psStatus);
                tDevReturn status = (tDevReturn)Marshal.PtrToStructure(p_psStatus, typeof(tDevReturn));

                errorData errorDescription = Error.GetErrorDescription(status.iLogicCode);
                errorDescription.Status = status;
                errorDescription.Result = result;
                return errorDescription;
            }
            catch (Exception ex)
            {
                return new errorData { Code = "-1", Description = "Error en el método SetCommPara():" + ex.Message };
            }
        }

        public errorData GetDeviceID(StringBuilder p_pcDeviceID, IntPtr p_psStatus)
        {
            try
            {
                int result = OIOExtendDevWrapper.iGetDeviceID(m_hDevHandle, p_pcDeviceID, p_psStatus);
                tDevReturn status = (tDevReturn)Marshal.PtrToStructure(p_psStatus, typeof(tDevReturn));

                errorData errorDescription = Error.GetErrorDescription(status.iLogicCode);
                errorDescription.Status = status;
                errorDescription.Result = result;
                return errorDescription;
            }
            catch (Exception ex)
            {
                return new errorData { Code = "-1", Description = "Error en el método SetCommPara():" + ex.Message };
            }
        }

        public errorData GetIOActiveTime(StringBuilder p_pcActiveTime, IntPtr p_psStatus)
        {
            try
            {
                int result = OIOExtendDevWrapper.iGetIOActiveTime(m_hDevHandle, p_pcActiveTime, p_psStatus);
                tDevReturn status = (tDevReturn)Marshal.PtrToStructure(p_psStatus, typeof(tDevReturn));

                errorData errorDescription = Error.GetErrorDescription(status.iLogicCode);
                errorDescription.Status = status;
                errorDescription.Result = result;
                return errorDescription;
            }
            catch (Exception ex)
            {
                return new errorData { Code = "-1", Description = "Error en el método SetCommPara():" + ex.Message };
            }
        }

        public errorData GoBootLoader(IntPtr p_psStatus)
        {
            try
            {
                int result = OIOExtendDevWrapper.iGoBootLoader(m_hDevHandle, p_psStatus);
                tDevReturn status = (tDevReturn)Marshal.PtrToStructure(p_psStatus, typeof(tDevReturn));

                errorData errorDescription = Error.GetErrorDescription(status.iLogicCode);
                errorDescription.Status = status;
                errorDescription.Result = result;
                return errorDescription;
            }
            catch (Exception ex)
            {
                return new errorData { Code = "-1", Description = "Error en el método SetCommPara():" + ex.Message };
            }
        }

        public errorData GetProgress(int p_cProgress, IntPtr p_psStatus)
        {
            try
            {
                int result = OIOExtendDevWrapper.iGetProgress(m_hDevHandle, p_cProgress, p_psStatus);
                tDevReturn status = (tDevReturn)Marshal.PtrToStructure(p_psStatus, typeof(tDevReturn));

                errorData errorDescription = Error.GetErrorDescription(status.iLogicCode);
                errorDescription.Status = status;
                errorDescription.Result = result;
                return errorDescription;
            }
            catch (Exception ex)
            {
                return new errorData { Code = "-1", Description = "Error en el método SetCommPara():" + ex.Message };
            }
        }

        public errorData FirmwareDownload(string p_pcDownloadPath, IntPtr p_psStatus)
        {
            try
            {
                int result = OIOExtendDevWrapper.iFirmwareDownload(m_hDevHandle, p_pcDownloadPath, p_psStatus);
                tDevReturn status = (tDevReturn)Marshal.PtrToStructure(p_psStatus, typeof(tDevReturn));

                errorData errorDescription = Error.GetErrorDescription(status.iLogicCode);
                errorDescription.Status = status;
                errorDescription.Result = result;
                return errorDescription;
            }
            catch (Exception ex)
            {
                return new errorData { Code = "-1", Description = "Error en el método SetCommPara():" + ex.Message };
            }
        }
    }
}
