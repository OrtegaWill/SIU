/*
 * @Author: icemaple-z99 450196683@qq.com
 * @Date: 2023-05-23 22:37:47
 * @LastEditors: icemaple-z99 450196683@qq.com
 * @LastEditTime: 2023-06-20 15:35:55
 * @FilePath: \IOExtendDev\src\OIOExtendDevStruct.h
 * @Description: ����Ĭ������,������`customMade`, ��koroFileHeader�鿴���� ��������: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/**
 * @file OIOExtendDevStruct.h
 * @brief OIOExtendDev��չ��ṹ��
 */
#ifndef _OIOExtendDevStruct_H
#define _OIOExtendDevStruct_H


#pragma pack(push, 1)


/**
 * @page page_tSwitchMachineConfInfo tSwitchMachineConfInfo
 * @anchor ref_dsc_tSwitchMachineConfInfo ���ػ�Ĭ��������Ϣ�ṹ��
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
 * @param byConfFlag �Ƿ�ʹ�ú���Ŀ��ػ����ò��� 0:��ʹ�ã�����Ĳ�����Ч��ʹ�ã�����������ģ�Ĭ������ 1:ʹ�ú������,���������Ч
 * @param byIsPowerUp �����Ƿ�������ϵ�  0:��  1����
 * @param uiOffToOnTime �����Ӷϵ絽�ϵ��ȷ��ʱ�䣨����Ҫ����ò��ܿ�����,��λ��ms,��ֵ����С��200ms����ʱ��
 * @param uiKeyInvalidTime �������ϵ�󣬶������ڰ�����Ч,��λ��ms, 0��ʾ����һֱ��Ч
 * @param uiColdStartTime ����������������ȷ��ʱ�䣨����Ҫ������豸������,��λ��ms, 0��ʾ�ò�����Ч��û��Reset����
 * @param uiOnToOffTime �����ؼ�ȷ��ʱ�䣨����Ҫ����ò��ܿ��ػ���,��λ��ms
 * @param uiDelayShutdownTime ��ʱ�ػ�ʱ��,��λ��s
 * @param uiDelayBootUpTime ��ʱ����ʱ��,��λ��s
 * @param byUsbOnOff �����ϵ���Ƿ������ϵ�usb�ڵ�Դ��0:�رգ�1:��
 */
typedef struct						// ���ػ�Ĭ��������Ϣ�ṹ��
{
	BYTE	byConfFlag;				///< �Ƿ�ʹ�ú���Ŀ��ػ����ò��� 0:��ʹ�ã�����Ĳ�����Ч��ʹ�ã�����������ģ�Ĭ������ 1:ʹ�ú������,���������Ч
	BYTE	byIsPowerUp;			///< �����Ƿ�������ϵ�  0:��  1����
	UINT	uiOffToOnTime;			///< �����Ӷϵ絽�ϵ��ȷ��ʱ�䣨����Ҫ����ò��ܿ�����,��λ��ms,��ֵ����С��200ms����ʱ��
	UINT	uiKeyInvalidTime;		///< �������ϵ�󣬶������ڰ�����Ч,��λ��ms, 0��ʾ����һֱ��Ч
	UINT	uiColdStartTime;		///< ����������������ȷ��ʱ�䣨����Ҫ������豸������,��λ��ms, 0��ʾ�ò�����Ч��û��Reset����
	UINT	uiOnToOffTime;		  	///< �����ؼ�ȷ��ʱ�䣨����Ҫ����ò��ܿ��ػ���,��λ��ms
	UINT	uiDelayShutdownTime;	///< ��ʱ�ػ�ʱ��,��λ��s
	UINT	uiDelayBootUpTime;		///< ��ʱ����ʱ��,��λ��s
	BYTE    byUsbOnOff;				///< �����ϵ���Ƿ������ϵ�usb�ڵ�Դ��0:�رգ�1:��

} tSwitchMachineConfInfo;

/**
 * @page page_tAdjustLightConfInfo tAdjustLightConfInfo
 * @anchor ref_dsc_tAdjustLightConfInfo ����������Ϣ�ṹ��
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
 * @param byAddButton ��+��������Ӧ������ڣ�1~12, 0��ʾ�˰�����Ч
 * @param bySubtractButton ��-��������Ӧ������ڣ�1~12, 0��ʾ�˰�����Ч
 * @param byGrowthValue ����һ�����ӵĲ��� 1~12
 * @param byDimmingOutlet ���������  1~12
 * @param byAutomDimmer �Ƿ��Զ����⣬0����1����
 * @param byBackToAutoDimmer �������¶������ص��Զ�����״̬����λ���룬4�ֽ�	
 * @param abyLightLevel ÿһ�ȼ���Ӧ���� �����ǿ�ȣ�������ǿ�� byLightLevel[12]~byLightLevel[31]Ԥ��
 * @param byCloseLightLevel ����ƿ�ʼ�رյ���Ĺ�ǿ�ȼ�(����ǿ�ﵽbyCloseLightLevel�ȼ��رղ����)
 */
typedef struct						// ����������Ϣ�ṹ��
{
	BYTE  byAddButton;				///< ��+��������Ӧ������ڣ�1~12, 0��ʾ�˰�����Ч
	BYTE  bySubtractButton;			///< ��-��������Ӧ������ڣ�1~12, 0��ʾ�˰�����Ч
	BYTE  byGrowthValue ;			///< ����һ�����ӵĲ��� 1~12
    BYTE  byDimmingOutlet;			///< ���������  1~12
	BYTE  byAutomDimmer;			///< �Ƿ��Զ����⣬0����1����
	UINT  byBackToAutoDimmer;       ///< �������¶������ص��Զ�����״̬����λ���룬4�ֽ�	
	BYTE  abyLightLevel[32];        ///< ÿһ�ȼ���Ӧ���� �����ǿ�ȣ�������ǿ�� byLightLevel[12]~byLightLevel[31]Ԥ��
	BYTE  byCloseLightLevel;		///< ����ƿ�ʼ�رյ���Ĺ�ǿ�ȼ�(����ǿ�ﵽbyCloseLightLevel�ȼ��رղ����)
} tAdjustLightConfInfo;

#pragma pack(pop)

#endif