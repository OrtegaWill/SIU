using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using IOEXTENDGRG.Models;
using System.Runtime.InteropServices;

namespace IOEXTENDGRG
{
    public static class OIOExtendDevWrapper
    {
        // Importación de funciones con DllImport
        private const string DllName = "OIOExtendDevDll.dll";

        [DllImport(DllName, EntryPoint = "vSetLogicalDevName")]
        public static extern IntPtr vSetLogicalDevName(string p_pcLogDevName);

        [DllImport(DllName, EntryPoint = "vGetLogicalDevName")]
        public static extern IntPtr vGetLogicalDevName(string p_pcLogDevName);

        [DllImport(DllName, EntryPoint = "hOpenLogicDevice")]
        public static extern IntPtr hOpenLogicDevice(string p_pcLogicDevName);

        [DllImport(DllName, EntryPoint = "vCloseLogicDevice")]
        public static extern void vCloseLogicDevice(IntPtr p_hDevHandle);

        [DllImport(DllName, EntryPoint = "iSetCommPara")]
        public static extern int iSetCommPara(System.IntPtr p_hDevHandle, System.IntPtr p_psStatus);

        [DllImport(DllName, EntryPoint = "vSetProcFun")]
        public static extern void vSetProcFun(IntPtr p_hDevHandle, vProcFun p_pvProcFun);

        [DllImport(DllName, EntryPoint = "vSetProcFun2")]
        public static extern void vSetProcFun2(IntPtr p_hDevHandle, vProcFun2 p_pvProcFun, IntPtr p_pSinkObject);

        [DllImport(DllName, EntryPoint = "iCloseComm")]
        public static extern int iCloseComm(IntPtr p_hDevHandle, IntPtr p_psStatus);

        [DllImport(DllName, EntryPoint = "iGetIntValue")]
        public static extern int iGetIntValue(IntPtr p_hDevHandle, StringBuilder p_pcSection, StringBuilder p_pcKeyName, out long p_pKeyValue);

        [DllImport(DllName, EntryPoint = "iSetIntValue")]
        public static extern int iSetIntValue(IntPtr p_hDevHandle, StringBuilder p_pcSection, StringBuilder p_pcKeyName, long p_lKeyValue);

        [DllImport(DllName, EntryPoint = "iGetProgress")]
        public static extern int iGetProgress(IntPtr p_hDevHandle, out int p_cProgress, IntPtr p_psStatus);
        [DllImport(DllName, EntryPoint = "iGetStringValue")]
        public static extern int iGetStringValue(IntPtr p_hDevHandle, StringBuilder p_pcSection, StringBuilder p_pcKeyName, StringBuilder p_lKeyValue);
        [DllImport(DllName, EntryPoint = "iSetStringValue")]
        public static extern int iSetStringValue(IntPtr p_hDevHandle, StringBuilder p_pcSection, StringBuilder p_pcKeyName, string p_lKeyValue);

        [DllImport(DllName, EntryPoint = "iInit")]
        public static extern int iInit(IntPtr p_hDevHandle, IntPtr p_psStatus);

        [DllImport(DllName, EntryPoint = "iGetLightStatus")]
        public static extern int iGetLightStatus(IntPtr p_hDevHandle, int p_piLightNum, IntPtr p_psStatus);

        
        [DllImport(DllName, EntryPoint = "iSetLightStatus")]
        public static extern int iSetLightStatus(IntPtr p_hDevHandle, int p_piLightNum, int p_piStatus, IntPtr p_psStatus);

        [DllImport(DllName, EntryPoint = "iGetDoorStatus")]
        public static extern int iGetDoorStatus(IntPtr p_hDevHandle, int p_piDoorNum, IntPtr p_psStatus);

        [DllImport(DllName, EntryPoint = "iGetDevStatus")]
        public static extern int iGetDevStatus(IntPtr p_hDevHandle, IntPtr p_psStatus);

        [DllImport(DllName, EntryPoint = "iGetStatus")]
        public static extern int iGetStatus(IntPtr p_hDevHandle, IntPtr p_psStatus);

        [DllImport(DllName, EntryPoint = "iGetDevVersion")]
        public static extern int iGetDevVersion(IntPtr p_hDevHandle, StringBuilder p_pcVersion);

        [DllImport(DllName, EntryPoint = "iGetVersion")]
        public static extern int iGetVersion(IntPtr p_hDevHandle, StringBuilder p_pcVersion);

        [DllImport(DllName, EntryPoint = "iGetSerialNumber")]
        public static extern int iGetSerialNumber(IntPtr p_hDevHandle, StringBuilder p_pcSerial, IntPtr p_psStatus);

        [DllImport(DllName, EntryPoint = "iGetDevCapability")]
        public static extern int iGetDevCapability(IntPtr p_hDevHandle, IntPtr p_puiCapability, int p_uiNumber);

        [DllImport(DllName, EntryPoint = "iGetPowerBtnStatus")]
        public static extern int iGetPowerBtnStatus(IntPtr p_hDevHandle, int p_piBtnStatus, IntPtr p_psStatus);
        [DllImport(DllName, EntryPoint = "iSetDelaySwitchPower")]
        public static extern int iSetDelaySwitchPower(IntPtr p_hDevHandle, int p_iDelayOff, int p_iDelayOn, IntPtr p_psStatus);

        [DllImport(DllName, EntryPoint = "iSetSwitchMachineConf")]
        public static extern int iSetSwitchMachineConf(IntPtr p_hDevHandle, IntPtr p_psConfInfo, IntPtr p_psStatus);

        [DllImport(DllName, EntryPoint = "iAdjustLightSetting")]
        public static extern int iAdjustLightSetting(IntPtr p_hDevHandle, IntPtr p_psConfInfo, IntPtr p_psStatus);

        [DllImport(DllName, EntryPoint = "iUsbOnOffSetting")]
        public static extern int iUsbOnOffSetting(IntPtr p_hDevHandle, int p_byUsb1, int p_byUsb2, IntPtr p_psStatus);

        [DllImport(DllName, EntryPoint = "iGetLightSensingVoltage")]
        public static extern int iGetLightSensingVoltage(IntPtr p_hDevHandle, out uint p_uiLightSensingVoltage, IntPtr p_psStatus);
        //public static extern int iGetLightSensingVoltage(IntPtr p_hDevHandle, IntPtr p_uiLightSensingVoltage, IntPtr p_psStatus);


        [DllImport(DllName, EntryPoint = "iSetPowerIndicatorConf")]
        public static extern int iSetPowerIndicatorConf(IntPtr p_hDevHandle, int p_byIndicatorFlag, int p_byIndicatorOutlet, int p_byIndicatorOnLevel, int p_byIndicatorFickerFrequency, IntPtr p_psStatus);

        [DllImport(DllName, EntryPoint = "iAlarm")]
        public static extern int iAlarm(IntPtr p_hDevHandle, int p_bySwitch, IntPtr p_psStatus);

        [DllImport(DllName, EntryPoint = "iSetDuniteCfg")]
        public static extern int iSetDuniteCfg(IntPtr p_hDevHandle, string CfgFileDir, string UsbSetDeviceFd, IntPtr p_psStatus);

        [DllImport(DllName, EntryPoint = "iGetDeviceID")]
        public static extern int iGetDeviceID(IntPtr p_hDevHandle, StringBuilder p_pcDeviceID, IntPtr p_psStatus);

        [DllImport(DllName, EntryPoint = "iGetIOActiveTime")]
        public static extern int iGetIOActiveTime(IntPtr p_hDevHandle, StringBuilder p_pcActiveTime, IntPtr p_psStatus);

        [DllImport(DllName, EntryPoint = "iGoBootLoader")]
        public static extern int iGoBootLoader(IntPtr p_hDevHandle, IntPtr p_psStatus);

        [DllImport(DllName, EntryPoint = "iGetProgress")]
        public static extern int iGetProgress(IntPtr p_hDevHandle, int p_cProgress, IntPtr p_psStatus);

        [DllImport(DllName, EntryPoint = "iFirmwareDownload")]
        public static extern int iFirmwareDownload(IntPtr p_hDevHandle, string p_pcDownloadPath, IntPtr p_psStatus);
    }

    public delegate void vProcFun(int p_iType, IntPtr p_pData, int p_iLen);
    public delegate void vProcFun2(int p_iType, IntPtr p_pData, int p_iLen, IntPtr p_pvParam);

}
