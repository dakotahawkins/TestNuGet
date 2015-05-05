// ApplicationDLL.h : main header file for the ApplicationDLL DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols

#ifdef BUILD_APPLICATIONDLL
#define APPLICATIONDLL  _declspec(dllexport)
#else
#define APPLICATIONDLL  _declspec(dllimport)
#endif

APPLICATIONDLL void ApplicationDLLPrint();

// CApplicationDLLApp
// See ApplicationDLL.cpp for the implementation of this class
//

class CApplicationDLLApp : public CWinApp
{
public:
	CApplicationDLLApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
