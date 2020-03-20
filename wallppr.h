// wallppr.h : main header file for the WALLPPR application
//

#if !defined(AFX_WALLPPR_H__4ADF6EF8_E41C_4AF8_A990_2AADAF075BE2__INCLUDED_)
#define AFX_WALLPPR_H__4ADF6EF8_E41C_4AF8_A990_2AADAF075BE2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CWallpprApp:
// See wallppr.cpp for the implementation of this class
//

class CWallpprApp : public CWinApp
{
public:
	CWallpprApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWallpprApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CWallpprApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WALLPPR_H__4ADF6EF8_E41C_4AF8_A990_2AADAF075BE2__INCLUDED_)
