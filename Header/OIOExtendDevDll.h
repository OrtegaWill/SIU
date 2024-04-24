/**
 * @file OIOExtendDevDll.h
 * @brief OIOExtendDev��չ��C�����ӿ�
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
     * @anchor ref_hOpenLogicDevice ���߼��豸
     * @brief HANDLE WINAPI hOpenLogicDevice(const char* p_pcLogicDevName);
     * 
     * @param[in] p_pcLogicDevName �߼��豸��
     * @return HANDLE �߼��豸�ľ������������߼��豸ʧ�ܣ�����NULL
     * @par ע������
     *      ��
     * @par ʾ��
     *      ��
     * @par ��ؽӿ�
     *      @ref page_vCloseLogicDevice "vCloseLogicDevice"
     */
	HANDLE WINAPI hOpenLogicDevice(const char* p_pcLogicDevName);

    /**
     * @page page_vCloseLogicDevice vCloseLogicDevice
     * @anchor ref_vCloseLogicDevice �ر��߼��豸
     * @brief void WINAPI vCloseLogicDevice(HANDLE p_hDevHandle);
     * 
     * @param[in] p_hDevHandle �߼��豸�������hOpenLogicDevice����
     * @return ��
     * @par ע������
     *      1���ͷŶ�̬����˳�����֮ǰ����Ҫ���ô˽ӿ��ͷŴ򿪵��߼��豸��
     * @par ʾ��
     *      ��
     * @par ��ؽӿ�
     *      @ref page_hOpenLogicDevice "hOpenLogicDevice"
     */
	void WINAPI vCloseLogicDevice(HANDLE p_hDevHandle);

    /**
     * @page page_vSetProcFun vSetProcFun
     * @anchor ref_vSetProcFun ���ûص�����
     * @brief void WINAPI vSetProcFun(HANDLE p_hDevHandle, const vProcFun p_pvProcFun);
     * 
     * @param[in] p_hDevHandle �߼��豸�������hOpenLogicDevice����
     * @param[in] p_pvProcFun ����ָ��
     * @return ��
     * @par ע������
     *      ��
     * @par ʾ��
     *      ��
     * @par ��ؽӿ�
     *      @ref page_vSetProcFun2 "vSetProcFun2"
     */
	void WINAPI vSetProcFun(HANDLE p_hDevHandle, const vProcFun p_pvProcFun);

    /**
     * @page page_vSetProcFun2 vSetProcFun2
     * @anchor ref_vSetProcFun2 ���ûص�����2
     * @brief void WINAPI vSetProcFun2(HANDLE p_hDevHandle, const vProcFun2 p_pvProcFun, const void* p_pSinkObject = NULL);
     * 
     * @param[in] p_hDevHandle �߼��豸�������hOpenLogicDevice����
     * @param[in] p_pvProcFun ����ָ��
     * @param[in] p_pSinkObject Ԥ����Ĭ��NULL
     * @return ��
     * @par ע������
     *      ��
     * @par ʾ��
     *      ��
     * @par ��ؽӿ�
     *      @ref page_vSetProcFun "vSetProcFun"
     */
	void WINAPI vSetProcFun2(HANDLE p_hDevHandle, const vProcFun2 p_pvProcFun, const void* p_pSinkObject = NULL);
    
    /**
     * @page page_iCloseComm iCloseComm
     * @anchor ref_iCloseComm �ر�ͨ��
     * @brief int WINAPI iCloseComm(HANDLE p_hDevHandle, tDevReturn* p_psStatus);
     * 
     * @param[in] p_hDevHandle �߼��豸�������hOpenLogicDevice����
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� @ref page_tDevReturn "tDevReturn"
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     * @par ע������
     *      ��
     * @par ʾ��
     *      ��
     * @par ��ؽӿ�
     *      @ref page_iSetCommPara "iSetCommPara"
     */
	int WINAPI iCloseComm(HANDLE p_hDevHandle, tDevReturn* p_psStatus);

    /**
     * @page page_iGetIntValue iGetIntValue
     * @anchor ref_iGetIntValue ��ȡInt����������Ϣ
     * @brief int WINAPI iGetIntValue(HANDLE p_hDevHandle, const char *p_pcSection, const char *p_pcKeyName, long* p_pKeyValue);
     * 
     * @param[in] p_hDevHandle �߼��豸���
     * @param[in] p_pcSection �ֶ�
     * @param[in] p_pcKeyName key��
     * @param[out] p_pKeyValue valueֵ
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     * @par ע������
     *      ��
     * @par ʾ��
     *      ��
     * @par ��ؽӿ�
     *      @ref page_iSetIntValue "iSetIntValue"
     */
	int WINAPI iGetIntValue(HANDLE p_hDevHandle, const char *p_pcSection, const char *p_pcKeyName, long* p_pKeyValue);

    /**
     * @page page_iSetIntValue iSetIntValue
     * @anchor ref_iSetIntValue ����Int����������Ϣ
     * @brief int WINAPI iSetIntValue(HANDLE p_hDevHandle, const char *p_pcSection, const char *p_pcKeyName, long p_lKeyValue);
     * 
     * @param[in] p_hDevHandle �߼��豸���
     * @param[in] p_pcSection �ֶ�
     * @param[in] p_pcKeyName key��
     * @param[out] p_pKeyValue valueֵ
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     * @par ע������
     *      ��
     * @par ʾ��
     *      ��
     * @par ��ؽӿ�
     *      @ref page_iGetIntValue "iGetIntValue"
     */
	int WINAPI iSetIntValue(HANDLE p_hDevHandle, const char *p_pcSection, const char *p_pcKeyName, long p_lKeyValue);

    /**
     * @page page_iGetStringValue iGetStringValue
     * @anchor ref_iGetStringValue ��ȡString����������Ϣ
     * @brief int WINAPI iGetStringValue(HANDLE p_hDevHandle, const char *p_pcSection, const char *p_pcKeyName, char p_pcKeyValue[256]);
     * 
     * @param[in] p_hDevHandle �߼��豸���
     * @param[in] p_pcSection �ֶ�
     * @param[in] p_pcKeyName key��
     * @param[out] p_pcKeyValue valueֵ
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     * @par ע������
     *      ��
     * @par ʾ��
     *      ��
     * @par ��ؽӿ�
     *      @ref page_iSetStringValue "iSetStringValue"
     */
	int WINAPI iGetStringValue(HANDLE p_hDevHandle, const char *p_pcSection, const char *p_pcKeyName, char p_pcKeyValue[256]);

    /**
     * @page page_iSetStringValue iSetStringValue
     * @anchor ref_iSetStringValue ����String����������Ϣ
     * @brief int WINAPI iSetStringValue(HANDLE p_hDevHandle, const char *p_pcSection, const char *p_pcKeyName, char p_pcKeyValue[256]);
     * 
     * @param[in] p_hDevHandle �߼��豸���
     * @param[in] p_pcSection �ֶ�
     * @param[in] p_pcKeyName key��
     * @param[out] p_pcKeyValue valueֵ
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     * @par ע������
     *      ��
     * @par ʾ��
     *      ��
     * @par ��ؽӿ�
     *      @ref page_iGetStringValue "iGetStringValue"
     */
	int WINAPI iSetStringValue(HANDLE p_hDevHandle, const char *p_pcSection, const char *p_pcKeyName, char p_pcKeyValue[256]);

    /**
     * @page page_iInit iInit
     * @anchor ref_iInit ��ʼ��ģ��
     * @brief int WINAPI iInit(HANDLE p_hDevHandle, tDevReturn* p_psStatus);
     * 
     * @param[in] p_hDevHandle �߼��豸�������hOpenLogicDevice����
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� @ref page_tDevReturn "tDevReturn"
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     * @par ע������
     *      ��
     * @par ʾ��
     *      ��
     * @par ��ؽӿ�
     *      @ref page_iSetCommPara "iSetCommPara"
     */
	int WINAPI iInit(HANDLE p_hDevHandle, tDevReturn* p_psStatus);

    /**
     * @page page_iGetLightStatus iGetLightStatus
     * @anchor ref_iGetLightStatus ��ȡ��p_piLightNumָ���ĵƵĵ�ǰ״̬
     * @brief int WINAPI iGetLightStatus(HANDLE p_hDevHandle, int p_piLightNum, tDevReturn *p_psStatus);
     * 
     * @param[in] p_hDevHandle �߼��豸�������hOpenLogicDevice����
     * @param[in] p_piLightNum �Ʊ��,ȡֵ��Χ 0~14<br>
     *                         0����IOEXTEND_ALLINDICATOR <br>
     *                         1����IOEXTEND_INDICATOR1<br>
     *                         2����IOEXTEND_INDICATOR2<br>
     *                         3����IOEXTEND_INDICATOR3<br>
     *                         4����IOEXTEND_INDICATOR4<br>
     *                         5����IOEXTEND_INDICATOR5<br>
     *                         6����IOEXTEND_INDICATOR6<br>
     *                         7����IOEXTEND_INDICATOR7<br>
     *                         8����IOEXTEND_INDICATOR8<br>
     *                         9����IOEXTEND_INDICATOR9<br>
     *                         10��IOEXTEND_INDICATOR10<br>
     *                         11��IOEXTEND_INDICATOR11<br>
     *                         12��IOEXTEND_INDICATOR12<br>
     *                         13��IOEXTEND_INDICATOR13<br>
     *                         14��IOEXTEND_INDICATOR14
     * @param[out] p_psStatus ����״̬�ṹ��ͨ��p_psStatus��8ά�ṹ�����Է���2��ָʾ�Ƶ�״̬���������ʱ�򷵻�0����������ʱ�򷵻�1�� ��ϸ��Ϣ�ο��ṹ�� @ref page_tDevReturn "tDevReturn"
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     * @par ע������
     *      1��13/14�����й̼��汾������V6.1b13���֧��
     * @par ʾ��
     *      ��
     * @par ��ؽӿ�
     *      ��
     */
	int WINAPI iGetLightStatus(HANDLE p_hDevHandle, int p_piLightNum, tDevReturn *p_psStatus);

    /**
     * @page page_iSetCommPara iSetCommPara
     * @anchor ref_iSetCommPara ͨ������
     * @brief int WINAPI iSetCommPara(HANDLE p_hDevHandle, tDevReturn* p_psStatus);
     * 
     * @param[in] p_hDevHandle �߼��豸�������hOpenLogicDevice����
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� @ref page_tDevReturn "tDevReturn"
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     * @par ע������
     *      1�����ӿڼ���Commanger3.0�汾��ͨѶ������������Ϣ������GRGDTATM_CommCfg.ini�ļ��л�ȡ�ġ��������÷�����ο�GRGDTATM_CommCfg.ini�ļ��е�ע�͡�<br>
     *      2�������ļ�������Ҫ��ȷ��ע���������ȷ��
     * @par ʾ��
     *      ��
     * @par ��ؽӿ�
     *      @ref page_iInit "iInit"
     */
	int WINAPI iSetCommPara(HANDLE p_hDevHandle, tDevReturn* p_psStatus);

    /**
     * @page page_iSetLightStatus iSetLightStatus
     * @anchor ref_iSetLightStatus ��p_iLightNumָ���ĵƶ�Ӧ����Ϊp_iStatusָ����״̬
     * @brief int WINAPI iSetLightStatus(HANDLE p_hDevHandle, int p_piLightNum, int p_piStatus, tDevReturn *p_psStatus);
     * 
     * @param[in] p_hDevHandle �߼��豸�������hOpenLogicDevice����
     * @param[in] p_piLightNum �Ʊ��,ȡֵ��Χ 0~14<br>
     *                         0����IOEXTEND_ALLINDICATOR <br>
     *                         1����IOEXTEND_INDICATOR1<br>
     *                         2����IOEXTEND_INDICATOR2<br>
     *                         3����IOEXTEND_INDICATOR3<br>
     *                         4����IOEXTEND_INDICATOR4<br>
     *                         5����IOEXTEND_INDICATOR5<br>
     *                         6����IOEXTEND_INDICATOR6<br>
     *                         7����IOEXTEND_INDICATOR7<br>
     *                         8����IOEXTEND_INDICATOR8<br>
     *                         9����IOEXTEND_INDICATOR9<br>
     *                         10��IOEXTEND_INDICATOR10<br>
     *                         11��IOEXTEND_INDICATOR11<br>
     *                         12��IOEXTEND_INDICATOR12<br>
     *                         13��IOEXTEND_INDICATOR13<br>
     *                         14��IOEXTEND_INDICATOR14
     * @param[in] p_piStatus ��״̬<br>
     *                         0����IOEXTEND_LIGHT_OFF<br>
     *                         1����IOEXTEND_LIGHT_CONTINUOUS <br>
     *                         2����IOEXTEND_SLOW_FLASH<br>
     *                         3����IOEXTEND_MEDIUM_FLASH<br>
     *                         4����IOEXTEND_QUICK_FLASH<br>
     *                         5����IOEXTEND_ADJ_FLASH<br>
     *                         6����IOEXTEND_PULSE<br>
     *                         7����IOEXTEND_ADJ_LIGHT<br>
     *                         8����IOSIGNALCTR_CHANGE_LIGHTOFF<br>
     *                         9����IOSIGNALCTR_CHANGE_LIGHTON
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� @ref page_tDevReturn "tDevReturn"
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     * @par ע������
     *      1��13/14�����й̼��汾������V6.1b13���֧��<br>
     *      2��p_piStatus�Ĳ���8/9��������IO�źŰ��IOEXTEND_INDICATOR9�˿ڣ������˿ڲ�֧�֣�IO�źŰ屾V3.2b35��֧��
     * @par ʾ��
     *      ��
     * @par ��ؽӿ�
     *      @ref page_iSetLightStatus2 "iSetLightStatus2"
     */
	int WINAPI iSetLightStatus(HANDLE p_hDevHandle, int p_piLightNum, int p_piStatus, tDevReturn *p_psStatus);

    /**
     * @page page_iSetLightStatus2 iSetLightStatus2
     * @anchor ref_iSetLightStatus2 ��p_iLightNumָ���ĵƶ�Ӧ����Ϊp_iStatusָ����״̬
     * @brief int WINAPI iSetLightStatus2(HANDLE p_hDevHandle, BYTE para, int p_piLightNum, int p_piStatus, tDevReturn *p_psStatus);
     * 
     * @param[in] p_hDevHandle �߼��豸�������hOpenLogicDevice����
     * @param[in] para �������˸���ʱ��Ϊռ�ձȲ������������ռ�ձ�Ϊ20%ʱ��PARAΪ20��PARA��ΧΪ0---100 ������������ʱ��Ϊ�ߵ�ƽ����ʱ��������������150����������ʱ��PARAΪ150��PARA��ΧΪ0��250,��������õ�����ʱ�� PARA��ΧΪ0--12������12Ĭ��Ϊ12��
     * @param[in] p_piLightNum �Ʊ��,ȡֵ��Χ 0~14<br>
     *                         0����IOEXTEND_ALLINDICATOR <br>
     *                         1����IOEXTEND_INDICATOR1<br>
     *                         2����IOEXTEND_INDICATOR2<br>
     *                         3����IOEXTEND_INDICATOR3<br>
     *                         4����IOEXTEND_INDICATOR4<br>
     *                         5����IOEXTEND_INDICATOR5<br>
     *                         6����IOEXTEND_INDICATOR6<br>
     *                         7����IOEXTEND_INDICATOR7<br>
     *                         8����IOEXTEND_INDICATOR8<br>
     *                         9����IOEXTEND_INDICATOR9<br>
     *                         10��IOEXTEND_INDICATOR10<br>
     *                         11��IOEXTEND_INDICATOR11<br>
     *                         12��IOEXTEND_INDICATOR12<br>
     *                         13��IOEXTEND_INDICATOR13<br>
     *                         14��IOEXTEND_INDICATOR14
     * @param[in] p_piStatus ��״̬<br>
     *                         0����IOEXTEND_LIGHT_OFF<br>
     *                         1����IOEXTEND_LIGHT_CONTINUOUS <br>
     *                         2����IOEXTEND_SLOW_FLASH<br>
     *                         3����IOEXTEND_MEDIUM_FLASH<br>
     *                         4����IOEXTEND_QUICK_FLASH<br>
     *                         5����IOEXTEND_ADJ_FLASH<br>
     *                         6����IOEXTEND_PULSE<br>
     *                         7����IOEXTEND_ADJ_LIGHT<br>
     *                         8����IOSIGNALCTR_CHANGE_LIGHTOFF<br>
     *                         9����IOSIGNALCTR_CHANGE_LIGHTON
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� @ref page_tDevReturn "tDevReturn"
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     * @par ע������
     *      1��13/14�����й̼��汾������V6.1b13���֧��<br>
     *      2��p_piStatus�Ĳ���8/9��������IO�źŰ��IOEXTEND_INDICATOR9�˿ڣ������˿ڲ�֧�֣�IO�źŰ屾V3.2b35��֧��
     * @par ʾ��
     *      ��
     * @par ��ؽӿ�
     *      @ref page_iSetLightStatus "iSetLightStatus"
     */
	int WINAPI iSetLightStatus2(HANDLE p_hDevHandle, BYTE para, int p_piLightNum, int p_piStatus, tDevReturn *p_psStatus);

    /**
     * @page page_iGetDoorStatus iGetDoorStatus
     * @anchor ref_iGetDoorStatus ��ȡ��״̬
     * @brief int WINAPI iGetDoorStatus(HANDLE p_hDevHandle, int p_iDoorNum, tDevReturn* p_psStatus);
     * 
     * @param[in] p_hDevHandle �߼��豸�������hOpenLogicDevice����
     * @param[in] p_iDoorNum �ű�ţ�ȡֵ��Χ 0~12<br>
     *                         0����IOEXTEND_ALLDOOR<br>
     *                         1����IOEXTEND_DOOR1<br>
     *                         2����IOEXTEND_DOOR2<br>
     *                         3����IOEXTEND_DOOR3<br>
     *                         4����IOEXTEND_DOOR4<br>
     *                         5����IOEXTEND_DOOR5<br>
     *                         6����IOEXTEND_DOOR6<br>
     *                         7����IOEXTEND_DOOR7<br>
     *                         8����IOEXTEND_DOOR8<br>
     *                         9����IOEXTEND_DOOR9<br>
     *                         10��IOEXTEND_DOOR10<br>
     *                         11��IOEXTEND_DOOR11<br>
     *                         12��IOEXTEND_DOOR12
     * @param[out] p_psStatus ����״̬�ṹ��ͨ��p_psStatus��8ά�ṹ�����Է���2��ָʾ�Ƶ�״̬���������ʱ�򷵻�0����������ʱ�򷵻�1����ϸ��Ϣ�ο��ṹ�� @ref page_tDevReturn "tDevReturn"
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     * @par ע������
     *      ��
     * @par ʾ��
     *      ��
     * @par ��ؽӿ�
     *      ��
     */
	int WINAPI iGetDoorStatus(HANDLE p_hDevHandle, int p_iDoorNum, tDevReturn* p_psStatus);

    /**
     * @page page_iGetDevStatus iGetDevStatus
     * @anchor ref_iGetDevStatus ��ȡIO��չ���豸״̬
     * @brief int WINAPI iGetDevStatus(HANDLE p_hDevHandle, tDevReturn* p_psStatus);
     * 
     * @param[in] p_hDevHandle �߼��豸�������hOpenLogicDevice����
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� @ref page_tDevReturn "tDevReturn"
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     * @par ע������
     *      ��
     * @par ʾ��
     *      ��
     * @par ��ؽӿ�
     *      ��
     */
	int WINAPI iGetDevStatus(HANDLE p_hDevHandle, tDevReturn* p_psStatus);

    /**
     * @page page_iGetStatus iGetStatus
     * @anchor ref_iGetStatus ��ȡIO��չ��״̬
     * @brief int WINAPI iGetStatus(HANDLE p_hDevHandle, tDevReturn* p_psStatus);
     * 
     * @param[out] p_hDevHandle �߼��豸�������hOpenLogicDevice����
     * @param[in] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� @ref page_tDevReturn "tDevReturn"
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     * @par ע������
     *      ��
     * @par ʾ��
     *      ��
     * @par ��ؽӿ�
     *      ��
     */
	int WINAPI iGetStatus(HANDLE p_hDevHandle, tDevReturn* p_psStatus);

    /**
     * @page page_iGetDevVersion iGetDevVersion
     * @anchor ref_iGetDevVersion ��ȡ���ʰ汾
     * @brief int WINAPI iGetDevVersion(HANDLE p_hDevHandle, char *p_pcVersion);
     * 
     * @param[in] p_hDevHandle �߼��豸�������hOpenLogicDevice����
     * @param[out] p_pcVersion ���ʰ汾
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     * @par ע������
     *      ��
     * @par ʾ��
     *      ��
     * @par ��ؽӿ�
     *      ��
     */
	int WINAPI iGetDevVersion(HANDLE p_hDevHandle, char *p_pcVersion);

    /**
     * @page page_iGetVersion iGetVersion
     * @anchor ref_iGetVersion ��ȡ��̬��汾
     * @brief int WINAPI iGetVersion (HANDLE p_hDevHandle, char *p_pcVersion);
     * 
     * @param[in] p_hDevHandle �߼��豸�������hOpenLogicDevice����
     * @param[out] p_pcVersion ��̬��汾
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     * @par ע������
     *      ��
     * @par ʾ��
     *      ��
     * @par ��ؽӿ�
     *      ��
     */
	int WINAPI iGetVersion (HANDLE p_hDevHandle, char *p_pcVersion);  

    /**
     * @page page_iGetSerialNumber iGetSerialNumber
     * @anchor ref_iGetSerialNumber ��ȡ���к�
     * @brief int WINAPI iGetSerialNumber(HANDLE p_hDevHandle, char *p_pcSerial, tDevReturn *p_psStatus);
     * 
     * @param[in] p_hDevHandle �߼��豸�������hOpenLogicDevice����
     * @param[out] p_pcSerial ���к�,Ĭ��13���ֽ�
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� @ref page_tDevReturn "tDevReturn"
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     * @par ע������
     *      ��
     * @par ʾ��
     *      @ref example_iGetSerialNumber "example_iGetSerialNumber"
     * @par ��ؽӿ�
     *      ��
     */
	int WINAPI iGetSerialNumber(HANDLE p_hDevHandle, char *p_pcSerial, tDevReturn *p_psStatus);

    /**
     * @page page_iGetDevCapability iGetDevCapability
     * @anchor ref_iGetDevCapability ��ȡ�豸����
     * @brief int WINAPI iGetDevCapability(HANDLE p_hDevHandle, UINT *p_puiCapability, UINT p_uiNumber = 1);
     * 
     * @param[in] p_hDevHandle �߼��豸�������hOpenLogicDevice����
     * @param[out] p_puiCapability �豸����
     * @param[in] p_uiNumber �ڼ����
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     * @par ע������
     *      1��p_puiCapability���贫��p_uiNumber��32λ���޷����������ݣ����豸�Ĳ�ͬ�������ղ�ͬ��λ�������壨�Ӹ�λ��ʼ��������λΪ1ʱ����ʾ�豸���д����������򲻾߱���������<br>
     *      2��ĿǰIO��չ���ȡ�豸�����ӿ�֧�������豸������<br>
     *         �����ϱ����ܣ�p_puiCapabilit��1���޷������εĵ�31λ�������31λ����1����֧�������ϱ����ܣ�����֧�֡�
     * @par ʾ��
     *      ��
     * @par ��ؽӿ�
     *      ��
     */
	int WINAPI iGetDevCapability(HANDLE p_hDevHandle, UINT *p_puiCapability, UINT p_uiNumber = 1);

    /**
     * @page page_iGetPowerBtnStatus iGetPowerBtnStatus
     * @anchor ref_iGetPowerBtnStatus ��ȡ��Դ����״̬
     * @brief int WINAPI iGetPowerBtnStatus(HANDLE p_hDevHandle, int *p_piBtnStatus, tDevReturn *p_psStatus);
     * 
     * @param[in] p_hDevHandle �߼��豸�������hOpenLogicDevice����
     * @param[out] p_piBtnStatus ����״ֵ̬
     * - 0 ����δ������
     * - 1 ����������
     * - 2 ��������
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� @ref page_tDevReturn "tDevReturn"
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     * @par ע������
     *      ��
     * @par ʾ��
     *      @ref example_iGetPowerBtnStatus "example_iGetPowerBtnStatus"
     * @par ��ؽӿ�
     *      ��
     */
	int WINAPI iGetPowerBtnStatus(HANDLE p_hDevHandle, int *p_piBtnStatus, tDevReturn *p_psStatus);

    /**
     * @page page_iSetDelaySwitchPower iSetDelaySwitchPower
     * @anchor ref_iSetDelaySwitchPower ����������ʱ���ػ�
     * @brief int WINAPI iSetDelaySwitchPower(HANDLE p_hDevHandle, int p_iDelayOff, int p_iDelayOn, tDevReturn *p_psStatus);
     * 
     * @param[in] p_hDevHandle �߼��豸�������hOpenLogicDevice����
     * @param[in] p_iDelayOff ��ʱ�ػ�ʱ�䣨��λ���룬ȡַ��Χ�����ڵ��� 0��
     * @param[in] p_iDelayOn �ػ�����ʱ������ʱ�䣨��λ���룬ȡַ��Χ�����ڵ��� 0��
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� @ref page_tDevReturn "tDevReturn"
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     * @par ע������
     *      1��p_iDelayOff>0��p_iDelayOn>0��ʾ��ʱp_iDelayOff����ж�������Դ�������ж�������Դp_iDelayOn����Զ���������ͨ��Դ��<br>
     *      2��p_iDelayOff>0��p_iDelayOn=0��ʾ��ʱp_iDelayOff����ж�������Դ�����Ҳ����Զ���ͨ������Դ����Ҫ�ֶ����¿��ػ���ť���ܽ�ͨ������Դ��<br>
     *      3��p_iDelayOff=0ʱ����p_iDelayOnֵΪ���پ���ʵ�ʶ�����
     * @par ʾ��
     *      @ref example_iSetDelaySwitchPower "example_iSetDelaySwitchPower"
     * @par ��ؽӿ�
     *      ��
     */
	int WINAPI iSetDelaySwitchPower(HANDLE p_hDevHandle, int p_iDelayOff, int p_iDelayOn, tDevReturn *p_psStatus);

    /**
     * @page page_iSetSwitchMachineConf iSetSwitchMachineConf
     * @anchor ref_iSetSwitchMachineConf ���ÿ��ػ�Ĭ�ϲ���
     * @brief int WINAPI iSetSwitchMachineConf(HANDLE p_hDevHandle, tSwitchMachineConfInfo* p_psConfInfo, tDevReturn *p_psStatus);
     * 
     * @param[in] p_hDevHandle �߼��豸�������hOpenLogicDevice����
     * @param[in] p_psConfInfo ���ػ�Ĭ��������Ϣ�ṹ�壬��ϸ��Ϣ�ο��ṹ�� @ref page_tSwitchMachineConfInfo "tSwitchMachineConfInfo"
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� @ref page_tDevReturn "tDevReturn"
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     * @par ע������
     *      ��
     * @par ʾ��
     *      ��
     * @par ��ؽӿ�
     *      ��
     */
	int WINAPI iSetSwitchMachineConf(HANDLE p_hDevHandle, tSwitchMachineConfInfo* p_psConfInfo, tDevReturn *p_psStatus);

    /**
     * @page page_iAdjustLightSetting iAdjustLightSetting
     * @anchor ref_iAdjustLightSetting �Զ����⹦������
     * @brief int WINAPI iAdjustLightSetting(HANDLE p_hDevHandle, tAdjustLightConfInfo* p_psConfInfo, tDevReturn *p_psStatus);
     * 
     * @param[in] p_hDevHandle �߼��豸�������hOpenLogicDevice����
     * @param[in] p_psConfInfo ����������Ϣ�ṹ�壬��ϸ��Ϣ�ο��ṹ�� @ref page_tSignalBoardAdjustLightConfInfo "tSignalBoardAdjustLightConfInfo"
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� @ref page_tDevReturn "tDevReturn"
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     * @par ע������
     *      ��
     * @par ʾ��
     *      ��
     * @par ��ؽӿ�
     *      ��
     */
	int WINAPI iAdjustLightSetting(HANDLE p_hDevHandle, tAdjustLightConfInfo* p_psConfInfo, tDevReturn *p_psStatus);

    /**
     * @page page_iUsbOnOffSetting iUsbOnOffSetting
     * @anchor ref_iUsbOnOffSetting USBͨ������
     * @brief 
     * 
     * @param[in] p_hDevHandle �߼��豸�������hOpenLogicDevice����
     * @param[in] p_byUsb1 ����ϵ�USB��/��Ҫ��Ӧ�źŰ��ϵ�USB3
     * @param[in] p_byUsb2 ����ϵ�USB��/��Ҫ��Ӧ�źŰ��ϵ�USB5
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� @ref page_tDevReturn "tDevReturn"
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     * @par ע������
     *      ��
     * @par ʾ��
     *      ��
     * @par ��ؽӿ�
     *      ��
     */
	int WINAPI iUsbOnOffSetting(HANDLE p_hDevHandle, BYTE p_byUsb1,  BYTE p_byUsb2,  tDevReturn *p_psStatus);

    /**
     * @page page_iGetLightSensingVoltage iGetLightSensingVoltage
     * @anchor ref_iGetLightSensingVoltage ��ȡ��е�ѹADֵ
     * @brief 
     * 
     * @param[in] p_hDevHandle �߼��豸�������hOpenLogicDevice����
     * @param[out] p_uiLightSensingVoltage ��е�ѹADֵ
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� @ref page_tDevReturn "tDevReturn"
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     * @par ע������
     *      ��
     * @par ʾ��
     *      @ref example_iGetLightSensingVoltage "example_iGetLightSensingVoltage"
     * @par ��ؽӿ�
     *      ��
     */
	int WINAPI iGetLightSensingVoltage(HANDLE p_hDevHandle, UINT* p_uiLightSensingVoltage, tDevReturn* p_psStatus);

    /**
     * @page page_iSetPowerIndicatorConf iSetPowerIndicatorConf
     * @anchor ref_iSetPowerIndicatorConf ���õ�Դ״ָ̬ʾ�ƣ�һ�����ػ�����ָʾ�ƣ�����
     * @brief int WINAPI iSetPowerIndicatorConf(HANDLE p_hDevHandle, BYTE p_byIndicatorFlag, BYTE p_byIndicatorOutlet, BYTE p_byIndicatorOnLevel, BYTE p_byIndicatorFickerFrequency, tDevReturn* p_psStatus);
     * 
     * @param[in] p_hDevHandle �߼��豸�������hOpenLogicDevice����
     * @param[in] p_byIndicatorFlag ��Դ״ָ̬ʾ�ƿ����Ƿ���Ч
     * - 0 ����Ч
     * - 1 ��Ч
     * @param[in] p_byIndicatorOutlet ���õ�Դ״ָ̬ʾ�����ڵ�����˿ڣ�ȡֵ��Χ��1~12��
     * @param[in] p_byIndicatorOnLevel ����ָʾ�Ƶ������ƽ�� 0 �� 1
     * @param[in] p_byIndicatorFickerFrequency �ȴ������ϵ�����У�ָʾ�Ƶ���˸Ƶ�ʣ�ȡֵ˵�� 's':������'m':������'f':���� 
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� @ref page_tDevReturn "tDevReturn"
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     * @par ע������
     *      ��
     * @par ʾ��
     *      ��
     * @par ��ؽӿ�
     *      ��
     */
	int WINAPI iSetPowerIndicatorConf(HANDLE p_hDevHandle, BYTE p_byIndicatorFlag, BYTE p_byIndicatorOutlet, BYTE p_byIndicatorOnLevel, BYTE p_byIndicatorFickerFrequency, tDevReturn* p_psStatus);
	
    /**
     * @page page_iAlarm iAlarm
     * @anchor ref_iAlarm ���Ʊ��������̵���״̬
     * @brief int WINAPI iAlarm(HANDLE p_hDevHandle, BYTE p_bySwitch, tDevReturn* p_psrStatus);
     * 
     * @param[in] p_hDevHandle �߼��豸�������hOpenLogicDevice����
     * @param[in] p_uiSwitch ���״̬
     * - 0 �̵����Ͽ����޾���
     * - 1 �̵����պϣ�������
     * @param[out] p_psrStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� @ref page_tDevReturn "tDevReturn"
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     * @par ע������
     *      ��
     * @par ʾ��
     *      ��
     * @par ��ؽӿ�
     *      ��
     */
    int WINAPI iAlarm(HANDLE p_hDevHandle, BYTE p_bySwitch, tDevReturn* p_psrStatus);

    /**
     * @page page_iSetDuniteCfg iSetDuniteCfg
     * @anchor ref_iSetDuniteCfg ����Dunite����·��
     * @brief int WINAPI iSetDuniteCfg(HANDLE p_hDevHandle, const char* CfgFileDir,  const char* UsbSetDeviceFd, tDevReturn* p_psrStatus);
     * 
     * @param[in] p_hDevHandle �߼��豸�������hOpenLogicDevice����
     * @param[in] CfgFileDir �����ļ�·��
     * @param[in] UsbSetDeviceFd USB�򿪺��FD�������ǿɴ����ַ��� ""
     * @param[out] p_psrStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� @ref page_tDevReturn "tDevReturn"
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     * @par ע������
     *      1���ýӿڽ�������Androidƽ̨��<br>
     *      2���ڵ���hOpenLogicDevice֮��iSetCommPara֮ǰ����<br>
     *      3�������汾V1.1.0.2���֧��
     * @par ʾ��
     *      ��
     * @par ��ؽӿ�
     *      ��
     */
    int WINAPI iSetDuniteCfg(HANDLE p_hDevHandle, const char* CfgFileDir,  const char* UsbSetDeviceFd, tDevReturn* p_psrStatus);
	
    /**
     * @page page_iGetDeviceID iGetDeviceID
     * @anchor ref_iGetDeviceID ��ȡ�豸ID
     * @brief int WINAPI iGetDeviceID(HANDLE p_hDevHandle, char* p_pcDeviceID, tDevReturn* p_psStatus);
     * 
     * @param[in] p_hDevHandle �߼��豸�������hOpenLogicDevice����
     * @param[out] p_pcDeviceID 16�ֽ��豸ID 
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� @ref page_tDevReturn "tDevReturn"
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     * @par ע������
     *      1��IO��չ��������ʰ汾��V2.2b35
     * @par ʾ��
     *      ��
     * @par ��ؽӿ�
     *      ��
     */
	int WINAPI iGetDeviceID(HANDLE p_hDevHandle, char* p_pcDeviceID, tDevReturn* p_psStatus);

    /**
     * @page page_iGetIOActiveTime iGetIOActiveTime
     * @anchor ref_iGetIOActiveTime ��ȡ����ʱ��
     * @brief int WINAPI iGetIOActiveTime(HANDLE p_hDevHandle, char* p_pcActiveTime, tDevReturn* p_psStatus);
     * 
     * @param[in] p_hDevHandle �߼��豸�������hOpenLogicDevice����
     * @param[out] p_pcActiveTime ��ǰ����ʹ�õ�ʱ��[14�ֽ�]
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� @ref page_tDevReturn "tDevReturn"
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     * @par ע������
     *      ��
     * @par ʾ��
     *      ��
     * @par ��ؽӿ�
     *      ��
     */
    int WINAPI iGetIOActiveTime(HANDLE p_hDevHandle, char* p_pcActiveTime, tDevReturn* p_psStatus);

    /**
     * @page page_iGoBootLoader iGoBootLoader
     * @anchor ref_iGoBootLoader ��ת��BootLoader������
     * @brief int WINAPI iGoBootLoader(HANDLE p_hDevHandle, tDevReturn* p_psStatus);
     * 
     * @param[in] p_hDevHandle �߼��豸�������hOpenLogicDevice����
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� @ref page_tDevReturn "tDevReturn"
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     * @par ע������
     *      ��
     * @par ʾ��
     *      ��
     * @par ��ؽӿ�
     *      ��
     */
	int WINAPI iGoBootLoader(HANDLE p_hDevHandle, tDevReturn* p_psStatus);

    /**
     * @page page_iFirmwareDownload iFirmwareDownload
     * @anchor ref_iFirmwareDownload ����APP��Ч��ǣ�����/�̼�����
     * @brief int WINAPI iFirmwareDownload(HANDLE p_hDevHandle, const char* p_pcDownloadPath, tDevReturn* p_psStatus);
     * 
     * @param p_hDevHandle �߼��豸�������hOpenLogicDevice����
     * @param p_pcDownloadPath �����ļ��ľ���·��
     * @param p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� @ref page_tDevReturn "tDevReturn"
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     * @par ע������
     *      ��
     * @par ʾ��
     *      ��
     * @par ��ؽӿ�
     *      ��
     */
	int WINAPI iFirmwareDownload(HANDLE p_hDevHandle, const char* p_pcDownloadPath, tDevReturn* p_psStatus);

    /**
     * @page page_iGetProgress iGetProgress
     * @anchor ref_iGetProgress ��ȡ���ؽ���
     * @brief int	WINAPI iGetProgress(HANDLE p_hDevHandle, int* p_cProgress, tDevReturn* p_psStatus);
     * 
     * @param p_hDevHandle �߼��豸�������hOpenLogicDevice����
     * @param p_cProgress ���ؽ��Ȱٷֱȣ����ֵΪ80ʱ����ʾ�Ѿ�������80%
     * @param p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� @ref page_tDevReturn "tDevReturn"
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     * @par ע������
     *      ��
     * @par ʾ��
     *      ��
     * @par ��ؽӿ�
     *      ��
     */
    int	WINAPI iGetProgress(HANDLE p_hDevHandle, int* p_cProgress, tDevReturn* p_psStatus);
#ifdef __cplusplus
}
#endif // __cplusplus
#endif // _OIOExtendDevDll_H_