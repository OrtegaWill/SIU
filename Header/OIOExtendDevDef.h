/**
 * @file OIOExtendDevDef.h
 * @brief OIOExtendDev��չ��״̬��˵��
 */
#ifndef	_OIOEXTENDDEVDEF_H_
#define	_OIOEXTENDDEVDEF_H_




/**
 * @anchor ref_page_6900 6900
 * @anchor ref_type_6900 ״̬��ַ
 * @anchor ref_dsc_6900<br> IO��չ�� ״̬���ַ
 * @anchor ref_process_6900<br> ��
 */
#define S_IOEXTEND_BASE					6900			// 6900 -- 6910	״̬��

/**
 * @anchor ref_page_6920 6920
 * @anchor ref_type_6920 �����ַ
 * @anchor ref_dsc_6920<br> IO��չ�� �������ַ
 * @anchor ref_process_6920<br> ��
 */
#define W_IOEXTEND_BASE					6920			// 6920 -- 6930	������	

/**
 * @anchor ref_page_6940 6940
 * @anchor ref_type_6940 �����ַ
 * @anchor ref_dsc_6940<br> IO��չ�� �������ַ
 * @anchor ref_process_6940<br> ��
 */
#define E_IOEXTEND_BASE					6940			// 6940 -- 6999	���ش�����


/**
 * @anchor ref_page_6901 6901
 * @anchor ref_type_6901 ״̬��
 * @anchor ref_dsc_6901<br> ��������
 * @anchor ref_process_6901<br> ��
 */
#define S_IOEXTEND_NORMAL		        S_IOEXTEND_BASE+1		// 6901	IO��չ��ģ��������������

/**
 * @anchor ref_page_6921 6921
 * @anchor ref_type_6921 ������
 * @anchor ref_dsc_6921<br> ����Ĳ�������Ч��
 * @anchor ref_process_6921<br> ������
 */
#define W_IOEXTEND_INVALIDPARAM	        W_IOEXTEND_BASE+1		// 6921 ����Ĳ�������Ч��

/**
 * @anchor ref_page_6941 6941
 * @anchor ref_type_6941 ������
 * @anchor ref_dsc_6941<br> ��ʼ��COM�������
 * @anchor ref_process_6941<br> ��������ļ�
 */
#define E_IOEXTEND_COMMERR				E_IOEXTEND_BASE+1		// 6941	��ʼ��COM�������

/**
 * @anchor ref_page_6942 6942
 * @anchor ref_type_6942 ������
 * @anchor ref_dsc_6942<br> ��Ч������
 * @anchor ref_process_6942<br> �ط�
 */
#define E_IOEXTEND_INVAILDCOMMAND		E_IOEXTEND_BASE+2		// 6942	��Ч������

/**
 * @anchor ref_page_6943 6941
 * @anchor ref_type_6943 ������
 * @anchor ref_dsc_6943<br> ����״̬�����
 * @anchor ref_process_6943<br> ��
 */
#define E_IOEXTEND_DOOR_COMMANDERROR	E_IOEXTEND_BASE+3		// 6943	����״̬�����

/**
 * @anchor ref_page_6944 6944
 * @anchor ref_type_6944 ������
 * @anchor ref_dsc_6944<br> ȡ��״̬��
 * @anchor ref_process_6944<br> ��
 */
#define E_IOEXTEND_DOOR_GETSTATUSERROR	E_IOEXTEND_BASE+4		// 6944	ȡ��״̬��

/**
 * @anchor ref_page_6945 6945
 * @anchor ref_type_6945 ������
 * @anchor ref_dsc_6945<br> �Ų�����ʱ
 * @anchor ref_process_6945<br> ��
 */
#define E_IOEXTEND_DOOR_TIMEOUT			E_IOEXTEND_BASE+5		// 6945	�Ų�����ʱ

/**
 * @anchor ref_page_6946 6946
 * @anchor ref_type_6946 ������
 * @anchor ref_dsc_6946<br> ָʾ��״̬�����
 * @anchor ref_process_6946<br> ��
 */
#define E_IOEXTEND_LIGHT_COMMANDERROR	E_IOEXTEND_BASE+6		// 6946	ָʾ��״̬�����

/**
 * @anchor ref_page_6947 6947
 * @anchor ref_type_6947 ������
 * @anchor ref_dsc_6947<br> ����ָʾ�ƴ�
 * @anchor ref_process_6947<br> ��
 */
#define E_IOEXTEND_LIGHT_SETSTATUSERROR	E_IOEXTEND_BASE+7		// 6947	����ָʾ�ƴ�

/**
 * @anchor ref_page_6948 6948
 * @anchor ref_type_6948 ������
 * @anchor ref_dsc_6948<br> ȡָʾ��״̬��
 * @anchor ref_process_6948<br> ��
 */
#define E_IOEXTEND_LIGHT_GETSTATUSERROR	E_IOEXTEND_BASE+8		// 6948	ȡָʾ��״̬��

/**
 * @anchor ref_page_6949 6949
 * @anchor ref_type_6949 ������
 * @anchor ref_dsc_6949<br> �Ʋ�����ʱ
 * @anchor ref_process_6949<br> ͨ�Ż�Ӳ�����ϣ����ͨѶ���»�Ӳ���豸�Ƿ�����
 */
#define E_IOEXTEND_LIGHT_TIMEOUT		E_IOEXTEND_BASE+9		// 6949	�Ʋ�����ʱ

/**
 * @anchor ref_page_6950 6950
 * @anchor ref_type_6950 ������
 * @anchor ref_dsc_6950<br> ��������
 * @anchor ref_process_6950<br> ��
 */
#define E_IOEXTEND_OTHER				E_IOEXTEND_BASE+10		// 6950 ��������

/**
 * @anchor ref_page_6951 6951
 * @anchor ref_type_6951 ������
 * @anchor ref_dsc_6951<br> ����IO�źŰ嶯̬��ʧ��
 * @anchor ref_process_6951<br> ����Ƿ�ȱ��IO�źŰ��
 */
#define E_IOEXTEND_LOAD_LIBRARY_FAIL	E_IOEXTEND_BASE+11		// 6951 ����IO�źŰ嶯̬��ʧ��

/**
 * @anchor ref_page_6952 6952
 * @anchor ref_type_6952 ������
 * @anchor ref_dsc_6952<br> IO��ʼ��ʧ��
 * @anchor ref_process_6952<br> ͨ�Ż�Ӳ�����ϣ����ͨѶ���»�Ӳ���豸�Ƿ�����
 */
#define E_IOEXTEND_INIT_FAIL			E_IOEXTEND_BASE+12		// 6952 IO��ʼ��ʧ��

/**
 * @anchor ref_page_6953 6953
 * @anchor ref_type_6953 ������
 * @anchor ref_dsc_6953<br> IO��չ��δ����bootloaderģʽ
 * @anchor ref_process_6953<br> �Ƚ���bootloaderģʽ
 */
#define E_IOEXTEND_NOT_IN_BOOTMODE		E_IOEXTEND_BASE+13		// 6953 IO��չ��δ����bootloaderģʽ

/**
 * @anchor ref_page_6954 6954
 * @anchor ref_type_6954 ������
 * @anchor ref_dsc_6954<br> ����ʧ��
 * @anchor ref_process_6954<br> ͨ�Ż�Ӳ�����ϣ����ͨѶ���»�Ӳ���豸�Ƿ�����
 */
#define E_IOEXTEND_FIRM_DOWN			E_IOEXTEND_BASE+14		// 6954 ����ʧ��

/**
 * @anchor ref_page_6956 6956
 * @anchor ref_type_6956 ������
 * @anchor ref_dsc_6956<br> �̼����ݷ���ʧ��
 * @anchor ref_process_6956<br> ���ԣ���ʧ�ܼ��Ӳ��
 */
#define E_IOEXTEND_UPDATE_SENDFAIL      E_IOEXTEND_BASE+16      // 6956 ���ݷ���ʧ��

/**
 * @anchor ref_page_6957 6957
 * @anchor ref_type_6957 ������
 * @anchor ref_dsc_6957<br> �ļ���ʧ��
 * @anchor ref_process_6957<br> ���̼��ļ�
 */
#define E_IOEXTEND_UPDATE_FILEOPENFAIL  E_IOEXTEND_BASE+17      // 6957 �ļ���ʧ��

/**
 * @anchor ref_page_6958 6958
 * @anchor ref_type_6958 ������
 * @anchor ref_dsc_6958<br> �ļ����ȴ���
 * @anchor ref_process_6958<br> ���̼��ļ�
 */
#define E_IOEXTEND_UPDATE_FILELENGTH    E_IOEXTEND_BASE+18      // 6958 �ļ����ȴ���

/**
 * @anchor ref_page_6959 6959
 * @anchor ref_type_6959 ������
 * @anchor ref_dsc_6959<br> �ļ����ݴ���
 * @anchor ref_process_6959<br> ���̼��ļ�
 */
#define E_IOEXTEND_UPDATE_FILECONTENT   E_IOEXTEND_BASE+19      // 6959 �ļ����ݴ���

/**
 * @anchor ref_page_6960 6960
 * @anchor ref_type_6960 ������
 * @anchor ref_dsc_6960<br> ��������
 * @anchor ref_process_6960<br> ��
 */
#define E_IOEXTEND_UPDATE_OTHERERROR    E_IOEXTEND_BASE+20      // 6960 ��������

/**
 * @anchor ref_page_6961 6961
 * @anchor ref_type_6961 ������
 * @anchor ref_dsc_6961<br> ��дFlash����
 * @anchor ref_process_6961<br> ��
 */
#define E_IOEXTEND_UPDATE_FLASHERROR    E_IOEXTEND_BASE+21      // 6961 ��дFlash����

/**
 * @anchor ref_page_6962 6962
 * @anchor ref_type_6962 ������
 * @anchor ref_dsc_6962<br> �汾��ƥ��
 * @anchor ref_process_6962<br> ��
 */
#define E_IOEXTEND_UPDATE_VERNOMATCH    E_IOEXTEND_BASE+22      // 6962 �汾��ƥ��

/**
 * @anchor ref_page_6963 6963
 * @anchor ref_type_6963 ������
 * @anchor ref_dsc_6963<br> ���ݽ���Ӧ�����
 * @anchor ref_process_6963<br> ��
 */
#define E_IOEXTEND_UPDATE_RESPONSE      E_IOEXTEND_BASE+23      // 6963 ���ݽ���Ӧ�����

/**
 * @anchor ref_page_6964 6964
 * @anchor ref_type_6964 ������
 * @anchor ref_dsc_6964<br> ���ݽ���Ӧ��ʧ��
 * @anchor ref_process_6964<br> ��
 */
#define E_IOEXTEND_UPDATE_NORESPONSE    E_IOEXTEND_BASE+24      // 6964 ���ݽ���Ӧ��ʧ��

/**
 * @anchor ref_page_6965 6965
 * @anchor ref_type_6965 ������
 * @anchor ref_dsc_6965<br> ���յ���������
 * @anchor ref_process_6965<br> ��
 */
#define E_IOEXTEND_UPDATE_RECVDATA_ERR  E_IOEXTEND_BASE+25      // 6965 ���յ���������

/**
 * @anchor ref_page_6966 6966
 * @anchor ref_type_6966 ������
 * @anchor ref_dsc_6966<br> ��������
 * @anchor ref_process_6966<br> �˹������ε�����İ��ӣ�ȷ��ֻ��PIDΪ1009�İ������ߡ�
 */
#define E_IOEXTEND_UPDATE_MORETHAN_1BOARD_ONLINE  E_IOEXTEND_BASE+26      // 6966 ��������

/**
 * @anchor ref_page_6967 6967
 * @anchor ref_type_6967 ������
 * @anchor ref_dsc_6967<br> �̼��ļ���ƥ��
 * @anchor ref_process_6967<br> ���̼��ļ��汾
 */
#define E_IOEXTEND_UPDATE_FIREWARE_FILE_NOT_MATCH  E_IOEXTEND_BASE+27     // 6967 �̼��ļ���ƥ��

/**
 * @anchor ref_page_6999 6999
 * @anchor ref_type_6999 ������
 * @anchor ref_dsc_6999<br> IO��չ�������ʱ
 * @anchor ref_process_6999<br> ͨ�Ż�Ӳ�����ϣ����ͨѶ���»�Ӳ���豸�Ƿ�����
 */
#define E_IOEXTEND_TIMEOUT				E_IOEXTEND_BASE+59		// 6999	IO��չ�������ʱ

#endif