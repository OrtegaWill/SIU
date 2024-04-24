// IOExtendDev.h 
//
//////////////////////////////////////////////////////////////////////

#ifndef __IOEXTENDDEV_H__
#define __IOEXTENDDEV_H__


#include "OIOExtendDevStruct.h"
#include <ODevBase.h>

#ifndef IODEFINE
#define IODEFINE

// ָʾ�Ƶı�ź궨��
/**
 * @brief ����ָʾ��
 * 
 */
#define IOEXTEND_ALLINDICATOR	0				// ����ָʾ��

/**
 * @brief ָʾ��1
 * 
 */
#define IOEXTEND_INDICATOR1		1				// ָʾ��1

/**
 * @brief ָʾ��2
 * 
 */
#define IOEXTEND_INDICATOR2		2				// ָʾ��2

/**
 * @brief ָʾ��3
 * 
 */
#define IOEXTEND_INDICATOR3		3				// ָʾ��3

/**
 * @brief ָʾ��4
 * 
 */
#define IOEXTEND_INDICATOR4		4				// ָʾ��4

/**
 * @brief ָʾ��5
 * 
 */
#define IOEXTEND_INDICATOR5		5				// ָʾ��5

/**
 * @brief ָʾ��6
 * 
 */
#define IOEXTEND_INDICATOR6		6				// ָʾ��6

/**
 * @brief ָʾ��7
 * 
 */
#define IOEXTEND_INDICATOR7		7				// ָʾ��7

/**
 * @brief ָʾ��8
 * 
 */
#define IOEXTEND_INDICATOR8		8				// ָʾ��8

/**
 * @brief ָʾ��9
 * 
 */
#define IOEXTEND_INDICATOR9		9				// ָʾ��9

/**
 * @brief ָʾ��10
 * 
 */
#define IOEXTEND_INDICATOR10	10				// ָʾ��10

/**
 * @brief ָʾ��11
 * 
 */
#define IOEXTEND_INDICATOR11	11				// ָʾ��11

/**
 * @brief ָʾ��12
 * 
 */
#define IOEXTEND_INDICATOR12	12				// ָʾ��12

/**
 * @brief ָʾ��13
 * 
 */
#define IOEXTEND_INDICATOR13	13				// ָʾ��13

/**
 * @brief ָʾ��14
 * 
 */
#define IOEXTEND_INDICATOR14	14				// ָʾ��14

// ָʾ�Ƶ�״̬�궨��
/**
 * @brief ����
 * 
 */
#define IOEXTEND_LIGHT_OFF				0		// ����

/**
 * @brief �Ƴ�����
 * 
 */
#define IOEXTEND_LIGHT_CONTINUOUS		1		// �Ƴ�����

/**
 * @brief ָʾ��������˸
 * 
 */
#define IOEXTEND_SLOW_FLASH				2		// ָʾ��������˸

/**
 * @brief ָʾ��������˸
 * 
 */
#define IOEXTEND_MEDIUM_FLASH			3		// ָʾ��������˸

/**
 * @brief ָʾ�ƿ�����˸
 * 
 */
#define IOEXTEND_QUICK_FLASH			4		// ָʾ�ƿ�����˸

/**
 * @brief ռ�ձȿɵ�
 * 
 */
#define IOEXTEND_ADJ_FLASH	    		5       // ռ�ձȿɵ�

/**
 * @brief ��ȿɵ�����
 * 
 */
#define IOEXTEND_PULSE      			6       // ��ȿɵ�����

/**
 * @brief ����ģʽ  ����һ·���·�Ƶ�����
 * 
 */
#define IOEXTEND_ADJ_LIGHT				7		// ����ģʽ  ����һ·���·�Ƶ�����

/**
 * @brief �ƽ���ģʽ 'g' �����𽥱�����
 * 
 */
#define IOSIGNALCTR_CHANGE_LIGHTON			8		// �ƽ���ģʽ 'g' �����𽥱�����

/**
 * @brief �ƽ���ģʽ 'G' �����𽥱䰵
 * 
 */
#define IOSIGNALCTR_CHANGE_LIGHTOFF			9		// �ƽ���ģʽ 'G' �����𽥱䰵

// �ŵı�ź궨��
/**
 * @brief ���е���
 * 
 */
#define IOEXTEND_ALLDOOR				0		// ���е���

/**
 * @brief ��1
 * 
 */
#define IOEXTEND_DOOR1					1		// ��1

/**
 * @brief ��2
 * 
 */
#define IOEXTEND_DOOR2					2		// ��2

/**
 * @brief ��3
 * 
 */
#define IOEXTEND_DOOR3					3		// ��3

/**
 * @brief ��4
 * 
 */
#define IOEXTEND_DOOR4					4		// ��4

/**
 * @brief ��5
 * 
 */
#define IOEXTEND_DOOR5					5		// ��5

/**
 * @brief ��6
 * 
 */
#define IOEXTEND_DOOR6					6		// ��6

/**
 * @brief ��7
 * 
 */
#define IOEXTEND_DOOR7					7		// ��7

/**
 * @brief ��8
 * 
 */
#define IOEXTEND_DOOR8					8		// ��8

/**
 * @brief ��9
 * 
 */
#define IOEXTEND_DOOR9					9		// ��9

/**
 * @brief ��10
 * 
 */
#define IOEXTEND_DOOR10					10		// ��10

/**
 * @brief ��11
 * 
 */
#define IOEXTEND_DOOR11					11		// ��11

/**
 * @brief ��12
 * 
 */
#define IOEXTEND_DOOR12					12		// ��12

// �ŵ�״̬�궨��
/**
 * @brief �ſ�
 * 
 */
#define IOEXTEND_DOOR_OPEN				1		// �ſ�

/**
 * @brief �Ź�
 * 
 */
#define IOEXTEND_DOOR_CLOSE				0		// �Ź�

/**
 * @brief �ص���������
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
     * @brief ��ʼ��ģ��
     * 
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� tDevReturn
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     */
	int  iInit(tDevReturn* p_psStatus);

    /**
     * @brief ��ȡ��p_ piLightNumָ���ĵƵĵ�ǰ״̬
     * 
     * @param[in] p_piLightNum �Ʊ��,ȡֵ��Χ 0~12
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� tDevReturn
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     */
	int  iGetLightStatus(int p_piLightNum, tDevReturn *p_psStatus);

    /**
     * @brief ͨ������
     * 
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� tDevReturn
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     */
	int  iSetCommPara(tDevReturn* p_psStatus);

    /**
     * @brief ��p_iLightNumָ���ĵƶ�Ӧ����Ϊp_iStatusָ����״̬
     * 
     * @param[in] p_piLightNum �Ʊ��
     * @param[in] p_piStatus ��״̬
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� tDevReturn
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     */
	int  iSetLightStatus(int p_piLightNum, int p_piStatus, tDevReturn *p_psStatus);

    /**
     * @brief ��p_iLightNumָ���ĵƶ�Ӧ����Ϊp_iStatusָ����״̬
     * 
     * @param[in] para �������˸���ʱ��Ϊռ�ձȲ������������ռ�ձ�Ϊ20%ʱ��PARAΪ20��PARA��ΧΪ0---100 ������������ʱ��Ϊ�ߵ�ƽ����ʱ��������������150����������ʱ��PARAΪ150��PARA��ΧΪ0��250,��������õ�����ʱ�� PARA��ΧΪ0--12������12Ĭ��Ϊ12��
     * @param[in] p_piLightNum �Ʊ��
     * @param[in] p_piStatus ��״̬
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� tDevReturn
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     */
	int	 iSetLightStatus(BYTE para, int p_piLightNum, int p_piStatus, tDevReturn *p_psStatus);

    /**
     * @brief ��ȡ��״̬
     * 
     * @param[in] p_iDoorNum �ű�ţ�ȡֵ��Χ 0~12
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� tDevReturn
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     */
	int  iGetDoorStatus(int p_iDoorNum, tDevReturn* p_psStatus);

    /**
     * @brief ��ȡIO��չ���豸״̬
     * 
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� tDevReturn
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     */
	int  iGetDevStatus(tDevReturn* p_psStatus);

    /**
     * @brief ��ȡIO��չ��״̬
     * 
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� tDevReturn
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     */
	int  iGetStatus(tDevReturn* p_psStatus);

    /**
     * @brief ��ȡ���ʰ汾
     * 
     * @param[out] p_pcVersion ���ʰ汾
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     */
	int  iGetDevVersion(char *p_pcVersion);

    /**
     * @brief ��ȡ��̬��汾
     * 
     * @param[out] p_pcVersion ��̬��汾
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     */
	int  iGetVersion (char *p_pcVersion);  

    /**
     * @brief ��ȡ���к�
     * 
     * @param[out] p_pcSerial ���к�,Ĭ��13���ֽ�
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� tDevReturn
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     */
	int  iGetSerialNumber(char *p_pcSerial, tDevReturn *p_psStatus);

    /**
     * @brief ��ȡ�豸����
     * 
     * @param[out] p_puiCapability �豸����
     * @param[in] p_uiNumber �ڼ����
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     */
	int  iGetDevCapability(UINT *p_puiCapability, UINT p_uiNumber = 1);

    /**
     * @brief ��ȡ��Դ����״̬
     * 
     * @param[in] p_piBtnStatus ����״ֵ̬
     * - 0 ����δ������
     * - 1 ����������
     * - 2 ��������
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� tDevReturn
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     */
	int  iGetPowerBtnStatus(int *p_piBtnStatus, tDevReturn *p_psStatus);

    /**
     * @brief ����������ʱ���ػ�
     * 
     * @param[in] p_iDelayOff ��ʱ�ػ�ʱ�䣨��λ���룬ȡַ��Χ�����ڵ��� 0��
     * @param[in] p_iDelayOn �ػ�����ʱ������ʱ�䣨��λ���룬ȡַ��Χ�����ڵ��� 0��
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� tDevReturn
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     */
	int  iSetDelaySwitchPower(int p_iDelayOff, int p_iDelayOn, tDevReturn *p_psStatus);

    /**
     * @brief ���ÿ��ػ�Ĭ�ϲ���
     * 
     * @param[in] p_psConfInfo ���ػ�Ĭ��������Ϣ�ṹ�壬��ϸ��Ϣ�ο��ṹ�� tSignalBoardSwitchMachineConfInfo
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� tDevReturn
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     */
	int  iSetSwitchMachineConf(tSwitchMachineConfInfo* p_psConfInfo, tDevReturn *p_psStatus);

    /**
     * @brief �Զ����⹦������
     * 
     * @param[in] p_psConfInfo ����������Ϣ�ṹ�壬��ϸ��Ϣ�ο��ṹ�� tSignalBoardAdjustLightConfInfo
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� tDevReturn
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     */
	int  iAdjustLightSetting(tAdjustLightConfInfo* p_psConfInfo, tDevReturn *p_psStatus);

    /**
     * @brief USBͨ������
     * 
     * @param[in] p_byUsb1 ����ϵ�USB��/��Ҫ��Ӧ�źŰ��ϵ�USB3
     * @param[in] p_byUsb2 ����ϵ�USB��/��Ҫ��Ӧ�źŰ��ϵ�USB5
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� tDevReturn
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     */
	int  iUsbOnOffSetting(BYTE p_byUsb1,  BYTE p_byUsb2,  tDevReturn *p_psStatus);

    /**
     * @brief ��ȡ��е�ѹADֵ
     * 
     * @param[out] p_uiLightSensingVoltage ��е�ѹADֵ
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� tDevReturn
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     */
	int  iGetLightSensingVoltage(UINT* p_uiLightSensingVoltage, tDevReturn* p_psStatus);

    /**
     * @brief ���õ�Դ״ָ̬ʾ�ƣ�һ�����ػ�����ָʾ�ƣ�����
     * 
     * @param[in] p_byIndicatorFlag ��Դ״ָ̬ʾ�ƿ����Ƿ���Ч
     * - 0 ����Ч
     * - 1 ��Ч
     * @param[in] p_byIndicatorOutlet ���õ�Դ״ָ̬ʾ�����ڵ�����˿ڣ�ȡֵ��Χ��1~12��
     * @param[in] p_byIndicatorOnLevel ����ָʾ�Ƶ������ƽ�� 0 �� 1
     * @param[in] p_byIndicatorFickerFrequency �ȴ������ϵ�����У�ָʾ�Ƶ���˸Ƶ�ʣ�
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� tDevReturn
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     */
	int  iSetPowerIndicatorConf(BYTE p_byIndicatorFlag, BYTE p_byIndicatorOutlet, BYTE p_byIndicatorOnLevel, BYTE p_byIndicatorFickerFrequency, tDevReturn* p_psStatus);

    /**
     * @brief ���Ʊ��������̵���״̬
     * 
     * @param[in] p_uiSwitch ���״̬
     * - 0 �̵����Ͽ����޾���
     * - 1 �̵����պϣ�������
     * @param[out] p_psrStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� tDevReturn
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     */
	int  iAlarm(BYTE p_bySwitch, tDevReturn* p_psrStatus);	

    /**
     * @brief ����Dunite����·��
     * 
     * @param[in] p_hDevHandle �߼��豸�������hOpenLogicDevice����
     * @param[in] CfgFileDir �����ļ�·��
     * @param[in] UsbSetDeviceFd USB�򿪺��FD�������ǿɴ����ַ��� ""
     * @param[out] p_psrStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� tDevReturn
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     */
    int  iSetDuniteCfg(const char* CfgFileDir,  const char* UsbSetDeviceFd, tDevReturn* p_psrStatus);

    /**
     * @brief ��ȡ�豸ID
     * 
     * @param[out] p_pcDeviceID 16�ֽ��豸ID 
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� tDevReturn
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     * @note �ýӿ���Androidƽ̨��ʹ��: 1.
     */
	int  iGetDeviceID(char* p_pcDeviceID, tDevReturn* p_psStatus);

    /**
     * @brief ��ȡ����ʱ��
     * 
     * @param[out] p_pcActiveTime ����ʱ��
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� tDevReturn
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     */
    int  iGetIOActiveTime(char* p_pcActiveTime, tDevReturn* p_psStatus);

    /**
     * @brief ��ת��BootLoader������
     * 
     * @param[out] p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� tDevReturn
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     */
	int  iGoBootLoader(tDevReturn* p_psStatus);

    /**
     * @brief ����APP��Ч��ǣ�����/�̼�����
     * 
     * @param p_pcDownloadPath �����ļ��ľ���·��
     * @param p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� tDevReturn
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
     */
	int  iFirmwareDownload(const char* p_pcDownloadPath, tDevReturn* p_psStatus);

    /**
     * @brief ��ȡ���ؽ���
     * 
     * @param p_cProgress ���ؽ��Ȱٷֱȣ����ֵΪ80ʱ����ʾ�Ѿ�������80%
     * @param p_psStatus ����״̬�ṹ����ϸ��Ϣ�ο��ṹ�� tDevReturn
     * @return int ȡֵ��ΧΪSUCCESS:0��FAIL:1�����0��������ֵΪSUCCESS:0��ʾ����ִ����ȷ��ΪFAIL:1�����0�����ʾ����ִ������ע�⣺�������SUCCESS:0�ɹ���p_psStatusҲ�п��ܷ��ؾ������
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
