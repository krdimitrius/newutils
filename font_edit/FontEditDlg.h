// FontEditDlg.h : header file
//

#if !defined(AFX_FONTEDITDLG_H__4ACB1120_9D69_11DA_B47F_0020ED6CA269__INCLUDED_)
#define AFX_FONTEDITDLG_H__4ACB1120_9D69_11DA_B47F_0020ED6CA269__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CFontEditDlg dialog

class CFontEditDlg : public CDialog
{
// Construction
public:
	CFontEditDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CFontEditDlg)
	enum { IDD = IDD_FONTEDIT_DIALOG };
	CComboBox	m_Heigh;
	CComboBox	m_Wide;
	BOOL	m_X0Y0;
	BOOL	m_X0Y1;
	BOOL	m_X0Y11;
	BOOL	m_X0Y10;
	BOOL	m_X0Y12;
	BOOL	m_X0Y13;
	BOOL	m_X0Y14;
	BOOL	m_X0Y15;
	BOOL	m_X0Y2;
	BOOL	m_X0Y3;
	BOOL	m_X0Y4;
	BOOL	m_X0Y5;
	BOOL	m_X0Y6;
	BOOL	m_X0Y7;
	BOOL	m_X0Y8;
	BOOL	m_X0Y9;
	BOOL	m_X1Y0;
	BOOL	m_X1Y1;
	BOOL	m_X1Y10;
	BOOL	m_X1Y11;
	BOOL	m_X1Y12;
	BOOL	m_X1Y13;
	BOOL	m_X1Y14;
	BOOL	m_X1Y15;
	BOOL	m_X1Y2;
	BOOL	m_X1Y3;
	BOOL	m_X1Y4;
	BOOL	m_X1Y5;
	BOOL	m_X1Y6;
	BOOL	m_X1Y7;
	BOOL	m_X1Y8;
	BOOL	m_X1Y9;
	BOOL	m_X2Y0;
	BOOL	m_X2Y1;
	BOOL	m_X2Y10;
	BOOL	m_X2Y11;
	BOOL	m_X2Y12;
	BOOL	m_X2Y13;
	BOOL	m_X2Y14;
	BOOL	m_X2Y15;
	BOOL	m_X2Y2;
	BOOL	m_X2Y3;
	BOOL	m_X2Y4;
	BOOL	m_X2Y5;
	BOOL	m_X2Y6;
	BOOL	m_X2Y7;
	BOOL	m_X2Y8;
	BOOL	m_X2Y9;
	BOOL	m_X3Y0;
	BOOL	m_X3Y1;
	BOOL	m_X3Y10;
	BOOL	m_X3Y11;
	BOOL	m_X3Y12;
	BOOL	m_X3Y13;
	BOOL	m_X3Y14;
	BOOL	m_X3Y15;
	BOOL	m_X3Y2;
	BOOL	m_X3Y3;
	BOOL	m_X3Y4;
	BOOL	m_X3Y5;
	BOOL	m_X3Y6;
	BOOL	m_X3Y7;
	BOOL	m_X3Y8;
	BOOL	m_X3Y9;
	BOOL	m_X4Y0;
	BOOL	m_X4Y1;
	BOOL	m_X4Y10;
	BOOL	m_X4Y11;
	BOOL	m_X4Y12;
	BOOL	m_X4Y13;
	BOOL	m_X4Y14;
	BOOL	m_X4Y15;
	BOOL	m_X4Y2;
	BOOL	m_X4Y3;
	BOOL	m_X4Y4;
	BOOL	m_X4Y5;
	BOOL	m_X4Y6;
	BOOL	m_X4Y7;
	BOOL	m_X4Y8;
	BOOL	m_X4Y9;
	BOOL	m_X5Y0;
	BOOL	m_X5Y1;
	BOOL	m_X5Y10;
	BOOL	m_X5Y11;
	BOOL	m_X5Y12;
	BOOL	m_X5Y13;
	BOOL	m_X5Y14;
	BOOL	m_X5Y15;
	BOOL	m_X5Y2;
	BOOL	m_X5Y3;
	BOOL	m_X5Y4;
	BOOL	m_X5Y5;
	BOOL	m_X5Y6;
	BOOL	m_X5Y7;
	BOOL	m_X5Y8;
	BOOL	m_X5Y9;
	BOOL	m_X6Y0;
	BOOL	m_X6Y1;
	BOOL	m_X6Y10;
	BOOL	m_X6Y11;
	BOOL	m_X6Y12;
	BOOL	m_X6Y13;
	BOOL	m_X6Y14;
	BOOL	m_X6Y15;
	BOOL	m_X6Y2;
	BOOL	m_X6Y3;
	BOOL	m_X6Y4;
	BOOL	m_X6Y5;
	BOOL	m_X6Y6;
	BOOL	m_X6Y7;
	BOOL	m_X6Y8;
	BOOL	m_X7Y0;
	BOOL	m_X6Y9;
	BOOL	m_X7Y1;
	BOOL	m_X7Y10;
	BOOL	m_X7Y11;
	BOOL	m_X7Y12;
	BOOL	m_X7Y13;
	BOOL	m_X7Y14;
	BOOL	m_X7Y15;
	BOOL	m_X7Y2;
	BOOL	m_X7Y3;
	BOOL	m_X7Y4;
	BOOL	m_X7Y5;
	BOOL	m_X7Y6;
	BOOL	m_X7Y7;
	BOOL	m_X7Y8;
	BOOL	m_X7Y9;
	CString	m_Symbol;
	CString	m_Out;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFontEditDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CFontEditDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButtonMakeCode();
	afx_msg void OnButtonClear();
	afx_msg void OnButtonReadCode();
	afx_msg void OnButtonUp();
	afx_msg void OnButtonDown();
	afx_msg void OnButtonLeft();
	afx_msg void OnButtonRight();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FONTEDITDLG_H__4ACB1120_9D69_11DA_B47F_0020ED6CA269__INCLUDED_)
