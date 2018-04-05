/*
	belle-sip - SIP (RFC3261) library.
    Copyright (C) 2010  Belledonne Communications SARL

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef BELLE_SIP_H
#define BELLE_SIP_H

#include "types.h"
#include "utils.h"
#include "list.h"
#include "listener.h"
#include "mainloop.h"
#include "sip-uri.h"
#include "headers.h"
#include "parameters.h"
#include "message.h"
#include "refresher.h"
#include "transaction.h"
#include "dialog.h"
#include "sipstack.h"
#include "resolver.h"
#include "listeningpoint.h"
#include "provider.h"
#include "auth-helper.h"
#include "generic-uri.h"
#include "http-listener.h"
#include "http-provider.h"
#include "http-listener.h"
#include "http-message.h"
#include "belle-sdp.h"
#include "bodyhandler.h"

#ifdef ANDROID
#include "belle-sip/wakelock.h"
#endif


#define BELLE_SIP_POINTER_TO_INT(p)	((int)(long)(p))
#define BELLE_SIP_INT_TO_POINTER(i)	((void*)(long)(i))

#endif

