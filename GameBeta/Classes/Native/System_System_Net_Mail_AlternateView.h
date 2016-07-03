#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Uri
struct Uri_t3_3;
// System.Net.Mail.LinkedResourceCollection
struct LinkedResourceCollection_t3_300;

#include "System_System_Net_Mail_AttachmentBase.h"

// System.Net.Mail.AlternateView
struct  AlternateView_t3_298  : public AttachmentBase_t3_299
{
	// System.Uri System.Net.Mail.AlternateView::baseUri
	Uri_t3_3 * ___baseUri_4;
	// System.Net.Mail.LinkedResourceCollection System.Net.Mail.AlternateView::linkedResources
	LinkedResourceCollection_t3_300 * ___linkedResources_5;
};
