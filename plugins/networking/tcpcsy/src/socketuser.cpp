// socketuser.cpp
// 
// Copyright (c) 2008 - 2010 Accenture. All rights reserved.
// This component and the accompanying materials are made available
// under the terms of the "Eclipse Public License v1.0"
// which accompanies this distribution, and is available
// at the URL "http://www.eclipse.org/legal/epl-v10.html".
// 
// Initial Contributors:
// Accenture - Initial contribution
//

#include "socketuser.h"

void CSocketUser::SocketConnected()
	{
	iConnected = ETrue;
	HandleSocketConnected();
	}

CSocketUser::CSocketUser(RSocket& aSocket)
	: CActive(CActive::EPriorityStandard), iSocket(aSocket)
	{
	}

CSocketUser::~CSocketUser()
	{
	}

TBool CSocketUser::Connected() const
	{
	return iConnected;
	}

