// wallppr.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "wallppr.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CWallpprApp

BEGIN_MESSAGE_MAP(CWallpprApp, CWinApp)
	//{{AFX_MSG_MAP(CWallpprApp)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CWallpprApp construction

CWallpprApp::CWallpprApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CWallpprApp object

CWallpprApp theApp;

/////////////////////////////////////////////////////////////////////////////
// CWallpprApp initialization

BOOL CWallpprApp::InitInstance()
{
	// Standard initialization
	// If you are not using these features and wish to reduce the size
	//  of your final executable, you should remove from the following
	//  the specific initialization routines you do not need.

	char *wallppr;
	wallppr = "C:\\sci.bmp";
	SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, wallppr,
		SPIF_UPDATEINIFILE|SPIF_SENDWININICHANGE);

	// Since the dialog has been closed, return FALSE so that we exit the
	//  application, rather than start the application's message pump.
	return FALSE;
}
