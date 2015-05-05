// CoAppDLL.h : main header file for the CoAppDLL DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols

#ifdef BUILD_COAPPDLL
#define COAPPDLL  _declspec(dllexport)
#else
#define COAPPDLL  _declspec(dllimport)
#endif

COAPPDLL void Print();

// CCoAppDLLApp
// See CoAppDLL.cpp for the implementation of this class
//

class CCoAppDLLApp : public CWinApp
{
public:
	CCoAppDLLApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
