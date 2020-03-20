// wallpprDlg.h : header file
//

#if !defined(AFX_WALLPPRDLG_H__D7C718DC_873B_419C_AC94_6037477D0E50__INCLUDED_)
#define AFX_WALLPPRDLG_H__D7C718DC_873B_419C_AC94_6037477D0E50__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CWallpprDlg dialog

class CWallpprDlg : public CDialog
{
// Construction
public:
	CWallpprDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CWallpprDlg)
	enum { IDD = IDD_WALLPPR_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWallpprDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CWallpprDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WALLPPRDLG_H__D7C718DC_873B_419C_AC94_6037477D0E50__INCLUDED_)
