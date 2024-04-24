/**
 * @file OIOExtendDevDll.h
 * @brief OIOExtendDev扩展板C导出接口
 */
#ifndef _OIOExtendDevDll_H_
#define _OIOExtendDevDll_H_

#include "OIOExtendDevStruct.h"

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

#ifdef __cplusplus
extern "C" {
#endif 
    /**
     * @page page_hOpenLogicDevice hOpenLogicDevice
     * @anchor ref_hOpenLogicDevice 打开逻辑设备
     * @brief HANDLE WINAPI hOpenLogicDevice(const char* p_pcLogicDevName);
     * 
     * @param[in] p_pcLogicDevName 逻辑设备名
     * @return HANDLE 逻辑设备的句柄，如果创建逻辑设备失败，返回NULL
     * @par 注意事项
     *      无
     * @par 示例
     *      无
     * @par 相关接口
     *      @ref page_vCloseLogicDevice "vCloseLogicDevice"
     */
	HANDLE WINAPI hOpenLogicDevice(const char* p_pcLogicDevName);

    /**
     * @page page_vCloseLogicDevice vCloseLogicDevice
     * @anchor ref_vCloseLogicDevice 关闭逻辑设备
     * @brief void WINAPI vCloseLogicDevice(HANDLE p_hDevHandle);
     * 
     * @param[in] p_hDevHandle 逻辑设备句柄，由hOpenLogicDevice所得
     * @return 无
     * @par 注意事项
     *      1、释放动态库或退出程序之前，需要调用此接口释放打开的逻辑设备。
     * @par 示例
     *      无
     * @par 相关接口
     *      @ref page_hOpenLogicDevice "hOpenLogicDevice"
     */
	void WINAPI vCloseLogicDevice(HANDLE p_hDevHandle);

    /**
     * @page page_vSetProcFun vSetProcFun
     * @anchor ref_vSetProcFun 设置回调函数
     * @brief void WINAPI vSetProcFun(HANDLE p_hDevHandle, const vProcFun p_pvProcFun);
     * 
     * @param[in] p_hDevHandle 逻辑设备句柄，由hOpenLogicDevice所得
     * @param[in] p_pvProcFun 函数指针
     * @return 无
     * @par 注意事项
     *      无
     * @par 示例
     *      无
     * @par 相关接口
     *      @ref page_vSetProcFun2 "vSetProcFun2"
     */
	void WINAPI vSetProcFun(HANDLE p_hDevHandle, const vProcFun p_pvProcFun);

    /**
     * @page page_vSetProcFun2 vSetProcFun2
     * @anchor ref_vSetProcFun2 设置回调函数2
     * @brief void WINAPI vSetProcFun2(HANDLE p_hDevHandle, const vProcFun2 p_pvProcFun, const void* p_pSinkObject = NULL);
     * 
     * @param[in] p_hDevHandle 逻辑设备句柄，由hOpenLogicDevice所得
     * @param[in] p_pvProcFun 函数指针
     * @param[in] p_pSinkObject 预留，默认NULL
     * @return 无
     * @par 注意事项
     *      无
     * @par 示例
     *      无
     * @par 相关接口
     *      @ref page_vSetProcFun "vSetProcFun"
     */
	void WINAPI vSetProcFun2(HANDLE p_hDevHandle, const vProcFun2 p_pvProcFun, const void* p_pSinkObject = NULL);
    
    /**
     * @page page_iCloseComm iCloseComm
     * @anchor ref_iCloseComm 关闭通信
     * @brief int WINAPI iCloseComm(HANDLE p_hDevHandle, tDevReturn* p_psStatus);
     * 
     * @param[in] p_hDevHandle 逻辑设备句柄，由hOpenLogicDevice所得
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 @ref page_tDevReturn "tDevReturn"
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     * @par 注意事项
     *      无
     * @par 示例
     *      无
     * @par 相关接口
     *      @ref page_iSetCommPara "iSetCommPara"
     */
	int WINAPI iCloseComm(HANDLE p_hDevHandle, tDevReturn* p_psStatus);

    /**
     * @page page_iGetIntValue iGetIntValue
     * @anchor ref_iGetIntValue 获取Int类型配置信息
     * @brief int WINAPI iGetIntValue(HANDLE p_hDevHandle, const char *p_pcSection, const char *p_pcKeyName, long* p_pKeyValue);
     * 
     * @param[in] p_hDevHandle 逻辑设备句柄
     * @param[in] p_pcSection 字段
     * @param[in] p_pcKeyName key键
     * @param[out] p_pKeyValue value值
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     * @par 注意事项
     *      无
     * @par 示例
     *      无
     * @par 相关接口
     *      @ref page_iSetIntValue "iSetIntValue"
     */
	int WINAPI iGetIntValue(HANDLE p_hDevHandle, const char *p_pcSection, const char *p_pcKeyName, long* p_pKeyValue);

    /**
     * @page page_iSetIntValue iSetIntValue
     * @anchor ref_iSetIntValue 设置Int类型配置信息
     * @brief int WINAPI iSetIntValue(HANDLE p_hDevHandle, const char *p_pcSection, const char *p_pcKeyName, long p_lKeyValue);
     * 
     * @param[in] p_hDevHandle 逻辑设备句柄
     * @param[in] p_pcSection 字段
     * @param[in] p_pcKeyName key键
     * @param[out] p_pKeyValue value值
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     * @par 注意事项
     *      无
     * @par 示例
     *      无
     * @par 相关接口
     *      @ref page_iGetIntValue "iGetIntValue"
     */
	int WINAPI iSetIntValue(HANDLE p_hDevHandle, const char *p_pcSection, const char *p_pcKeyName, long p_lKeyValue);

    /**
     * @page page_iGetStringValue iGetStringValue
     * @anchor ref_iGetStringValue 获取String类型配置信息
     * @brief int WINAPI iGetStringValue(HANDLE p_hDevHandle, const char *p_pcSection, const char *p_pcKeyName, char p_pcKeyValue[256]);
     * 
     * @param[in] p_hDevHandle 逻辑设备句柄
     * @param[in] p_pcSection 字段
     * @param[in] p_pcKeyName key键
     * @param[out] p_pcKeyValue value值
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     * @par 注意事项
     *      无
     * @par 示例
     *      无
     * @par 相关接口
     *      @ref page_iSetStringValue "iSetStringValue"
     */
	int WINAPI iGetStringValue(HANDLE p_hDevHandle, const char *p_pcSection, const char *p_pcKeyName, char p_pcKeyValue[256]);

    /**
     * @page page_iSetStringValue iSetStringValue
     * @anchor ref_iSetStringValue 设置String类型配置信息
     * @brief int WINAPI iSetStringValue(HANDLE p_hDevHandle, const char *p_pcSection, const char *p_pcKeyName, char p_pcKeyValue[256]);
     * 
     * @param[in] p_hDevHandle 逻辑设备句柄
     * @param[in] p_pcSection 字段
     * @param[in] p_pcKeyName key键
     * @param[out] p_pcKeyValue value值
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     * @par 注意事项
     *      无
     * @par 示例
     *      无
     * @par 相关接口
     *      @ref page_iGetStringValue "iGetStringValue"
     */
	int WINAPI iSetStringValue(HANDLE p_hDevHandle, const char *p_pcSection, const char *p_pcKeyName, char p_pcKeyValue[256]);

    /**
     * @page page_iInit iInit
     * @anchor ref_iInit 初始化模块
     * @brief int WINAPI iInit(HANDLE p_hDevHandle, tDevReturn* p_psStatus);
     * 
     * @param[in] p_hDevHandle 逻辑设备句柄，由hOpenLogicDevice所得
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 @ref page_tDevReturn "tDevReturn"
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     * @par 注意事项
     *      无
     * @par 示例
     *      无
     * @par 相关接口
     *      @ref page_iSetCommPara "iSetCommPara"
     */
	int WINAPI iInit(HANDLE p_hDevHandle, tDevReturn* p_psStatus);

    /**
     * @page page_iGetLightStatus iGetLightStatus
     * @anchor ref_iGetLightStatus 获取由p_piLightNum指定的灯的当前状态
     * @brief int WINAPI iGetLightStatus(HANDLE p_hDevHandle, int p_piLightNum, tDevReturn *p_psStatus);
     * 
     * @param[in] p_hDevHandle 逻辑设备句柄，由hOpenLogicDevice所得
     * @param[in] p_piLightNum 灯编号,取值范围 0~14<br>
     *                         0——IOEXTEND_ALLINDICATOR <br>
     *                         1——IOEXTEND_INDICATOR1<br>
     *                         2——IOEXTEND_INDICATOR2<br>
     *                         3——IOEXTEND_INDICATOR3<br>
     *                         4——IOEXTEND_INDICATOR4<br>
     *                         5——IOEXTEND_INDICATOR5<br>
     *                         6——IOEXTEND_INDICATOR6<br>
     *                         7——IOEXTEND_INDICATOR7<br>
     *                         8——IOEXTEND_INDICATOR8<br>
     *                         9——IOEXTEND_INDICATOR9<br>
     *                         10—IOEXTEND_INDICATOR10<br>
     *                         11—IOEXTEND_INDICATOR11<br>
     *                         12—IOEXTEND_INDICATOR12<br>
     *                         13—IOEXTEND_INDICATOR13<br>
     *                         14—IOEXTEND_INDICATOR14
     * @param[out] p_psStatus 返回状态结构，通过p_psStatus的8维结构，可以返回2种指示灯的状态，当灯灭的时候返回0，当灯亮的时候返回1。 详细信息参看结构体 @ref page_tDevReturn "tDevReturn"
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     * @par 注意事项
     *      1、13/14参数有固件版本依赖，V6.1b13起才支持
     * @par 示例
     *      无
     * @par 相关接口
     *      无
     */
	int WINAPI iGetLightStatus(HANDLE p_hDevHandle, int p_piLightNum, tDevReturn *p_psStatus);

    /**
     * @page page_iSetCommPara iSetCommPara
     * @anchor ref_iSetCommPara 通信设置
     * @brief int WINAPI iSetCommPara(HANDLE p_hDevHandle, tDevReturn* p_psStatus);
     * 
     * @param[in] p_hDevHandle 逻辑设备句柄，由hOpenLogicDevice所得
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 @ref page_tDevReturn "tDevReturn"
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     * @par 注意事项
     *      1、本接口兼容Commanger3.0版本。通讯参数的设置信息都是在GRGDTATM_CommCfg.ini文件中获取的。具体配置方法请参看GRGDTATM_CommCfg.ini文件中的注释。<br>
     *      2、配置文件配置项要正确及注册表设置正确。
     * @par 示例
     *      无
     * @par 相关接口
     *      @ref page_iInit "iInit"
     */
	int WINAPI iSetCommPara(HANDLE p_hDevHandle, tDevReturn* p_psStatus);

    /**
     * @page page_iSetLightStatus iSetLightStatus
     * @anchor ref_iSetLightStatus 将p_iLightNum指定的灯对应设置为p_iStatus指定的状态
     * @brief int WINAPI iSetLightStatus(HANDLE p_hDevHandle, int p_piLightNum, int p_piStatus, tDevReturn *p_psStatus);
     * 
     * @param[in] p_hDevHandle 逻辑设备句柄，由hOpenLogicDevice所得
     * @param[in] p_piLightNum 灯编号,取值范围 0~14<br>
     *                         0——IOEXTEND_ALLINDICATOR <br>
     *                         1——IOEXTEND_INDICATOR1<br>
     *                         2——IOEXTEND_INDICATOR2<br>
     *                         3——IOEXTEND_INDICATOR3<br>
     *                         4——IOEXTEND_INDICATOR4<br>
     *                         5——IOEXTEND_INDICATOR5<br>
     *                         6——IOEXTEND_INDICATOR6<br>
     *                         7——IOEXTEND_INDICATOR7<br>
     *                         8——IOEXTEND_INDICATOR8<br>
     *                         9——IOEXTEND_INDICATOR9<br>
     *                         10—IOEXTEND_INDICATOR10<br>
     *                         11—IOEXTEND_INDICATOR11<br>
     *                         12—IOEXTEND_INDICATOR12<br>
     *                         13—IOEXTEND_INDICATOR13<br>
     *                         14—IOEXTEND_INDICATOR14
     * @param[in] p_piStatus 灯状态<br>
     *                         0——IOEXTEND_LIGHT_OFF<br>
     *                         1——IOEXTEND_LIGHT_CONTINUOUS <br>
     *                         2——IOEXTEND_SLOW_FLASH<br>
     *                         3——IOEXTEND_MEDIUM_FLASH<br>
     *                         4——IOEXTEND_QUICK_FLASH<br>
     *                         5——IOEXTEND_ADJ_FLASH<br>
     *                         6——IOEXTEND_PULSE<br>
     *                         7——IOEXTEND_ADJ_LIGHT<br>
     *                         8——IOSIGNALCTR_CHANGE_LIGHTOFF<br>
     *                         9——IOSIGNALCTR_CHANGE_LIGHTON
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 @ref page_tDevReturn "tDevReturn"
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     * @par 注意事项
     *      1、13/14参数有固件版本依赖，V6.1b13起才支持<br>
     *      2、p_piStatus的参数8/9仅适用于IO信号板的IOEXTEND_INDICATOR9端口，其他端口不支持，IO信号板本V3.2b35起支持
     * @par 示例
     *      无
     * @par 相关接口
     *      @ref page_iSetLightStatus2 "iSetLightStatus2"
     */
	int WINAPI iSetLightStatus(HANDLE p_hDevHandle, int p_piLightNum, int p_piStatus, tDevReturn *p_psStatus);

    /**
     * @page page_iSetLightStatus2 iSetLightStatus2
     * @anchor ref_iSetLightStatus2 将p_iLightNum指定的灯对应设置为p_iStatus指定的状态
     * @brief int WINAPI iSetLightStatus2(HANDLE p_hDevHandle, BYTE para, int p_piLightNum, int p_piStatus, tDevReturn *p_psStatus);
     * 
     * @param[in] p_hDevHandle 逻辑设备句柄，由hOpenLogicDevice所得
     * @param[in] para 当配合闪烁输出时，为占空比参数。例如输出占空比为20%时，PARA为20。PARA范围为0---100 当配合脉冲输出时，为高电平持续时间参数，例如输出150毫秒宽的脉冲时，PARA为150。PARA范围为0—250,当配合设置灯亮度时， PARA范围为0--12（大于12默认为12）
     * @param[in] p_piLightNum 灯编号,取值范围 0~14<br>
     *                         0——IOEXTEND_ALLINDICATOR <br>
     *                         1——IOEXTEND_INDICATOR1<br>
     *                         2——IOEXTEND_INDICATOR2<br>
     *                         3——IOEXTEND_INDICATOR3<br>
     *                         4——IOEXTEND_INDICATOR4<br>
     *                         5——IOEXTEND_INDICATOR5<br>
     *                         6——IOEXTEND_INDICATOR6<br>
     *                         7——IOEXTEND_INDICATOR7<br>
     *                         8——IOEXTEND_INDICATOR8<br>
     *                         9——IOEXTEND_INDICATOR9<br>
     *                         10—IOEXTEND_INDICATOR10<br>
     *                         11—IOEXTEND_INDICATOR11<br>
     *                         12—IOEXTEND_INDICATOR12<br>
     *                         13—IOEXTEND_INDICATOR13<br>
     *                         14—IOEXTEND_INDICATOR14
     * @param[in] p_piStatus 灯状态<br>
     *                         0——IOEXTEND_LIGHT_OFF<br>
     *                         1——IOEXTEND_LIGHT_CONTINUOUS <br>
     *                         2——IOEXTEND_SLOW_FLASH<br>
     *                         3——IOEXTEND_MEDIUM_FLASH<br>
     *                         4——IOEXTEND_QUICK_FLASH<br>
     *                         5——IOEXTEND_ADJ_FLASH<br>
     *                         6——IOEXTEND_PULSE<br>
     *                         7——IOEXTEND_ADJ_LIGHT<br>
     *                         8——IOSIGNALCTR_CHANGE_LIGHTOFF<br>
     *                         9——IOSIGNALCTR_CHANGE_LIGHTON
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 @ref page_tDevReturn "tDevReturn"
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     * @par 注意事项
     *      1、13/14参数有固件版本依赖，V6.1b13起才支持<br>
     *      2、p_piStatus的参数8/9仅适用于IO信号板的IOEXTEND_INDICATOR9端口，其他端口不支持，IO信号板本V3.2b35起支持
     * @par 示例
     *      无
     * @par 相关接口
     *      @ref page_iSetLightStatus "iSetLightStatus"
     */
	int WINAPI iSetLightStatus2(HANDLE p_hDevHandle, BYTE para, int p_piLightNum, int p_piStatus, tDevReturn *p_psStatus);

    /**
     * @page page_iGetDoorStatus iGetDoorStatus
     * @anchor ref_iGetDoorStatus 获取门状态
     * @brief int WINAPI iGetDoorStatus(HANDLE p_hDevHandle, int p_iDoorNum, tDevReturn* p_psStatus);
     * 
     * @param[in] p_hDevHandle 逻辑设备句柄，由hOpenLogicDevice所得
     * @param[in] p_iDoorNum 门编号，取值范围 0~12<br>
     *                         0——IOEXTEND_ALLDOOR<br>
     *                         1——IOEXTEND_DOOR1<br>
     *                         2——IOEXTEND_DOOR2<br>
     *                         3——IOEXTEND_DOOR3<br>
     *                         4——IOEXTEND_DOOR4<br>
     *                         5——IOEXTEND_DOOR5<br>
     *                         6——IOEXTEND_DOOR6<br>
     *                         7——IOEXTEND_DOOR7<br>
     *                         8——IOEXTEND_DOOR8<br>
     *                         9——IOEXTEND_DOOR9<br>
     *                         10—IOEXTEND_DOOR10<br>
     *                         11—IOEXTEND_DOOR11<br>
     *                         12—IOEXTEND_DOOR12
     * @param[out] p_psStatus 返回状态结构，通过p_psStatus的8维结构，可以返回2种指示灯的状态，当灯灭的时候返回0，当灯亮的时候返回1。详细信息参看结构体 @ref page_tDevReturn "tDevReturn"
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     * @par 注意事项
     *      无
     * @par 示例
     *      无
     * @par 相关接口
     *      无
     */
	int WINAPI iGetDoorStatus(HANDLE p_hDevHandle, int p_iDoorNum, tDevReturn* p_psStatus);

    /**
     * @page page_iGetDevStatus iGetDevStatus
     * @anchor ref_iGetDevStatus 获取IO扩展板设备状态
     * @brief int WINAPI iGetDevStatus(HANDLE p_hDevHandle, tDevReturn* p_psStatus);
     * 
     * @param[in] p_hDevHandle 逻辑设备句柄，由hOpenLogicDevice所得
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 @ref page_tDevReturn "tDevReturn"
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     * @par 注意事项
     *      无
     * @par 示例
     *      无
     * @par 相关接口
     *      无
     */
	int WINAPI iGetDevStatus(HANDLE p_hDevHandle, tDevReturn* p_psStatus);

    /**
     * @page page_iGetStatus iGetStatus
     * @anchor ref_iGetStatus 获取IO扩展板状态
     * @brief int WINAPI iGetStatus(HANDLE p_hDevHandle, tDevReturn* p_psStatus);
     * 
     * @param[out] p_hDevHandle 逻辑设备句柄，由hOpenLogicDevice所得
     * @param[in] p_psStatus 返回状态结构，详细信息参看结构体 @ref page_tDevReturn "tDevReturn"
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     * @par 注意事项
     *      无
     * @par 示例
     *      无
     * @par 相关接口
     *      无
     */
	int WINAPI iGetStatus(HANDLE p_hDevHandle, tDevReturn* p_psStatus);

    /**
     * @page page_iGetDevVersion iGetDevVersion
     * @anchor ref_iGetDevVersion 获取介质版本
     * @brief int WINAPI iGetDevVersion(HANDLE p_hDevHandle, char *p_pcVersion);
     * 
     * @param[in] p_hDevHandle 逻辑设备句柄，由hOpenLogicDevice所得
     * @param[out] p_pcVersion 介质版本
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     * @par 注意事项
     *      无
     * @par 示例
     *      无
     * @par 相关接口
     *      无
     */
	int WINAPI iGetDevVersion(HANDLE p_hDevHandle, char *p_pcVersion);

    /**
     * @page page_iGetVersion iGetVersion
     * @anchor ref_iGetVersion 获取动态库版本
     * @brief int WINAPI iGetVersion (HANDLE p_hDevHandle, char *p_pcVersion);
     * 
     * @param[in] p_hDevHandle 逻辑设备句柄，由hOpenLogicDevice所得
     * @param[out] p_pcVersion 动态库版本
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     * @par 注意事项
     *      无
     * @par 示例
     *      无
     * @par 相关接口
     *      无
     */
	int WINAPI iGetVersion (HANDLE p_hDevHandle, char *p_pcVersion);  

    /**
     * @page page_iGetSerialNumber iGetSerialNumber
     * @anchor ref_iGetSerialNumber 获取序列号
     * @brief int WINAPI iGetSerialNumber(HANDLE p_hDevHandle, char *p_pcSerial, tDevReturn *p_psStatus);
     * 
     * @param[in] p_hDevHandle 逻辑设备句柄，由hOpenLogicDevice所得
     * @param[out] p_pcSerial 序列号,默认13个字节
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 @ref page_tDevReturn "tDevReturn"
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     * @par 注意事项
     *      无
     * @par 示例
     *      @ref example_iGetSerialNumber "example_iGetSerialNumber"
     * @par 相关接口
     *      无
     */
	int WINAPI iGetSerialNumber(HANDLE p_hDevHandle, char *p_pcSerial, tDevReturn *p_psStatus);

    /**
     * @page page_iGetDevCapability iGetDevCapability
     * @anchor ref_iGetDevCapability 获取设备能力
     * @brief int WINAPI iGetDevCapability(HANDLE p_hDevHandle, UINT *p_puiCapability, UINT p_uiNumber = 1);
     * 
     * @param[in] p_hDevHandle 逻辑设备句柄，由hOpenLogicDevice所得
     * @param[out] p_puiCapability 设备能力
     * @param[in] p_uiNumber 第几块板
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     * @par 注意事项
     *      1、p_puiCapability，需传递p_uiNumber个32位的无符号整形数据，对设备的不同能力按照不同的位来作定义（从高位开始），当该位为1时，表示设备具有此能力，否则不具备此能力。<br>
     *      2、目前IO扩展板获取设备能力接口支持以下设备能力：<br>
     *         主动上报功能，p_puiCapabilit第1个无符号整形的第31位，如果第31位返回1，则支持主动上报功能，否则不支持。
     * @par 示例
     *      无
     * @par 相关接口
     *      无
     */
	int WINAPI iGetDevCapability(HANDLE p_hDevHandle, UINT *p_puiCapability, UINT p_uiNumber = 1);

    /**
     * @page page_iGetPowerBtnStatus iGetPowerBtnStatus
     * @anchor ref_iGetPowerBtnStatus 获取电源按键状态
     * @brief int WINAPI iGetPowerBtnStatus(HANDLE p_hDevHandle, int *p_piBtnStatus, tDevReturn *p_psStatus);
     * 
     * @param[in] p_hDevHandle 逻辑设备句柄，由hOpenLogicDevice所得
     * @param[out] p_piBtnStatus 按键状态值
     * - 0 按键未被按下
     * - 1 按键被按下
     * - 2 整机重启
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 @ref page_tDevReturn "tDevReturn"
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     * @par 注意事项
     *      无
     * @par 示例
     *      @ref example_iGetPowerBtnStatus "example_iGetPowerBtnStatus"
     * @par 相关接口
     *      无
     */
	int WINAPI iGetPowerBtnStatus(HANDLE p_hDevHandle, int *p_piBtnStatus, tDevReturn *p_psStatus);

    /**
     * @page page_iSetDelaySwitchPower iSetDelaySwitchPower
     * @anchor ref_iSetDelaySwitchPower 设置整机延时开关机
     * @brief int WINAPI iSetDelaySwitchPower(HANDLE p_hDevHandle, int p_iDelayOff, int p_iDelayOn, tDevReturn *p_psStatus);
     * 
     * @param[in] p_hDevHandle 逻辑设备句柄，由hOpenLogicDevice所得
     * @param[in] p_iDelayOff 延时关机时间（单位：秒，取址范围：大于等于 0）
     * @param[in] p_iDelayOn 关机后延时开机的时间（单位：秒，取址范围：大于等于 0）
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 @ref page_tDevReturn "tDevReturn"
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     * @par 注意事项
     *      1、p_iDelayOff>0且p_iDelayOn>0表示延时p_iDelayOff秒后切断整机电源，并在切断整机电源p_iDelayOn秒后自动给整机接通电源；<br>
     *      2、p_iDelayOff>0且p_iDelayOn=0表示延时p_iDelayOff秒后切断整机电源，并且不再自动接通整机电源。需要手动按下开关机按钮才能接通整机电源；<br>
     *      3、p_iDelayOff=0时不管p_iDelayOn值为多少均无实际动作。
     * @par 示例
     *      @ref example_iSetDelaySwitchPower "example_iSetDelaySwitchPower"
     * @par 相关接口
     *      无
     */
	int WINAPI iSetDelaySwitchPower(HANDLE p_hDevHandle, int p_iDelayOff, int p_iDelayOn, tDevReturn *p_psStatus);

    /**
     * @page page_iSetSwitchMachineConf iSetSwitchMachineConf
     * @anchor ref_iSetSwitchMachineConf 设置开关机默认参数
     * @brief int WINAPI iSetSwitchMachineConf(HANDLE p_hDevHandle, tSwitchMachineConfInfo* p_psConfInfo, tDevReturn *p_psStatus);
     * 
     * @param[in] p_hDevHandle 逻辑设备句柄，由hOpenLogicDevice所得
     * @param[in] p_psConfInfo 开关机默认配置信息结构体，详细信息参看结构体 @ref page_tSwitchMachineConfInfo "tSwitchMachineConfInfo"
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 @ref page_tDevReturn "tDevReturn"
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     * @par 注意事项
     *      无
     * @par 示例
     *      无
     * @par 相关接口
     *      无
     */
	int WINAPI iSetSwitchMachineConf(HANDLE p_hDevHandle, tSwitchMachineConfInfo* p_psConfInfo, tDevReturn *p_psStatus);

    /**
     * @page page_iAdjustLightSetting iAdjustLightSetting
     * @anchor ref_iAdjustLightSetting 自动调光功能设置
     * @brief int WINAPI iAdjustLightSetting(HANDLE p_hDevHandle, tAdjustLightConfInfo* p_psConfInfo, tDevReturn *p_psStatus);
     * 
     * @param[in] p_hDevHandle 逻辑设备句柄，由hOpenLogicDevice所得
     * @param[in] p_psConfInfo 调光配置信息结构体，详细信息参看结构体 @ref page_tSignalBoardAdjustLightConfInfo "tSignalBoardAdjustLightConfInfo"
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 @ref page_tDevReturn "tDevReturn"
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     * @par 注意事项
     *      无
     * @par 示例
     *      无
     * @par 相关接口
     *      无
     */
	int WINAPI iAdjustLightSetting(HANDLE p_hDevHandle, tAdjustLightConfInfo* p_psConfInfo, tDevReturn *p_psStatus);

    /**
     * @page page_iUsbOnOffSetting iUsbOnOffSetting
     * @anchor ref_iUsbOnOffSetting USB通断设置
     * @brief 
     * 
     * @param[in] p_hDevHandle 逻辑设备句柄，由hOpenLogicDevice所得
     * @param[in] p_byUsb1 面板上的USB口/需要对应信号板上的USB3
     * @param[in] p_byUsb2 面板上的USB口/需要对应信号板上的USB5
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 @ref page_tDevReturn "tDevReturn"
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     * @par 注意事项
     *      无
     * @par 示例
     *      无
     * @par 相关接口
     *      无
     */
	int WINAPI iUsbOnOffSetting(HANDLE p_hDevHandle, BYTE p_byUsb1,  BYTE p_byUsb2,  tDevReturn *p_psStatus);

    /**
     * @page page_iGetLightSensingVoltage iGetLightSensingVoltage
     * @anchor ref_iGetLightSensingVoltage 读取光感电压AD值
     * @brief 
     * 
     * @param[in] p_hDevHandle 逻辑设备句柄，由hOpenLogicDevice所得
     * @param[out] p_uiLightSensingVoltage 光感电压AD值
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 @ref page_tDevReturn "tDevReturn"
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     * @par 注意事项
     *      无
     * @par 示例
     *      @ref example_iGetLightSensingVoltage "example_iGetLightSensingVoltage"
     * @par 相关接口
     *      无
     */
	int WINAPI iGetLightSensingVoltage(HANDLE p_hDevHandle, UINT* p_uiLightSensingVoltage, tDevReturn* p_psStatus);

    /**
     * @page page_iSetPowerIndicatorConf iSetPowerIndicatorConf
     * @anchor ref_iSetPowerIndicatorConf 设置电源状态指示灯（一键开关机按键指示灯）配置
     * @brief int WINAPI iSetPowerIndicatorConf(HANDLE p_hDevHandle, BYTE p_byIndicatorFlag, BYTE p_byIndicatorOutlet, BYTE p_byIndicatorOnLevel, BYTE p_byIndicatorFickerFrequency, tDevReturn* p_psStatus);
     * 
     * @param[in] p_hDevHandle 逻辑设备句柄，由hOpenLogicDevice所得
     * @param[in] p_byIndicatorFlag 电源状态指示灯控制是否生效
     * - 0 不生效
     * - 1 生效
     * @param[in] p_byIndicatorOutlet 设置电源状态指示灯所在的输出端口（取值范围：1~12）
     * @param[in] p_byIndicatorOnLevel 点亮指示灯的输出电平， 0 或 1
     * @param[in] p_byIndicatorFickerFrequency 等待整机断电过程中，指示灯的闪烁频率：取值说明 's':慢闪，'m':中闪，'f':快闪 
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 @ref page_tDevReturn "tDevReturn"
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     * @par 注意事项
     *      无
     * @par 示例
     *      无
     * @par 相关接口
     *      无
     */
	int WINAPI iSetPowerIndicatorConf(HANDLE p_hDevHandle, BYTE p_byIndicatorFlag, BYTE p_byIndicatorOutlet, BYTE p_byIndicatorOnLevel, BYTE p_byIndicatorFickerFrequency, tDevReturn* p_psStatus);
	
    /**
     * @page page_iAlarm iAlarm
     * @anchor ref_iAlarm 控制报警联动继电器状态
     * @brief int WINAPI iAlarm(HANDLE p_hDevHandle, BYTE p_bySwitch, tDevReturn* p_psrStatus);
     * 
     * @param[in] p_hDevHandle 逻辑设备句柄，由hOpenLogicDevice所得
     * @param[in] p_uiSwitch 输出状态
     * - 0 继电器断开（无警）
     * - 1 继电器闭合（报警）
     * @param[out] p_psrStatus 返回状态结构，详细信息参看结构体 @ref page_tDevReturn "tDevReturn"
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     * @par 注意事项
     *      无
     * @par 示例
     *      无
     * @par 相关接口
     *      无
     */
    int WINAPI iAlarm(HANDLE p_hDevHandle, BYTE p_bySwitch, tDevReturn* p_psrStatus);

    /**
     * @page page_iSetDuniteCfg iSetDuniteCfg
     * @anchor ref_iSetDuniteCfg 设置Dunite配置路径
     * @brief int WINAPI iSetDuniteCfg(HANDLE p_hDevHandle, const char* CfgFileDir,  const char* UsbSetDeviceFd, tDevReturn* p_psrStatus);
     * 
     * @param[in] p_hDevHandle 逻辑设备句柄，由hOpenLogicDevice所得
     * @param[in] CfgFileDir 配置文件路径
     * @param[in] UsbSetDeviceFd USB打开后的FD，串口是可传空字符串 ""
     * @param[out] p_psrStatus 返回状态结构，详细信息参看结构体 @ref page_tDevReturn "tDevReturn"
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     * @par 注意事项
     *      1、该接口仅适用于Android平台。<br>
     *      2、在调用hOpenLogicDevice之后，iSetCommPara之前调用<br>
     *      3、驱动版本V1.1.0.2起才支持
     * @par 示例
     *      无
     * @par 相关接口
     *      无
     */
    int WINAPI iSetDuniteCfg(HANDLE p_hDevHandle, const char* CfgFileDir,  const char* UsbSetDeviceFd, tDevReturn* p_psrStatus);
	
    /**
     * @page page_iGetDeviceID iGetDeviceID
     * @anchor ref_iGetDeviceID 获取设备ID
     * @brief int WINAPI iGetDeviceID(HANDLE p_hDevHandle, char* p_pcDeviceID, tDevReturn* p_psStatus);
     * 
     * @param[in] p_hDevHandle 逻辑设备句柄，由hOpenLogicDevice所得
     * @param[out] p_pcDeviceID 16字节设备ID 
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 @ref page_tDevReturn "tDevReturn"
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     * @par 注意事项
     *      1、IO扩展板关联介质版本：V2.2b35
     * @par 示例
     *      无
     * @par 相关接口
     *      无
     */
	int WINAPI iGetDeviceID(HANDLE p_hDevHandle, char* p_pcDeviceID, tDevReturn* p_psStatus);

    /**
     * @page page_iGetIOActiveTime iGetIOActiveTime
     * @anchor ref_iGetIOActiveTime 获取激活时间
     * @brief int WINAPI iGetIOActiveTime(HANDLE p_hDevHandle, char* p_pcActiveTime, tDevReturn* p_psStatus);
     * 
     * @param[in] p_hDevHandle 逻辑设备句柄，由hOpenLogicDevice所得
     * @param[out] p_pcActiveTime 当前正常使用的时间[14字节]
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 @ref page_tDevReturn "tDevReturn"
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     * @par 注意事项
     *      无
     * @par 示例
     *      无
     * @par 相关接口
     *      无
     */
    int WINAPI iGetIOActiveTime(HANDLE p_hDevHandle, char* p_pcActiveTime, tDevReturn* p_psStatus);

    /**
     * @page page_iGoBootLoader iGoBootLoader
     * @anchor ref_iGoBootLoader 跳转到BootLoader中运行
     * @brief int WINAPI iGoBootLoader(HANDLE p_hDevHandle, tDevReturn* p_psStatus);
     * 
     * @param[in] p_hDevHandle 逻辑设备句柄，由hOpenLogicDevice所得
     * @param[out] p_psStatus 返回状态结构，详细信息参看结构体 @ref page_tDevReturn "tDevReturn"
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     * @par 注意事项
     *      无
     * @par 示例
     *      无
     * @par 相关接口
     *      无
     */
	int WINAPI iGoBootLoader(HANDLE p_hDevHandle, tDevReturn* p_psStatus);

    /**
     * @page page_iFirmwareDownload iFirmwareDownload
     * @anchor ref_iFirmwareDownload 擦除APP有效标记，介质/固件下载
     * @brief int WINAPI iFirmwareDownload(HANDLE p_hDevHandle, const char* p_pcDownloadPath, tDevReturn* p_psStatus);
     * 
     * @param p_hDevHandle 逻辑设备句柄，由hOpenLogicDevice所得
     * @param p_pcDownloadPath 介质文件的绝对路径
     * @param p_psStatus 返回状态结构，详细信息参看结构体 @ref page_tDevReturn "tDevReturn"
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     * @par 注意事项
     *      无
     * @par 示例
     *      无
     * @par 相关接口
     *      无
     */
	int WINAPI iFirmwareDownload(HANDLE p_hDevHandle, const char* p_pcDownloadPath, tDevReturn* p_psStatus);

    /**
     * @page page_iGetProgress iGetProgress
     * @anchor ref_iGetProgress 获取下载进度
     * @brief int	WINAPI iGetProgress(HANDLE p_hDevHandle, int* p_cProgress, tDevReturn* p_psStatus);
     * 
     * @param p_hDevHandle 逻辑设备句柄，由hOpenLogicDevice所得
     * @param p_cProgress 下载进度百分比，如该值为80时，表示已经下载了80%
     * @param p_psStatus 返回状态结构，详细信息参看结构体 @ref page_tDevReturn "tDevReturn"
     * @return int 取值范围为SUCCESS:0或FAIL:1（或非0），返回值为SUCCESS:0表示命令执行正确，为FAIL:1（或非0）则表示命令执行有误。注意：如果返回SUCCESS:0成功，p_psStatus也有可能返回警告错误
     * @par 注意事项
     *      无
     * @par 示例
     *      无
     * @par 相关接口
     *      无
     */
    int	WINAPI iGetProgress(HANDLE p_hDevHandle, int* p_cProgress, tDevReturn* p_psStatus);
#ifdef __cplusplus
}
#endif // __cplusplus
#endif // _OIOExtendDevDll_H_