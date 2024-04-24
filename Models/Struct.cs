using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace IOEXTENDGRG.Models
{
    [StructLayout(LayoutKind.Sequential, Pack = 1)]
    public struct tDevReturn
    {
        public Int32 iLogicCode; //Logic error code
        public Int32 iPhyCode; //Physical error code
        public Int32 iHandle;
        public Int32 iType; //Tipo de error(0 = Normal 1= Warning 2= Error)

        [MarshalAs(UnmanagedType.ByValArray, SizeConst = 128, ArraySubType = UnmanagedType.I1)]
        public byte[] acDevReturn; //Returned information from the hardware
        [MarshalAs(UnmanagedType.ByValArray, SizeConst = 128, ArraySubType = UnmanagedType.I1)]
        public byte[] acReserve; //information reserve
    }

    [StructLayout(LayoutKind.Sequential, Pack = 1)]
    public struct tSwitchMachineConfInfo
    {
        public byte byConfFlag;          // Configuration flag: 1 for enabled, 0 for disabled
        public byte byIsPowerUp;        // Power-up state: 0 for off, 1 for on
        public uint uiOffToOnTime;        // Time from off to on in milliseconds (minimum 200ms)
        public uint uiKeyInvalidTime;     // Key invalid time in seconds (0 for disabled)
        public uint uiColdStartTime;      // Cold start time in milliseconds (0 for no reset)
        public uint uiOnToOffTime;       // Time from on to off in seconds
        public uint uiDelayShutdownTime;  // Delay shutdown time
        public uint uiDelayBootUpTime;    // Delay boot up time
        public byte byUsbOnOff;          // USB on/off state: 0 for off, 1 for on
    }

    // Adjust Light Configuration Information
    [StructLayout(LayoutKind.Sequential, Pack = 1)]
    public struct tAdjustLightConfInfo
    {
        public byte byAddButton;          // Add button code (0-12, 0 for disabled)
        public byte bySubtractButton;     // Subtract button code (0-12, 0 for disabled)
        public byte byGrowthValue;        // Growth value (1-12)
        public byte byDimmingOutlet;      // Dimming outlet number (1-12)
        public byte byAutomDimmer;        // Automatic dimmer enabled flag (0 for off, 1 for on)
        public uint byBackToAutoDimmer;   // Time to return to automatic dimming in seconds (multiple of 4)
        public byte[] abyLightLevel;      // Array of light levels for each segment (byLightLevel[12] to byLightLevel[31] are used)
        public byte byCloseLightLevel;    // Close light level (used when light is turned off)
    }
}
