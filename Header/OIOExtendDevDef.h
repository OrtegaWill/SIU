/**
 * @file OIOExtendDevDef.h
 * @brief OIOExtendDev扩展板状态码说明
 */
#ifndef	_OIOEXTENDDEVDEF_H_
#define	_OIOEXTENDDEVDEF_H_




/**
 * @anchor ref_page_6900 6900
 * @anchor ref_type_6900 状态基址
 * @anchor ref_dsc_6900<br> IO扩展板 状态码基址
 * @anchor ref_process_6900<br> 无
 */
#define S_IOEXTEND_BASE					6900			// 6900 -- 6910	状态码

/**
 * @anchor ref_page_6920 6920
 * @anchor ref_type_6920 警告基址
 * @anchor ref_dsc_6920<br> IO扩展板 警告码基址
 * @anchor ref_process_6920<br> 无
 */
#define W_IOEXTEND_BASE					6920			// 6920 -- 6930	警告码	

/**
 * @anchor ref_page_6940 6940
 * @anchor ref_type_6940 错误基址
 * @anchor ref_dsc_6940<br> IO扩展板 错误码基址
 * @anchor ref_process_6940<br> 无
 */
#define E_IOEXTEND_BASE					6940			// 6940 -- 6999	严重错误码


/**
 * @anchor ref_page_6901 6901
 * @anchor ref_type_6901 状态码
 * @anchor ref_dsc_6901<br> 正常返回
 * @anchor ref_process_6901<br> 无
 */
#define S_IOEXTEND_NORMAL		        S_IOEXTEND_BASE+1		// 6901	IO扩展板模块正常，正常码

/**
 * @anchor ref_page_6921 6921
 * @anchor ref_type_6921 警告码
 * @anchor ref_dsc_6921<br> 传入的参数是无效的
 * @anchor ref_process_6921<br> 检查参数
 */
#define W_IOEXTEND_INVALIDPARAM	        W_IOEXTEND_BASE+1		// 6921 传入的参数是无效的

/**
 * @anchor ref_page_6941 6941
 * @anchor ref_type_6941 错误码
 * @anchor ref_dsc_6941<br> 初始化COM组件错误
 * @anchor ref_process_6941<br> 检查配置文件
 */
#define E_IOEXTEND_COMMERR				E_IOEXTEND_BASE+1		// 6941	初始化COM组件错误

/**
 * @anchor ref_page_6942 6942
 * @anchor ref_type_6942 错误码
 * @anchor ref_dsc_6942<br> 无效的命令
 * @anchor ref_process_6942<br> 重发
 */
#define E_IOEXTEND_INVAILDCOMMAND		E_IOEXTEND_BASE+2		// 6942	无效的命令

/**
 * @anchor ref_page_6943 6941
 * @anchor ref_type_6943 错误码
 * @anchor ref_dsc_6943<br> 读门状态命令错
 * @anchor ref_process_6943<br> 无
 */
#define E_IOEXTEND_DOOR_COMMANDERROR	E_IOEXTEND_BASE+3		// 6943	读门状态命令错

/**
 * @anchor ref_page_6944 6944
 * @anchor ref_type_6944 错误码
 * @anchor ref_dsc_6944<br> 取门状态错
 * @anchor ref_process_6944<br> 无
 */
#define E_IOEXTEND_DOOR_GETSTATUSERROR	E_IOEXTEND_BASE+4		// 6944	取门状态错

/**
 * @anchor ref_page_6945 6945
 * @anchor ref_type_6945 错误码
 * @anchor ref_dsc_6945<br> 门操作超时
 * @anchor ref_process_6945<br> 无
 */
#define E_IOEXTEND_DOOR_TIMEOUT			E_IOEXTEND_BASE+5		// 6945	门操作超时

/**
 * @anchor ref_page_6946 6946
 * @anchor ref_type_6946 错误码
 * @anchor ref_dsc_6946<br> 指示灯状态命令错
 * @anchor ref_process_6946<br> 无
 */
#define E_IOEXTEND_LIGHT_COMMANDERROR	E_IOEXTEND_BASE+6		// 6946	指示灯状态命令错

/**
 * @anchor ref_page_6947 6947
 * @anchor ref_type_6947 错误码
 * @anchor ref_dsc_6947<br> 设置指示灯错
 * @anchor ref_process_6947<br> 无
 */
#define E_IOEXTEND_LIGHT_SETSTATUSERROR	E_IOEXTEND_BASE+7		// 6947	设置指示灯错

/**
 * @anchor ref_page_6948 6948
 * @anchor ref_type_6948 错误码
 * @anchor ref_dsc_6948<br> 取指示灯状态错
 * @anchor ref_process_6948<br> 无
 */
#define E_IOEXTEND_LIGHT_GETSTATUSERROR	E_IOEXTEND_BASE+8		// 6948	取指示灯状态错

/**
 * @anchor ref_page_6949 6949
 * @anchor ref_type_6949 错误码
 * @anchor ref_dsc_6949<br> 灯操作超时
 * @anchor ref_process_6949<br> 通信或硬件故障，检查通讯线缆或硬件设备是否正常
 */
#define E_IOEXTEND_LIGHT_TIMEOUT		E_IOEXTEND_BASE+9		// 6949	灯操作超时

/**
 * @anchor ref_page_6950 6950
 * @anchor ref_type_6950 错误码
 * @anchor ref_dsc_6950<br> 其它错误
 * @anchor ref_process_6950<br> 无
 */
#define E_IOEXTEND_OTHER				E_IOEXTEND_BASE+10		// 6950 其它错误

/**
 * @anchor ref_page_6951 6951
 * @anchor ref_type_6951 错误码
 * @anchor ref_dsc_6951<br> 加载IO信号板动态库失败
 * @anchor ref_process_6951<br> 检查是否缺少IO信号板库
 */
#define E_IOEXTEND_LOAD_LIBRARY_FAIL	E_IOEXTEND_BASE+11		// 6951 加载IO信号板动态库失败

/**
 * @anchor ref_page_6952 6952
 * @anchor ref_type_6952 错误码
 * @anchor ref_dsc_6952<br> IO初始化失败
 * @anchor ref_process_6952<br> 通信或硬件故障，检查通讯线缆或硬件设备是否正常
 */
#define E_IOEXTEND_INIT_FAIL			E_IOEXTEND_BASE+12		// 6952 IO初始化失败

/**
 * @anchor ref_page_6953 6953
 * @anchor ref_type_6953 错误码
 * @anchor ref_dsc_6953<br> IO扩展板未进入bootloader模式
 * @anchor ref_process_6953<br> 先进入bootloader模式
 */
#define E_IOEXTEND_NOT_IN_BOOTMODE		E_IOEXTEND_BASE+13		// 6953 IO扩展板未进入bootloader模式

/**
 * @anchor ref_page_6954 6954
 * @anchor ref_type_6954 错误码
 * @anchor ref_dsc_6954<br> 下载失败
 * @anchor ref_process_6954<br> 通信或硬件故障，检查通讯线缆或硬件设备是否正常
 */
#define E_IOEXTEND_FIRM_DOWN			E_IOEXTEND_BASE+14		// 6954 下载失败

/**
 * @anchor ref_page_6956 6956
 * @anchor ref_type_6956 错误码
 * @anchor ref_dsc_6956<br> 固件数据发送失败
 * @anchor ref_process_6956<br> 重试，再失败检查硬件
 */
#define E_IOEXTEND_UPDATE_SENDFAIL      E_IOEXTEND_BASE+16      // 6956 数据发送失败

/**
 * @anchor ref_page_6957 6957
 * @anchor ref_type_6957 错误码
 * @anchor ref_dsc_6957<br> 文件打开失败
 * @anchor ref_process_6957<br> 检测固件文件
 */
#define E_IOEXTEND_UPDATE_FILEOPENFAIL  E_IOEXTEND_BASE+17      // 6957 文件打开失败

/**
 * @anchor ref_page_6958 6958
 * @anchor ref_type_6958 错误码
 * @anchor ref_dsc_6958<br> 文件长度错误
 * @anchor ref_process_6958<br> 检查固件文件
 */
#define E_IOEXTEND_UPDATE_FILELENGTH    E_IOEXTEND_BASE+18      // 6958 文件长度错误

/**
 * @anchor ref_page_6959 6959
 * @anchor ref_type_6959 错误码
 * @anchor ref_dsc_6959<br> 文件内容错误
 * @anchor ref_process_6959<br> 检查固件文件
 */
#define E_IOEXTEND_UPDATE_FILECONTENT   E_IOEXTEND_BASE+19      // 6959 文件内容错误

/**
 * @anchor ref_page_6960 6960
 * @anchor ref_type_6960 错误码
 * @anchor ref_dsc_6960<br> 其他错误
 * @anchor ref_process_6960<br> 无
 */
#define E_IOEXTEND_UPDATE_OTHERERROR    E_IOEXTEND_BASE+20      // 6960 其他错误

/**
 * @anchor ref_page_6961 6961
 * @anchor ref_type_6961 错误码
 * @anchor ref_dsc_6961<br> 读写Flash错误
 * @anchor ref_process_6961<br> 无
 */
#define E_IOEXTEND_UPDATE_FLASHERROR    E_IOEXTEND_BASE+21      // 6961 读写Flash错误

/**
 * @anchor ref_page_6962 6962
 * @anchor ref_type_6962 错误码
 * @anchor ref_dsc_6962<br> 版本不匹配
 * @anchor ref_process_6962<br> 无
 */
#define E_IOEXTEND_UPDATE_VERNOMATCH    E_IOEXTEND_BASE+22      // 6962 版本不匹配

/**
 * @anchor ref_page_6963 6963
 * @anchor ref_type_6963 错误码
 * @anchor ref_dsc_6963<br> 数据接收应答错误
 * @anchor ref_process_6963<br> 无
 */
#define E_IOEXTEND_UPDATE_RESPONSE      E_IOEXTEND_BASE+23      // 6963 数据接收应答错误

/**
 * @anchor ref_page_6964 6964
 * @anchor ref_type_6964 错误码
 * @anchor ref_dsc_6964<br> 数据接收应答失败
 * @anchor ref_process_6964<br> 无
 */
#define E_IOEXTEND_UPDATE_NORESPONSE    E_IOEXTEND_BASE+24      // 6964 数据接收应答失败

/**
 * @anchor ref_page_6965 6965
 * @anchor ref_type_6965 错误码
 * @anchor ref_dsc_6965<br> 接收到错误数据
 * @anchor ref_process_6965<br> 无
 */
#define E_IOEXTEND_UPDATE_RECVDATA_ERR  E_IOEXTEND_BASE+25      // 6965 接收到错误数据

/**
 * @anchor ref_page_6966 6966
 * @anchor ref_type_6966 错误码
 * @anchor ref_dsc_6966<br> 多块板在线
 * @anchor ref_process_6966<br> 人工处理，拔掉额外的板子，确保只有PID为1009的板子在线。
 */
#define E_IOEXTEND_UPDATE_MORETHAN_1BOARD_ONLINE  E_IOEXTEND_BASE+26      // 6966 多块板在线

/**
 * @anchor ref_page_6967 6967
 * @anchor ref_type_6967 错误码
 * @anchor ref_dsc_6967<br> 固件文件不匹配
 * @anchor ref_process_6967<br> 检查固件文件版本
 */
#define E_IOEXTEND_UPDATE_FIREWARE_FILE_NOT_MATCH  E_IOEXTEND_BASE+27     // 6967 固件文件不匹配

/**
 * @anchor ref_page_6999 6999
 * @anchor ref_type_6999 错误码
 * @anchor ref_dsc_6999<br> IO扩展板操作超时
 * @anchor ref_process_6999<br> 通信或硬件故障，检查通讯线缆或硬件设备是否正常
 */
#define E_IOEXTEND_TIMEOUT				E_IOEXTEND_BASE+59		// 6999	IO扩展板操作超时

#endif