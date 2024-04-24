/*
 * @Author: icemaple-z99 450196683@qq.com
 * @Date: 2023-05-23 22:37:47
 * @LastEditors: icemaple-z99 450196683@qq.com
 * @LastEditTime: 2023-06-20 15:35:55
 * @FilePath: \IOExtendDev\src\OIOExtendDevStruct.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/**
 * @file OIOExtendDevStruct.h
 * @brief OIOExtendDev扩展板结构体
 */
#ifndef _OIOExtendDevStruct_H
#define _OIOExtendDevStruct_H


#pragma pack(push, 1)


/**
 * @page page_tSwitchMachineConfInfo tSwitchMachineConfInfo
 * @anchor ref_dsc_tSwitchMachineConfInfo 开关机默认配置信息结构体
 * 
 * @code{.cpp}
 * typedef struct
 * {
 *    BYTE	byConfFlag;
 *    BYTE	byIsPowerUp;
 *    UINT	uiOffToOnTime;
 *    UINT	uiKeyInvalidTime;
 *    UINT	uiColdStartTime;
 *    UINT	uiOnToOffTime;
 *    UINT	uiDelayShutdownTime;
 *    UINT	uiDelayBootUpTime;
 *    BYTE  byUsbOnOff;
 * }tSwitchMachineConfInfo;  
 * @endcode
 * 
 * @param byConfFlag 是否使用后面的开关机配置参数 0:不使用，后面的参数无效，使用（处理器保存的）默认配置 1:使用后面参数,后面参数有效
 * @param byIsPowerUp 开机是否给整机上电  0:否  1：是
 * @param uiOffToOnTime 整机从断电到上电的确认时间（按键要按多久才能开机）,单位：ms,该值不能小于200ms消抖时间
 * @param uiKeyInvalidTime 整机刚上电后，多少秒内按键无效,单位：ms, 0表示按键一直有效
 * @param uiColdStartTime 整机进入冷启动的确认时间（按键要按多久设备重启）,单位：ms, 0表示该参数无效，没有Reset设置
 * @param uiOnToOffTime 整机关键确认时间（按键要按多久才能开关机）,单位：ms
 * @param uiDelayShutdownTime 延时关机时间,单位：s
 * @param uiDelayBootUpTime 延时开机时间,单位：s
 * @param byUsbOnOff 整机上电后是否打开面板上的usb口电源，0:关闭，1:打开
 */
typedef struct						// 开关机默认配置信息结构体
{
	BYTE	byConfFlag;				///< 是否使用后面的开关机配置参数 0:不使用，后面的参数无效，使用（处理器保存的）默认配置 1:使用后面参数,后面参数有效
	BYTE	byIsPowerUp;			///< 开机是否给整机上电  0:否  1：是
	UINT	uiOffToOnTime;			///< 整机从断电到上电的确认时间（按键要按多久才能开机）,单位：ms,该值不能小于200ms消抖时间
	UINT	uiKeyInvalidTime;		///< 整机刚上电后，多少秒内按键无效,单位：ms, 0表示按键一直有效
	UINT	uiColdStartTime;		///< 整机进入冷启动的确认时间（按键要按多久设备重启）,单位：ms, 0表示该参数无效，没有Reset设置
	UINT	uiOnToOffTime;		  	///< 整机关键确认时间（按键要按多久才能开关机）,单位：ms
	UINT	uiDelayShutdownTime;	///< 延时关机时间,单位：s
	UINT	uiDelayBootUpTime;		///< 延时开机时间,单位：s
	BYTE    byUsbOnOff;				///< 整机上电后是否打开面板上的usb口电源，0:关闭，1:打开

} tSwitchMachineConfInfo;

/**
 * @page page_tAdjustLightConfInfo tAdjustLightConfInfo
 * @anchor ref_dsc_tAdjustLightConfInfo 调光配置信息结构体
 * 
 * @code{.cpp}
 * typedef struct
 * {
 *    BYTE  byAddButton;		
 *    BYTE  bySubtractButton;	
 *    BYTE  byGrowthValue ;	
 *    BYTE  byDimmingOutlet;	
 *    BYTE  byAutomDimmer;
 *    UINT  byBackToAutoDimmer
 *    BYTE  abyLightLevel[32];
 *    BYTE  byCloseLightLevel;
 * }tAdjustLightConfInfo;  
 * @endcode
 * 
 * @param byAddButton “+”按键对应的输入口，1~12, 0表示此按键无效
 * @param bySubtractButton “-”按键对应的输入口，1~12, 0表示此按键无效
 * @param byGrowthValue 按键一次增加的步长 1~12
 * @param byDimmingOutlet 调光输出口  1~12
 * @param byAutomDimmer 是否自动调光，0：否，1：是
 * @param byBackToAutoDimmer 按键按下多少秒后回到自动调光状态，单位：秒，4字节	
 * @param abyLightLevel 每一等级对应补偿 的输出强度，从弱到强， byLightLevel[12]~byLightLevel[31]预留
 * @param byCloseLightLevel 补光灯开始关闭调光的光强等级(当光强达到byCloseLightLevel等级关闭补光灯)
 */
typedef struct						// 调光配置信息结构体
{
	BYTE  byAddButton;				///< “+”按键对应的输入口，1~12, 0表示此按键无效
	BYTE  bySubtractButton;			///< “-”按键对应的输入口，1~12, 0表示此按键无效
	BYTE  byGrowthValue ;			///< 按键一次增加的步长 1~12
    BYTE  byDimmingOutlet;			///< 调光输出口  1~12
	BYTE  byAutomDimmer;			///< 是否自动调光，0：否，1：是
	UINT  byBackToAutoDimmer;       ///< 按键按下多少秒后回到自动调光状态，单位：秒，4字节	
	BYTE  abyLightLevel[32];        ///< 每一等级对应补偿 的输出强度，从弱到强， byLightLevel[12]~byLightLevel[31]预留
	BYTE  byCloseLightLevel;		///< 补光灯开始关闭调光的光强等级(当光强达到byCloseLightLevel等级关闭补光灯)
} tAdjustLightConfInfo;

#pragma pack(pop)

#endif