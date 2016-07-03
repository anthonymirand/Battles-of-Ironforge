#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.IPEndPoint
struct IPEndPoint_t3_442;
// System.Net.Sockets.Socket
struct Socket_t3_483;
// System.Collections.Hashtable
struct Hashtable_t1_173;
// System.Collections.ArrayList
struct ArrayList_t1_114;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t3_6;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1_575;

#include "mscorlib_System_Object.h"

// System.Net.EndPointListener
struct  EndPointListener_t3_553  : public Object_t
{
	// System.Net.IPEndPoint System.Net.EndPointListener::endpoint
	IPEndPoint_t3_442 * ___endpoint_0;
	// System.Net.Sockets.Socket System.Net.EndPointListener::sock
	Socket_t3_483 * ___sock_1;
	// System.Collections.Hashtable System.Net.EndPointListener::prefixes
	Hashtable_t1_173 * ___prefixes_2;
	// System.Collections.ArrayList System.Net.EndPointListener::unhandled
	ArrayList_t1_114 * ___unhandled_3;
	// System.Collections.ArrayList System.Net.EndPointListener::all
	ArrayList_t1_114 * ___all_4;
	// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Net.EndPointListener::cert
	X509Certificate2_t3_6 * ___cert_5;
	// System.Security.Cryptography.AsymmetricAlgorithm System.Net.EndPointListener::key
	AsymmetricAlgorithm_t1_575 * ___key_6;
	// System.Boolean System.Net.EndPointListener::secure
	bool ___secure_7;
};
