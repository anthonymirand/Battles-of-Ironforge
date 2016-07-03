#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Net.Mail.SmtpException
struct SmtpException_t3_325;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.Exception
struct Exception_t1_33;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Mail_SmtpStatusCode.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.Mail.SmtpException::.ctor()
extern "C" void SmtpException__ctor_m3_2443 (SmtpException_t3_325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpException::.ctor(System.Net.Mail.SmtpStatusCode)
extern "C" void SmtpException__ctor_m3_2444 (SmtpException_t3_325 * __this, int32_t ___statusCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpException::.ctor(System.String)
extern "C" void SmtpException__ctor_m3_2445 (SmtpException_t3_325 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SmtpException__ctor_m3_2446 (SmtpException_t3_325 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpException::.ctor(System.Net.Mail.SmtpStatusCode,System.String)
extern "C" void SmtpException__ctor_m3_2447 (SmtpException_t3_325 * __this, int32_t ___statusCode, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpException::.ctor(System.String,System.Exception)
extern "C" void SmtpException__ctor_m3_2448 (SmtpException_t3_325 * __this, String_t* ___message, Exception_t1_33 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SmtpException_System_Runtime_Serialization_ISerializable_GetObjectData_m3_2449 (SmtpException_t3_325 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.SmtpStatusCode System.Net.Mail.SmtpException::get_StatusCode()
extern "C" int32_t SmtpException_get_StatusCode_m3_2450 (SmtpException_t3_325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpException::set_StatusCode(System.Net.Mail.SmtpStatusCode)
extern "C" void SmtpException_set_StatusCode_m3_2451 (SmtpException_t3_325 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SmtpException_GetObjectData_m3_2452 (SmtpException_t3_325 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
