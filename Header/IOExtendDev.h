// IOExtendDev.h 
//
//////////////////////////////////////////////////////////////////////

#ifndef __IOEXTENDDEV_H__
#define __IOEXTENDDEV_H__


#include "OIOExtendDevStruct.h"
#include <ODevBase.h>

#ifndef IODEFINE
#define IODEFINE

// 指示灯的编号宏定义
/**
 * @brief 所有指示灯
 * 
 */
#define IOEXTEND_ALLINDICATOR	0				// 所有指示灯

/**
 * @brief 指示灯1
 * 
 */
#define IOEXTEND_INDICATOR1		1				// 指示灯1

/**
 * @brief 指示灯2
 * 
 */
#define IOEXTEND_INDICATOR2		2				// 指示灯2

/**
 * @brief 指示灯3
 * 
 */
#define IOEXTEND_INDICATOR3		3				// 指示灯3

/**
 * @brief 指示灯4
 * 
 */
#define IOEXTEND_INDICATOR4		4				// 指示灯4

/**
 * @brief 指示灯5
 * 
 */
#define IOEXTEND_INDICATOR5		5				// 指示灯5

/**
 * @brief 指示灯6
 * 
 */
#define IOEXTEND_INDICATOR6		6				// 指示灯6

/**
 * @brief 指示灯7
 * 
 */
#define IOEXTEND_INDICATOR7		7				// 指示灯7

/**
 * @brief 指示灯8
 * 
 */
#define IOEXTEND_INDICATOR8		8				// 指示灯8

/**
 * @brief 指示灯9
 * 
 */
#define IOEXTEND_INDICATOR9		9				// 指示灯9

/**
 * @brief 指示灯10
 * 
 */
#define IOEXTEND_INDICATOR10	10				// 指示灯10

/**
 * @brief 指示灯11
 * 
 */
#define IOEXTEND_INDICATOR11	11				// 指示灯11

/**
 * @brief 指示灯12
 * 
 */
#define IOEXTEND_INDICATOR12	12				// 指示灯12

/**
 * @brief 指示灯13
 * 
 */
#define IOEXTEND_INDICATOR13	13				// 指示灯13

/**
 * @brief 指示灯14
 * 
 */
#define IOEXTEND_INDICATOR14	14				// 指示灯14

// 指示灯的状态宏定义
/**
 * @brief 灯灭
 * 
 */
#define IOEXTEND_LIGHT_OFF				0		// 灯灭

/**
 * @brief 灯持续亮
 * 
 */
#define IOEXTEND_LIGHT_CONTINUOUS		1		// 灯持续亮

/**
 * @brief 指示灯慢速闪烁
 * 
 */
#define IOEXTEND_SLOW_FLASH				2		// 指示灯慢速闪烁

/**
 * @brief 指示灯中速闪烁
 * 
 */
#define IOEXTEND_MEDIUM_FLASH			3		// 指示灯中速闪烁

/**
 * @brief 指示灯快速闪烁
 * 
 */
#define IOEXTEND_QUICK_FLASH			4		// 指示灯快速闪烁

/**
 * @brief 占空比可调
 * 
 */
#define IOEXTEND_ADJ_FLASH	    		5       // 占空比可调

/**
 * @brief 宽度可调脉冲
 * 
 */
#define IOEXTEND_PULSE      			6       // 宽度可调脉冲

/**
 * @brief 调光模式  设置一路或多路灯的亮度
 * 
 */
#define IOEXTEND_ADJ_LIGHT				7		// 调光模式  设置一路或多路灯的亮度

/**
 * @brief 灯渐亮模式 'g' 亮度逐渐变亮。
 * 
 */
#define IOSIGNALCTR_CHANGE_LIGHTON			8		// 灯渐亮模式 'g' 亮度逐渐变亮。

/**
 * @brief 灯渐灭模式 'G' 亮度逐渐变暗
 * 
 */
#define IOSIGNALCTR_CHANGE_LIGHTOFF			9		// 灯渐灭模式 'G' 亮度逐渐变暗

// 门的编号宏定义
/**
 * @brief 所有的门
 * 
 */
#define IOEXTEND_ALLDOOR				0		// 所有的门

/**
 * @brief 门1
 * 
 */
#define IOEXTEND_DOOR1					1		// 门1

/**
 * @brief 门2
 * 
 */
#define IOEXTEND_DOOR2					2		// 门2

/**
 * @brief 门3
 * 
 */
#define IOEXTEND_DOOR3					3		// 门3

/**
 * @brief 门4
 * 
 */
#define IOEXTEND_DOOR4					4		// 门4

/**
 * @brief 门5
 * 
 */
#define IOEXTEND_DOOR5					5		// 门5

/**
 * @brief 门6
 * 
 */
#define IOEXTEND_DOOR6					6		// 门6

/**
 * @brief 门7
 * 
 */
#define IOEXTEND_DOOR7					7		// 门7

/**
 * @brief 门8
 * 
 */
#define IOEXTEND_DOOR8					8		// 门8

/**
 * @brief 门9
 * 
 */
#define IOEXTEND_DOOR9					9		// 门9

/**
 * @brief 门10
 * 
 */
#define IOEXTEND_DOOR10					10		// 门10

/**
 * @brief 门11
 * 
 */
#define IOEXTEND_DOOR11					11		// 门11

/**
 * @brief 门12
 * 
 */
#define IOEXTEND_DOOR12					12		// 门12

// 门的状态宏定义
/**
 * @brief 门开
 * 
 */
#define IOEXTEND_DOOR_OPEN				1		// 门开

/**
 * @brief 门关
 * 
 */
#define IOEXTEND_DOOR_CLOSE				0		// 门关

/**
 * @brief 回调函数类型
 * 
 */
#define PROCFUNC_IOEXTENDTYPE			6900

#endif //#ifndef IODEFINE


#ifndef IOEXTENDDEV_DEF_DEVNAME
#define IOEXTENDDEV_DEF_DEVNAME			"IOEXTENDDEV"
#endif // STAMPPTR_DEF_DEVNAME

#ifdef _DEBUG
#define IOEXTENDDEV_FILE_NAME			"OIOExtendDevDll.dll"
#else // _DEBUG
#define IOEXTENDDEV_FILE_NAME			"OIOExtendDevDll.dll"
#endif // _DEBUG

#ifndef VPROCFUN
#define VPROCFUN
#ifdef _WIN32
typedef	void (*vProcFun)(int p_iType, WPARAM p_pData, int p_iLen);
typedef	void (*vProcFun2)(int p_iType, WPARAM p_pData, int p_iLen, const void* p_pvParam);
#else
typedef	void (*vProcFun)(int p_iType, void* p_pData, int p_iLen);
typedef	void (*vProcFun2)(int p_iType, void* p_pData, int p_iLen, const void* p_pvParam);
#endif  // _WIN32
#endif //#ifndef VPROCFUN

class IOExtendDev
{
public:
	IOExtendDev(const char* pFileName = IOEXTENDDEV_FILE_NAME);
	virtual ~IOExtendDev();
	
	void vSetLogicalDevName(const char* p_pcLogDevName);
	void vGetLogicalDevName(char* p_pcLogDevName);
	void vSetProcFun(const vProcFun p_pvProcFun);
	void vSetProcFun2(const vProcFun2 p_pvProcFun, const void* p_pSinkObject = NULL);
	int  iCloseComm(tDevReturn* p_psStatus);
	int  iGetIntValue(const char *p_pcSection, const char *p_pcKeyName, long* p_pKeyValue);
	int  iSetIntValue(const char *p_pcSection, const char *p_pcKeyName, long p_lKeyValue);
	int  iGetStringValue(const char *p_pcSection, const char *p_pcKeyName, char p_pcKeyValue[256]);
	int  iSetStringValue(const char *p_pcSection, const char *p_pcKeyName, char p_pcKeyValue[256]);

    /**
     * @brief 初始化模块
     * 
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 tDevReturn
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     */
	int  iInit(tDevReturn* p_psStatus);

    /**
     * @brief 获取由p_ piLightNum指定的灯的当前状态
     * 
     * @param[in] p_piLightNum 灯编号,取值范围 0~12
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 tDevReturn
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     */
	int  iGetLightStatus(int p_piLightNum, tDevReturn *p_psStatus);

    /**
     * @brief 通信设置
     * 
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 tDevReturn
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     */
	int  iSetCommPara(tDevReturn* p_psStatus);

    /**
     * @brief 将p_iLightNum指定的灯对应设置为p_iStatus指定的状态
     * 
     * @param[in] p_piLightNum 灯编号
     * @param[in] p_piStatus 灯状态
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 tDevReturn
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     */
	int  iSetLightStatus(int p_piLightNum, int p_piStatus, tDevReturn *p_psStatus);

    /**
     * @brief 将p_iLightNum指定的灯对应设置为p_iStatus指定的状态
     * 
     * @param[in] para 当配合闪烁输出时，为占空比参数。例如输出占空比为20%时，PARA为20。PARA范围为0---100 当配合脉冲输出时，为高电平持续时间参数，例如输出150毫秒宽的脉冲时，PARA为150。PARA范围为0—250,当配合设置灯亮度时， PARA范围为0--12（大于12默认为12）
     * @param[in] p_piLightNum 灯编号
     * @param[in] p_piStatus 灯状态
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 tDevReturn
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     */
	int	 iSetLightStatus(BYTE para, int p_piLightNum, int p_piStatus, tDevReturn *p_psStatus);

    /**
     * @brief 获取门状态
     * 
     * @param[in] p_iDoorNum 门编号，取值范围 0~12
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 tDevReturn
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     */
	int  iGetDoorStatus(int p_iDoorNum, tDevReturn* p_psStatus);

    /**
     * @brief 获取IO扩展板设备状态
     * 
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 tDevReturn
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     */
	int  iGetDevStatus(tDevReturn* p_psStatus);

    /**
     * @brief 获取IO扩展板状态
     * 
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 tDevReturn
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     */
	int  iGetStatus(tDevReturn* p_psStatus);

    /**
     * @brief 获取介质版本
     * 
     * @param[out] p_pcVersion 介质版本
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     */
	int  iGetDevVersion(char *p_pcVersion);

    /**
     * @brief 获取动态库版本
     * 
     * @param[out] p_pcVersion 动态库版本
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     */
	int  iGetVersion (char *p_pcVersion);  

    /**
     * @brief 获取序列号
     * 
     * @param[out] p_pcSerial 序列号,默认13个字节
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 tDevReturn
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     */
	int  iGetSerialNumber(char *p_pcSerial, tDevReturn *p_psStatus);

    /**
     * @brief 获取设备能力
     * 
     * @param[out] p_puiCapability 设备能力
     * @param[in] p_uiNumber 第几块板
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     */
	int  iGetDevCapability(UINT *p_puiCapability, UINT p_uiNumber = 1);

    /**
     * @brief 获取电源按键状态
     * 
     * @param[in] p_piBtnStatus 按键状态值
     * - 0 按键未被按下
     * - 1 按键被按下
     * - 2 整机重启
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 tDevReturn
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     */
	int  iGetPowerBtnStatus(int *p_piBtnStatus, tDevReturn *p_psStatus);

    /**
     * @brief 设置整机延时开关机
     * 
     * @param[in] p_iDelayOff 延时关机时间（单位：秒，取址范围：大于等于 0）
     * @param[in] p_iDelayOn 关机后延时开机的时间（单位：秒，取址范围：大于等于 0）
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 tDevReturn
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     */
	int  iSetDelaySwitchPower(int p_iDelayOff, int p_iDelayOn, tDevReturn *p_psStatus);

    /**
     * @brief 设置开关机默认参数
     * 
     * @param[in] p_psConfInfo 开关机默认配置信息结构体，详细信息参看结构体 tSignalBoardSwitchMachineConfInfo
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 tDevReturn
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     */
	int  iSetSwitchMachineConf(tSwitchMachineConfInfo* p_psConfInfo, tDevReturn *p_psStatus);

    /**
     * @brief 自动调光功能设置
     * 
     * @param[in] p_psConfInfo 调光配置信息结构体，详细信息参看结构体 tSignalBoardAdjustLightConfInfo
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 tDevReturn
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     */
	int  iAdjustLightSetting(tAdjustLightConfInfo* p_psConfInfo, tDevReturn *p_psStatus);

    /**
     * @brief USB通断设置
     * 
     * @param[in] p_byUsb1 面板上的USB口/需要对应信号板上的USB3
     * @param[in] p_byUsb2 面板上的USB口/需要对应信号板上的USB5
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 tDevReturn
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     */
	int  iUsbOnOffSetting(BYTE p_byUsb1,  BYTE p_byUsb2,  tDevReturn *p_psStatus);

    /**
     * @brief 读取光感电压AD值
     * 
     * @param[out] p_uiLightSensingVoltage 光感电压AD值
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 tDevReturn
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     */
	int  iGetLightSensingVoltage(UINT* p_uiLightSensingVoltage, tDevReturn* p_psStatus);

    /**
     * @brief 设置电源状态指示灯（一键开关机按键指示灯）配置
     * 
     * @param[in] p_byIndicatorFlag 电源状态指示灯控制是否生效
     * - 0 不生效
     * - 1 生效
     * @param[in] p_byIndicatorOutlet 设置电源状态指示灯所在的输出端口（取值范围：1~12）
     * @param[in] p_byIndicatorOnLevel 点亮指示灯的输出电平， 0 或 1
     * @param[in] p_byIndicatorFickerFrequency 等待整机断电过程中，指示灯的闪烁频率：
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 tDevReturn
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     */
	int  iSetPowerIndicatorConf(BYTE p_byIndicatorFlag, BYTE p_byIndicatorOutlet, BYTE p_byIndicatorOnLevel, BYTE p_byIndicatorFickerFrequency, tDevReturn* p_psStatus);

    /**
     * @brief 控制报警联动继电器状态
     * 
     * @param[in] p_uiSwitch 输出状态
     * - 0 继电器断开（无警）
     * - 1 继电器闭合（报警）
     * @param[out] p_psrStatus 返回状态结构，详细信息参看结构体 tDevReturn
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     */
	int  iAlarm(BYTE p_bySwitch, tDevReturn* p_psrStatus);	

    /**
     * @brief 设置Dunite配置路径
     * 
     * @param[in] p_hDevHandle 逻辑设备句柄，由hOpenLogicDevice所得
     * @param[in] CfgFileDir 配置文件路径
     * @param[in] UsbSetDeviceFd USB打开后的FD，串口是可传空字符串 ""
     * @param[out] p_psrStatus 返回状态结构，详细信息参看结构体 tDevReturn
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     */
    int  iSetDuniteCfg(const char* CfgFileDir,  const char* UsbSetDeviceFd, tDevReturn* p_psrStatus);

    /**
     * @brief 获取设备ID
     * 
     * @param[out] p_pcDeviceID 16字节设备ID 
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 tDevReturn
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     * @note 该接口在Android平台下使用: 1.
     */
	int  iGetDeviceID(char* p_pcDeviceID, tDevReturn* p_psStatus);

    /**
     * @brief 获取激活时间
     * 
     * @param[out] p_pcActiveTime 激活时间
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 tDevReturn
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     */
    int  iGetIOActiveTime(char* p_pcActiveTime, tDevReturn* p_psStatus);

    /**
     * @brief 跳转到BootLoader中运行
     * 
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 tDevReturn
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     */
	int  iGoBootLoader(tDevReturn* p_psStatus);

    /**
     * @brief 擦除APP有效标记，介质/固件下载
     * 
     * @param p_pcDownloadPath 介质文件的绝对路径
     * @param p_psStatus 返回状态结构，详细信息参看结构体 tDevReturn
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     */
	int  iFirmwareDownload(const char* p_pcDownloadPath, tDevReturn* p_psStatus);

    /**
     * @brief 获取下载进度
     * 
     * @param p_cProgress 下载进度百分比，如该值为80时，表示已经下载了80%
     * @param p_psStatus 返回状态结构，详细信息参看结构体 tDevReturn
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     */
    int	 iGetProgress(int* p_cProgress, tDevReturn* p_psStatus);
protected:
	virtual int iReturn(tDevReturn* p_psStatus, int p_iErrCode = 1);
	
private:
	IOExtendDev(IOExtendDev& IOExtendDev);
	
private:
	typedef HANDLE (WINAPI *fphOpenLogicDevice)(const char* p_pcLogicDevName);
	typedef void (WINAPI *fpvCloseLogicDevice)(HANDLE p_hDevHandle);
	typedef void (WINAPI *fpvSetProcFun)(HANDLE p_hDevHandle, const vProcFun p_pvProcFun);
	typedef void (WINAPI *fpvSetProcFun2)(HANDLE p_hDevHandle, const vProcFun2 p_pvProcFun, const void* p_pSinkObject);
	typedef int (WINAPI *fpiCloseComm)(HANDLE p_hDevHandle, tDevReturn* p_psStatus);
	typedef int (WINAPI *fpiGetIntValue)(HANDLE p_hDevHandle, const char *p_pcSection, const char *p_pcKeyName, long* p_pKeyValue);
	typedef int (WINAPI *fpiSetIntValue)(HANDLE p_hDevHandle, const char *p_pcSection, const char *p_pcKeyName, long p_lKeyValue);
	typedef int (WINAPI *fpiGetStringValue)(HANDLE p_hDevHandle, const char *p_pcSection, const char *p_pcKeyName, char p_pcKeyValue[256]);
	typedef int (WINAPI *fpiSetStringValue)(HANDLE p_hDevHandle, const char *p_pcSection, const char *p_pcKeyName, char p_pcKeyValue[256]);
	typedef int (WINAPI *fpiInit)(HANDLE p_hDevHandle, tDevReturn* p_psStatus);
	typedef int (WINAPI *fpiGetLightStatus)(HANDLE p_hDevHandle, int p_piLightNum, tDevReturn *p_psStatus);
	typedef int (WINAPI *fpiSetCommPara)(HANDLE p_hDevHandle, tDevReturn* p_psStatus);
	typedef int (WINAPI *fpiSetLightStatus)(HANDLE p_hDevHandle, int p_piLightNum, int p_piStatus, tDevReturn *p_psStatus);
	typedef int (WINAPI *fpiSetLightStatus2)(HANDLE p_hDevHandle, BYTE para, int p_piLightNum, int p_piStatus, tDevReturn *p_psStatus);
	typedef int (WINAPI *fpiGetDoorStatus)(HANDLE p_hDevHandle, int p_iDoorNum, tDevReturn* p_psStatus);
	typedef int (WINAPI *fpiGetDevStatus)(HANDLE p_hDevHandle, tDevReturn* p_psStatus);
	typedef int (WINAPI *fpiGetStatus)(HANDLE p_hDevHandle, tDevReturn* p_psStatus);
	typedef int (WINAPI *fpiGetDevVersion)(HANDLE p_hDevHandle, char *p_pcVersion);
	typedef int (WINAPI *fpiGetVersion)(HANDLE p_hDevHandle, char *p_pcVersion);  
	typedef int (WINAPI *fpiGetSerialNumber)(HANDLE p_hDevHandle, char *p_pcSerial, tDevReturn *p_psStatus);
	typedef int (WINAPI *fpiGetDevCapability)(HANDLE p_hDevHandle, UINT *p_puiCapability, UINT p_uiNumber);
	typedef int (WINAPI *fpiGetPowerBtnStatus)(HANDLE p_hDevHandle, int *p_piBtnStatus, tDevReturn *p_psStatus);
	typedef int (WINAPI *fpiSetDelaySwitchPower)(HANDLE p_hDevHandle, int p_iDelayOff, int p_iDelayOn, tDevReturn *p_psStatus);
	typedef int (WINAPI *fpiSetSwitchMachineConf)(HANDLE p_hDevHandle, tSwitchMachineConfInfo* p_psConfInfo, tDevReturn *p_psStatus);
	typedef int (WINAPI *fpiAdjustLightSetting)(HANDLE p_hDevHandle, tAdjustLightConfInfo* p_psConfInfo, tDevReturn *p_psStatus);
	typedef int (WINAPI *fpiUsbOnOffSetting)(HANDLE p_hDevHandle, BYTE p_byUsb1,  BYTE p_byUsb2,  tDevReturn *p_psStatus);
	typedef int (WINAPI *fpiGetLightSensingVoltage)(HANDLE p_hDevHandle, UINT* p_uiLightSensingVoltage, tDevReturn* p_psStatus);
	typedef int (WINAPI *fpiSetPowerIndicatorConf)(HANDLE p_hDevHandle, BYTE p_byIndicatorFlag, BYTE p_byIndicatorOutlet, BYTE p_byIndicatorOnLevel, BYTE p_byIndicatorFickerFrequency, tDevReturn* p_psStatus);
	typedef int (WINAPI *fpiAlarm)(HANDLE p_hDevHandle, BYTE p_bySwitch, tDevReturn* p_psrStatus);
	typedef int (WINAPI *fpiSetDuniteCfg)(HANDLE p_hDevHandle, const char* CfgFileDir,  const char* UsbSetDeviceFd, tDevReturn* p_psrStatus);
	typedef int (WINAPI *fpiGetDeviceID)(HANDLE p_hDevHandle, char* p_pcDeviceID, tDevReturn* p_psStatus);
	typedef int (WINAPI *fpiGetIOActiveTime)(HANDLE p_hDevHandle, char* p_pcActiveTime, tDevReturn* p_psStatus);
	typedef int (WINAPI *fpiGoBootLoader)(HANDLE p_hDevHandle, tDevReturn* p_psStatus);
	typedef int (WINAPI *fpiFirmwareDownload)(HANDLE p_hDevHandle, const char* p_pcDownloadPath, tDevReturn* p_psStatus);
	typedef int (WINAPI *fpiGetProgress)(HANDLE p_hDevHandle, int* p_cProgress, tDevReturn* p_psStatus);

#define DECLAREPTR(name)	fp##name m_##name
	DECLAREPTR(hOpenLogicDevice);
	DECLAREPTR(vCloseLogicDevice);
	DECLAREPTR(vSetProcFun);
	DECLAREPTR(vSetProcFun2);
	DECLAREPTR(iCloseComm);
	DECLAREPTR(iGetIntValue);
	DECLAREPTR(iSetIntValue);
	DECLAREPTR(iGetStringValue);
	DECLAREPTR(iSetStringValue);
	DECLAREPTR(iInit);
	DECLAREPTR(iGetLightStatus);
	DECLAREPTR(iSetCommPara);
	DECLAREPTR(iSetLightStatus);
	DECLAREPTR(iSetLightStatus2);
	DECLAREPTR(iGetDoorStatus);
	DECLAREPTR(iGetDevStatus);
	DECLAREPTR(iGetStatus);
	DECLAREPTR(iGetDevVersion);
	DECLAREPTR(iGetVersion);  
	DECLAREPTR(iGetSerialNumber);
	DECLAREPTR(iGetDevCapability);
	DECLAREPTR(iGetPowerBtnStatus);
	DECLAREPTR(iSetDelaySwitchPower);
	DECLAREPTR(iSetSwitchMachineConf);
	DECLAREPTR(iAdjustLightSetting);
	DECLAREPTR(iUsbOnOffSetting);
	DECLAREPTR(iGetLightSensingVoltage);
	DECLAREPTR(iSetPowerIndicatorConf);
	DECLAREPTR(iAlarm);
	DECLAREPTR(iSetDuniteCfg);
	DECLAREPTR(iGetDeviceID);
	DECLAREPTR(iGetIOActiveTime);
	DECLAREPTR(iGoBootLoader);
	DECLAREPTR(iFirmwareDownload);
	DECLAREPTR(iGetProgress);
#undef DECLAREPTR

protected:
	HMODULE m_hDllHandle;
	
private:
	HANDLE m_hDevHandle;
	char m_acLogicDevName[32];
};

inline IOExtendDev::IOExtendDev(const char* pFileName) : 
m_hDllHandle(NULL), 
m_hDevHandle(NULL)
{
	m_hDllHandle = ::LoadLibrary(pFileName);
	
#define FORMATPTR(name)	m_##name=(fp##name)::GetProcAddress(m_hDllHandle, #name)
	FORMATPTR(hOpenLogicDevice);
	FORMATPTR(vCloseLogicDevice);
	FORMATPTR(vSetProcFun);
	FORMATPTR(vSetProcFun2);
	FORMATPTR(iCloseComm);
	FORMATPTR(iGetIntValue);
	FORMATPTR(iSetIntValue);
	FORMATPTR(iGetStringValue);
	FORMATPTR(iSetStringValue);
	FORMATPTR(iInit);
	FORMATPTR(iGetLightStatus);
	FORMATPTR(iSetCommPara);
	FORMATPTR(iSetLightStatus);
	FORMATPTR(iSetLightStatus2);
	FORMATPTR(iGetDoorStatus);
	FORMATPTR(iGetDevStatus);
	FORMATPTR(iGetStatus);
	FORMATPTR(iGetDevVersion);
	FORMATPTR(iGetVersion);  
	FORMATPTR(iGetSerialNumber);
	FORMATPTR(iGetDevCapability);
	FORMATPTR(iGetPowerBtnStatus);
	FORMATPTR(iSetDelaySwitchPower);
	FORMATPTR(iSetSwitchMachineConf);
	FORMATPTR(iAdjustLightSetting);
	FORMATPTR(iUsbOnOffSetting);
	FORMATPTR(iGetLightSensingVoltage);
	FORMATPTR(iSetPowerIndicatorConf);
	FORMATPTR(iAlarm);
	FORMATPTR(iSetDuniteCfg);
	FORMATPTR(iGetDeviceID);
	FORMATPTR(iGetIOActiveTime);
	FORMATPTR(iGoBootLoader);
	FORMATPTR(iFirmwareDownload);
	FORMATPTR(iGetProgress);
#undef FORMATPTR
	vSetLogicalDevName(IOEXTENDDEV_DEF_DEVNAME);
}

inline IOExtendDev::~IOExtendDev()
{
	vSetLogicalDevName(NULL);
	if (m_hDllHandle)
	{
		::FreeLibrary(m_hDllHandle);
	}
}

inline void IOExtendDev::vSetLogicalDevName(const char* p_pcLogDevName)
{
	if (m_hDevHandle)
	{
		if (m_vCloseLogicDevice)
		{
			m_vCloseLogicDevice(m_hDevHandle);
		}
		m_hDevHandle = NULL;
	}
	memset(m_acLogicDevName, 0, sizeof(m_acLogicDevName));
	if (p_pcLogDevName)
	{
		if (m_hOpenLogicDevice)
		{
			m_hDevHandle = m_hOpenLogicDevice(p_pcLogDevName);
		}
		if (m_hDevHandle)
		{
			strncpy(m_acLogicDevName, p_pcLogDevName, sizeof(m_acLogicDevName)-1);
		}
	}
}

inline void IOExtendDev::vGetLogicalDevName(char* p_pcLogDevName)
{
	if (p_pcLogDevName)
	{
		strncpy(p_pcLogDevName, m_acLogicDevName,sizeof(m_acLogicDevName)-1);
	}
}

inline void IOExtendDev::vSetProcFun(const vProcFun p_pvProcFun)
{
	if (m_vSetProcFun)
	{
		m_vSetProcFun(m_hDevHandle, p_pvProcFun);
	}
}

inline void IOExtendDev::vSetProcFun2(const vProcFun2 p_pvProcFun, const void* p_pSinkObject/* = NULL*/)
{
	if (m_vSetProcFun2)
	{
		m_vSetProcFun2(m_hDevHandle, p_pvProcFun, p_pSinkObject);
	}
}

inline int IOExtendDev::iCloseComm(tDevReturn* p_psStatus)
{
	return m_iCloseComm ? m_iCloseComm(m_hDevHandle, p_psStatus) : iReturn(p_psStatus);
}

inline int IOExtendDev::iGetIntValue(const char *p_pcSection, const char *p_pcKeyName, long* p_pKeyValue)
{
	return m_iGetIntValue ? m_iGetIntValue(m_hDevHandle, p_pcSection, p_pcKeyName, p_pKeyValue) : iReturn(NULL);
}

inline int IOExtendDev::iSetIntValue(const char *p_pcSection, const char *p_pcKeyName, long p_lKeyValue)
{
	return m_iSetIntValue ? m_iSetIntValue(m_hDevHandle, p_pcSection, p_pcKeyName, p_lKeyValue) : iReturn(NULL);
}

inline int IOExtendDev::iGetStringValue(const char *p_pcSection, const char *p_pcKeyName, char p_pcKeyValue[256])
{
	return m_iGetStringValue ? m_iGetStringValue(m_hDevHandle, p_pcSection, p_pcKeyName, p_pcKeyValue) : iReturn(NULL);
}

inline int IOExtendDev::iSetStringValue(const char *p_pcSection, const char *p_pcKeyName, char p_pcKeyValue[256])
{
	return m_iSetStringValue ? m_iSetStringValue(m_hDevHandle, p_pcSection, p_pcKeyName, p_pcKeyValue) : iReturn(NULL);
}

inline int IOExtendDev::iReturn(tDevReturn* p_psStatus, int p_iErrCode)
{
	if (p_psStatus)
	{
		p_psStatus[0].iLogicCode = p_iErrCode;
		p_psStatus[0].iPhyCode = p_iErrCode;
		p_psStatus[0].iHandle = 0;
		p_psStatus[0].iType = (NOERROR == p_iErrCode) ? 0 : 1;
	}
	return (NOERROR == p_iErrCode) ? SUCCESS : FAIL;
}

inline int IOExtendDev::iInit(tDevReturn* p_psStatus)
{
    return m_iInit ? m_iInit(m_hDevHandle, p_psStatus) : iReturn(p_psStatus);
}

inline int IOExtendDev::iGetLightStatus(int p_piLightNum, tDevReturn *p_psStatus)
{
    return m_iGetLightStatus ? m_iGetLightStatus(m_hDevHandle, p_piLightNum, p_psStatus) : iReturn(p_psStatus);
}

inline int IOExtendDev::iSetCommPara(tDevReturn* p_psStatus)
{
    return m_iSetCommPara ? m_iSetCommPara(m_hDevHandle, p_psStatus) : iReturn(p_psStatus);
}

inline int IOExtendDev::iSetLightStatus(int p_piLightNum, int p_piStatus, tDevReturn *p_psStatus)
{
    return m_iSetLightStatus ? m_iSetLightStatus(m_hDevHandle, p_piLightNum, p_piStatus, p_psStatus) : iReturn(p_psStatus);
}

inline int IOExtendDev::iSetLightStatus(BYTE para, int p_piLightNum, int p_piStatus, tDevReturn *p_psStatus)
{
    return m_iSetLightStatus2 ? m_iSetLightStatus2(m_hDevHandle, para, p_piLightNum, p_piStatus, p_psStatus) : iReturn(p_psStatus);
}

inline int IOExtendDev::iGetDoorStatus(int p_iDoorNum, tDevReturn* p_psStatus)
{
    return m_iGetDoorStatus ? m_iGetDoorStatus(m_hDevHandle, p_iDoorNum, p_psStatus) : iReturn(p_psStatus);
}

inline int IOExtendDev::iGetDevStatus(tDevReturn* p_psStatus)
{
    return m_iGetDevStatus ? m_iGetDevStatus(m_hDevHandle, p_psStatus) : iReturn(p_psStatus);
}

inline int IOExtendDev::iGetStatus(tDevReturn* p_psStatus)
{
    return m_iGetStatus ? m_iGetStatus(m_hDevHandle, p_psStatus) : iReturn(p_psStatus);
}

inline int IOExtendDev::iGetDevVersion(char *p_pcVersion)
{
    return m_iGetDevVersion ? m_iGetDevVersion(m_hDevHandle, p_pcVersion) : iReturn(NULL);
}

inline int IOExtendDev::iGetVersion (char *p_pcVersion)
{
	return m_iGetVersion ? m_iGetVersion(m_hDevHandle, p_pcVersion) : iReturn(NULL);
}

inline int IOExtendDev::iGetSerialNumber(char *p_pcSerial, tDevReturn *p_psStatus)
{
	return m_iGetSerialNumber ? m_iGetSerialNumber(m_hDevHandle, p_pcSerial, p_psStatus) : iReturn(p_psStatus);
}

inline int IOExtendDev::iGetDevCapability(UINT *p_puiCapability, UINT p_uiNumber/* = 1*/)
{
	return m_iGetDevCapability ? m_iGetDevCapability(m_hDevHandle, p_puiCapability, p_uiNumber) : iReturn(NULL);
}

inline int IOExtendDev::iGetPowerBtnStatus(int *p_piBtnStatus, tDevReturn *p_psStatus)
{
	return m_iGetPowerBtnStatus ? m_iGetPowerBtnStatus(m_hDevHandle, p_piBtnStatus, p_psStatus) : iReturn(p_psStatus);
}

inline int IOExtendDev::iSetDelaySwitchPower(int p_iDelayOff, int p_iDelayOn, tDevReturn *p_psStatus)
{
	return m_iSetDelaySwitchPower ? m_iSetDelaySwitchPower(m_hDevHandle, p_iDelayOff, p_iDelayOn, p_psStatus) : iReturn(p_psStatus);
}

inline int IOExtendDev::iSetSwitchMachineConf(tSwitchMachineConfInfo* p_psConfInfo, tDevReturn *p_psStatus)
{
	return m_iSetSwitchMachineConf ? m_iSetSwitchMachineConf(m_hDevHandle, p_psConfInfo, p_psStatus) : iReturn(p_psStatus);
}

inline int IOExtendDev::iAdjustLightSetting(tAdjustLightConfInfo* p_psConfInfo, tDevReturn *p_psStatus)
{
	return m_iAdjustLightSetting ? m_iAdjustLightSetting(m_hDevHandle, p_psConfInfo, p_psStatus) : iReturn(p_psStatus);
}

inline int IOExtendDev::iUsbOnOffSetting(BYTE p_byUsb1,  BYTE p_byUsb2,  tDevReturn *p_psStatus)
{
	return m_iUsbOnOffSetting ? m_iUsbOnOffSetting(m_hDevHandle, p_byUsb1, p_byUsb2, p_psStatus) : iReturn(p_psStatus);
}

inline int IOExtendDev::iGetLightSensingVoltage(UINT* p_uiLightSensingVoltage, tDevReturn* p_psStatus)
{
	return m_iGetLightSensingVoltage ? m_iGetLightSensingVoltage(m_hDevHandle, p_uiLightSensingVoltage, p_psStatus) : iReturn(p_psStatus);
}

inline int IOExtendDev::iSetPowerIndicatorConf(BYTE p_byIndicatorFlag, BYTE p_byIndicatorOutlet, BYTE p_byIndicatorOnLevel, BYTE p_byIndicatorFickerFrequency, tDevReturn* p_psStatus)
{
	return m_iSetPowerIndicatorConf ? m_iSetPowerIndicatorConf(m_hDevHandle, p_byIndicatorFlag, p_byIndicatorOutlet, p_byIndicatorOnLevel, p_byIndicatorFickerFrequency, p_psStatus) : iReturn(p_psStatus);
}

inline int IOExtendDev::iAlarm(BYTE p_bySwitch, tDevReturn* p_psrStatus)
{
	return m_iAlarm ? m_iAlarm(m_hDevHandle, p_bySwitch, p_psrStatus) : iReturn(p_psrStatus);
}

inline int IOExtendDev::iSetDuniteCfg(const char* CfgFileDir,  const char* UsbSetDeviceFd, tDevReturn* p_psrStatus)
{
	return m_iSetDuniteCfg ? m_iSetDuniteCfg(m_hDevHandle, CfgFileDir, UsbSetDeviceFd, p_psrStatus) : iReturn(p_psrStatus);
}

inline int IOExtendDev::iGetDeviceID(char* p_pcDeviceID, tDevReturn* p_psStatus)
{
	return m_iGetDeviceID ? m_iGetDeviceID(m_hDevHandle, p_pcDeviceID, p_psStatus) : iReturn(p_psStatus);
}

inline int IOExtendDev::iGetIOActiveTime(char* p_pcActiveTime, tDevReturn* p_psStatus)
{
	return m_iGetIOActiveTime ? m_iGetIOActiveTime(m_hDevHandle, p_pcActiveTime, p_psStatus) : iReturn(p_psStatus);
}

inline int IOExtendDev::iGoBootLoader(tDevReturn* p_psStatus)
{
    return m_iGoBootLoader ? m_iGoBootLoader(m_hDevHandle, p_psStatus) : iReturn(p_psStatus);
}

inline int IOExtendDev::iFirmwareDownload(const char* p_pcDownloadPath, tDevReturn* p_psStatus)
{
    return m_iFirmwareDownload ? m_iFirmwareDownload(m_hDevHandle, p_pcDownloadPath, p_psStatus) : iReturn(p_psStatus);
}

inline int	IOExtendDev::iGetProgress(int* p_cProgress, tDevReturn* p_psStatus)
{
    return m_iGetProgress ? m_iGetProgress(m_hDevHandle, p_cProgress, p_psStatus) : iReturn(p_psStatus);
}

#endif
