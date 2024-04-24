using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace IOEXTENDGRG.Models
{
    public static class Error
    {
        public enum ErrorCode
        {
            // Códigos de éxito (S_IOEXTEND_*)
            Success = 0,
            Normal = 6901,

            // Códigos de advertencia (W_IOEXTEND_*)
            InvalidParameter = 6921,

            // Códigos de error (E_IOEXTEND_*)
            CommError = 6941,
            InvalidCommand = 6942,
            DoorCommandError = 6943,
            DoorGetStatusError = 6944,
            DoorTimeout = 6945,
            LightCommandError = 6946,
            LightSetStatusError = 6947,
            LightGetStatusError = 6948,
            LightTimeout = 6949,
            OtherError = 6950,
            LoadLibraryFail = 6951,
            InitFail = 6952,
            NotInBootMode = 6953,
            FirmwareDownloadError = 6954,
            UpdateSendFail = 6956,
            UpdateFileOpenFail = 6957,
            UpdateFileLengthError = 6958,
            UpdateFileContentError = 6959,
            UpdateOtherError = 6960,
            UpdateFlashError = 6961,
            UpdateVerNoMatch = 6962,
            UpdateResponseError = 6963,
            UpdateNoResponse = 6964,
            UpdateRecvDataError = 6965,
            UpdateMoreThan1BoardOnline = 6966,
            UpdateFirewareFileNotMatch = 6967,
            Timeout = 6999
        }

        public enum IOErrorCode
        {
            S_IOEXTEND_BASE = 6900,
            W_IOEXTEND_BASE = 6920,
            E_IOEXTEND_BASE = 6940,
            S_IOEXTEND_NORMAL = 6901,
            W_IOEXTEND_INVALIDPARAM = 6921,
            E_IOEXTEND_COMMERR = 6941,
            E_IOEXTEND_INVAILDCOMMAND = 6942,
            E_IOEXTEND_DOOR_COMMANDERROR = 6943,
            E_IOEXTEND_DOOR_GETSTATUSERROR = 6944,
            E_IOEXTEND_DOOR_TIMEOUT = 6945,
            E_IOEXTEND_LIGHT_COMMANDERROR = 6946,
            E_IOEXTEND_LIGHT_SETSTATUSERROR = 6947,
            E_IOEXTEND_LIGHT_GETSTATUSERROR = 6948,
            E_IOEXTEND_LIGHT_TIMEOUT = 6949,
            E_IOEXTEND_OTHER = 6950,
            E_IOEXTEND_LOAD_LIBRARY_FAIL = 6951,
            E_IOEXTEND_INIT_FAIL = 6952,
            E_IOEXTEND_NOT_IN_BOOTMODE = 6953,
            E_IOEXTEND_FIRM_DOWN = 6954,
            E_IOEXTEND_UPDATE_SENDFAIL = 6956,
            E_IOEXTEND_UPDATE_FILEOPENFAIL = 6957,
            E_IOEXTEND_UPDATE_FILELENGTH = 6958,
            E_IOEXTEND_UPDATE_FILECONTENT = 6959,
            E_IOEXTEND_UPDATE_OTHERERROR = 6960,
            E_IOEXTEND_UPDATE_FLASHERROR = 6961,
            E_IOEXTEND_UPDATE_VERNOMATCH = 6962,
            E_IOEXTEND_UPDATE_RESPONSE = 6963,
            E_IOEXTEND_UPDATE_NORESPONSE = 6964,
            E_IOEXTEND_UPDATE_RECVDATA_ERR = 6965,
            E_IOEXTEND_UPDATE_MORETHAN_1BOARD_ONLINE = 6966,
            E_IOEXTEND_UPDATE_FIREWARE_FILE_NOT_MATCH = 6967,
            E_IOEXTEND_TIMEOUT = 6999
        }


        public static errorData GetErrorDescription(int error)
        {
            ErrorCode errorCode = (ErrorCode)error;
            switch (errorCode)
            {
                case ErrorCode.Success:
                case ErrorCode.Normal:
                    return new errorData { Code = errorCode.ToString(), Description = "Operación exitosa" };
                case ErrorCode.InvalidParameter:
                    return new errorData { Code = errorCode.ToString(), Description = "Parámetro inválido" };
                case ErrorCode.CommError:
                    return new errorData { Code = errorCode.ToString(), Description = "Error de comunicación" };
                case ErrorCode.InvalidCommand:
                    return new errorData { Code = errorCode.ToString(), Description = "Comando inválido" };
                case ErrorCode.DoorCommandError:
                    return new errorData { Code = errorCode.ToString(), Description = "Error al enviar el comando de puerta" };
                case ErrorCode.DoorGetStatusError:
                    return new errorData { Code = errorCode.ToString(), Description = "Error al obtener el estado de la puerta" };
                case ErrorCode.DoorTimeout:
                    return new errorData { Code = errorCode.ToString(), Description = "Tiempo de espera agotado para la operación de puerta" };
                case ErrorCode.LightCommandError:
                    return new errorData { Code = errorCode.ToString(), Description = "Error al enviar el comando de luz" };
                case ErrorCode.LightSetStatusError:
                    return new errorData { Code = errorCode.ToString(), Description = "Error al establecer el estado de la luz" };
                case ErrorCode.LightGetStatusError:
                    return new errorData { Code = errorCode.ToString(), Description = "Error al obtener el estado de la luz" };
                case ErrorCode.LightTimeout:
                    return new errorData { Code = errorCode.ToString(), Description = "Tiempo de espera agotado para la operación de luz" };
                case ErrorCode.OtherError:
                    return new errorData { Code = errorCode.ToString(), Description = "Error desconocido" };
                case ErrorCode.LoadLibraryFail:
                    return new errorData { Code = errorCode.ToString(), Description = "Error al cargar la biblioteca DLL" };
                case ErrorCode.InitFail:
                    return new errorData { Code = errorCode.ToString(), Description = "Error al inicializar el dispositivo" };
                case ErrorCode.NotInBootMode:
                    return new errorData { Code = errorCode.ToString(), Description = "El dispositivo no está en modo de arranque" };
                case ErrorCode.FirmwareDownloadError:
                    return new errorData { Code = errorCode.ToString(), Description = "Error al descargar el firmware" };
                case ErrorCode.UpdateSendFail:
                    return new errorData { Code = errorCode.ToString(), Description = "Error al enviar datos durante la actualización" };
                case ErrorCode.UpdateFileOpenFail:
                    return new errorData { Code = errorCode.ToString(), Description = "Error al abrir el archivo de firmware" };
                case ErrorCode.UpdateFileLengthError:
                    return new errorData { Code = errorCode.ToString(), Description = "Error en la longitud del archivo de firmware" };
                case ErrorCode.UpdateFileContentError:
                    return new errorData { Code = errorCode.ToString(), Description = "Error en el contenido del archivo de firmware" };
                case ErrorCode.UpdateOtherError:
                    return new errorData { Code = errorCode.ToString(), Description = "Error desconocido durante la actualización" };
                case ErrorCode.UpdateFlashError:
                    return new errorData { Code = errorCode.ToString(), Description = "Error al flashear el firmware" };
                case ErrorCode.UpdateVerNoMatch:
                    return new errorData { Code = errorCode.ToString(), Description = "Versión de firmware no compatible" };
                case ErrorCode.UpdateResponseError:
                    return new errorData { Code = errorCode.ToString(), Description = "Error en la respuesta durante la actualización" };
                case ErrorCode.UpdateNoResponse:
                    return new errorData { Code = errorCode.ToString(), Description = "No se recibió respuesta durante la actualización" };
                case ErrorCode.UpdateRecvDataError:
                    return new errorData { Code = errorCode.ToString(), Description = "Error al recibir datos durante la actualización" };
                case ErrorCode.UpdateMoreThan1BoardOnline:
                    return new errorData { Code = errorCode.ToString(), Description = "Más de una placa conectada durante la actualización" };
                case ErrorCode.UpdateFirewareFileNotMatch:
                    return new errorData { Code = errorCode.ToString(), Description = "El archivo de firmware no coincide con el dispositivo" };
                case ErrorCode.Timeout:
                    return new errorData { Code = errorCode.ToString(), Description = "Tiempo de espera agotado para la operación" };
                default:
                    return new errorData { Code = errorCode.ToString(), Description = $"Error desconocido ({error})" };
            }
        }
    }

    public class errorData
    {
        public int Result { get; set; }
        public string Code { get; set; }
        public string Description { get; set; }
        public tDevReturn Status { get; set; }
    }
}
