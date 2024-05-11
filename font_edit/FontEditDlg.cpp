// FontEditDlg.cpp : implementation file
//

#include "stdafx.h"
#include "FontEdit.h"
#include "FontEditDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CFontEditDlg dialog

CFontEditDlg::CFontEditDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CFontEditDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CFontEditDlg)
	m_X0Y0 = FALSE;
	m_X0Y1 = FALSE;
	m_X0Y11 = FALSE;
	m_X0Y10 = FALSE;
	m_X0Y12 = FALSE;
	m_X0Y13 = FALSE;
	m_X0Y14 = FALSE;
	m_X0Y15 = FALSE;
	m_X0Y2 = FALSE;
	m_X0Y3 = FALSE;
	m_X0Y4 = FALSE;
	m_X0Y5 = FALSE;
	m_X0Y6 = FALSE;
	m_X0Y7 = FALSE;
	m_X0Y8 = FALSE;
	m_X0Y9 = FALSE;
	m_X1Y0 = FALSE;
	m_X1Y1 = FALSE;
	m_X1Y10 = FALSE;
	m_X1Y11 = FALSE;
	m_X1Y12 = FALSE;
	m_X1Y13 = FALSE;
	m_X1Y14 = FALSE;
	m_X1Y15 = FALSE;
	m_X1Y2 = FALSE;
	m_X1Y3 = FALSE;
	m_X1Y4 = FALSE;
	m_X1Y5 = FALSE;
	m_X1Y6 = FALSE;
	m_X1Y7 = FALSE;
	m_X1Y8 = FALSE;
	m_X1Y9 = FALSE;
	m_X2Y0 = FALSE;
	m_X2Y1 = FALSE;
	m_X2Y10 = FALSE;
	m_X2Y11 = FALSE;
	m_X2Y12 = FALSE;
	m_X2Y13 = FALSE;
	m_X2Y14 = FALSE;
	m_X2Y15 = FALSE;
	m_X2Y2 = FALSE;
	m_X2Y3 = FALSE;
	m_X2Y4 = FALSE;
	m_X2Y5 = FALSE;
	m_X2Y6 = FALSE;
	m_X2Y7 = FALSE;
	m_X2Y8 = FALSE;
	m_X2Y9 = FALSE;
	m_X3Y0 = FALSE;
	m_X3Y1 = FALSE;
	m_X3Y10 = FALSE;
	m_X3Y11 = FALSE;
	m_X3Y12 = FALSE;
	m_X3Y13 = FALSE;
	m_X3Y14 = FALSE;
	m_X3Y15 = FALSE;
	m_X3Y2 = FALSE;
	m_X3Y3 = FALSE;
	m_X3Y4 = FALSE;
	m_X3Y5 = FALSE;
	m_X3Y6 = FALSE;
	m_X3Y7 = FALSE;
	m_X3Y8 = FALSE;
	m_X3Y9 = FALSE;
	m_X4Y0 = FALSE;
	m_X4Y1 = FALSE;
	m_X4Y10 = FALSE;
	m_X4Y11 = FALSE;
	m_X4Y12 = FALSE;
	m_X4Y13 = FALSE;
	m_X4Y14 = FALSE;
	m_X4Y15 = FALSE;
	m_X4Y2 = FALSE;
	m_X4Y3 = FALSE;
	m_X4Y4 = FALSE;
	m_X4Y5 = FALSE;
	m_X4Y6 = FALSE;
	m_X4Y7 = FALSE;
	m_X4Y8 = FALSE;
	m_X4Y9 = FALSE;
	m_X5Y0 = FALSE;
	m_X5Y1 = FALSE;
	m_X5Y10 = FALSE;
	m_X5Y11 = FALSE;
	m_X5Y12 = FALSE;
	m_X5Y13 = FALSE;
	m_X5Y14 = FALSE;
	m_X5Y15 = FALSE;
	m_X5Y2 = FALSE;
	m_X5Y3 = FALSE;
	m_X5Y4 = FALSE;
	m_X5Y5 = FALSE;
	m_X5Y6 = FALSE;
	m_X5Y7 = FALSE;
	m_X5Y8 = FALSE;
	m_X5Y9 = FALSE;
	m_X6Y0 = FALSE;
	m_X6Y1 = FALSE;
	m_X6Y10 = FALSE;
	m_X6Y11 = FALSE;
	m_X6Y12 = FALSE;
	m_X6Y13 = FALSE;
	m_X6Y14 = FALSE;
	m_X6Y15 = FALSE;
	m_X6Y2 = FALSE;
	m_X6Y3 = FALSE;
	m_X6Y4 = FALSE;
	m_X6Y5 = FALSE;
	m_X6Y6 = FALSE;
	m_X6Y7 = FALSE;
	m_X6Y8 = FALSE;
	m_X7Y0 = FALSE;
	m_X6Y9 = FALSE;
	m_X7Y1 = FALSE;
	m_X7Y10 = FALSE;
	m_X7Y11 = FALSE;
	m_X7Y12 = FALSE;
	m_X7Y13 = FALSE;
	m_X7Y14 = FALSE;
	m_X7Y15 = FALSE;
	m_X7Y2 = FALSE;
	m_X7Y3 = FALSE;
	m_X7Y4 = FALSE;
	m_X7Y5 = FALSE;
	m_X7Y6 = FALSE;
	m_X7Y7 = FALSE;
	m_X7Y8 = FALSE;
	m_X7Y9 = FALSE;
	m_Symbol = _T("");
	m_Out = _T("");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CFontEditDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CFontEditDlg)
	DDX_Control(pDX, IDC_COMBO_HEIGH, m_Heigh);
	DDX_Control(pDX, IDC_COMBO_WIDE, m_Wide);
	DDX_Check(pDX, IDC_X0Y0, m_X0Y0);
	DDX_Check(pDX, IDC_X0Y1, m_X0Y1);
	DDX_Check(pDX, IDC_X0Y11, m_X0Y11);
	DDX_Check(pDX, IDC_X0Y10, m_X0Y10);
	DDX_Check(pDX, IDC_X0Y12, m_X0Y12);
	DDX_Check(pDX, IDC_X0Y13, m_X0Y13);
	DDX_Check(pDX, IDC_X0Y14, m_X0Y14);
	DDX_Check(pDX, IDC_X0Y15, m_X0Y15);
	DDX_Check(pDX, IDC_X0Y2, m_X0Y2);
	DDX_Check(pDX, IDC_X0Y3, m_X0Y3);
	DDX_Check(pDX, IDC_X0Y4, m_X0Y4);
	DDX_Check(pDX, IDC_X0Y5, m_X0Y5);
	DDX_Check(pDX, IDC_X0Y6, m_X0Y6);
	DDX_Check(pDX, IDC_X0Y7, m_X0Y7);
	DDX_Check(pDX, IDC_X0Y8, m_X0Y8);
	DDX_Check(pDX, IDC_X0Y9, m_X0Y9);
	DDX_Check(pDX, IDC_X1Y0, m_X1Y0);
	DDX_Check(pDX, IDC_X1Y1, m_X1Y1);
	DDX_Check(pDX, IDC_X1Y10, m_X1Y10);
	DDX_Check(pDX, IDC_X1Y11, m_X1Y11);
	DDX_Check(pDX, IDC_X1Y12, m_X1Y12);
	DDX_Check(pDX, IDC_X1Y13, m_X1Y13);
	DDX_Check(pDX, IDC_X1Y14, m_X1Y14);
	DDX_Check(pDX, IDC_X1Y15, m_X1Y15);
	DDX_Check(pDX, IDC_X1Y2, m_X1Y2);
	DDX_Check(pDX, IDC_X1Y3, m_X1Y3);
	DDX_Check(pDX, IDC_X1Y4, m_X1Y4);
	DDX_Check(pDX, IDC_X1Y5, m_X1Y5);
	DDX_Check(pDX, IDC_X1Y6, m_X1Y6);
	DDX_Check(pDX, IDC_X1Y7, m_X1Y7);
	DDX_Check(pDX, IDC_X1Y8, m_X1Y8);
	DDX_Check(pDX, IDC_X1Y9, m_X1Y9);
	DDX_Check(pDX, IDC_X2Y0, m_X2Y0);
	DDX_Check(pDX, IDC_X2Y1, m_X2Y1);
	DDX_Check(pDX, IDC_X2Y10, m_X2Y10);
	DDX_Check(pDX, IDC_X2Y11, m_X2Y11);
	DDX_Check(pDX, IDC_X2Y12, m_X2Y12);
	DDX_Check(pDX, IDC_X2Y13, m_X2Y13);
	DDX_Check(pDX, IDC_X2Y14, m_X2Y14);
	DDX_Check(pDX, IDC_X2Y15, m_X2Y15);
	DDX_Check(pDX, IDC_X2Y2, m_X2Y2);
	DDX_Check(pDX, IDC_X2Y3, m_X2Y3);
	DDX_Check(pDX, IDC_X2Y4, m_X2Y4);
	DDX_Check(pDX, IDC_X2Y5, m_X2Y5);
	DDX_Check(pDX, IDC_X2Y6, m_X2Y6);
	DDX_Check(pDX, IDC_X2Y7, m_X2Y7);
	DDX_Check(pDX, IDC_X2Y8, m_X2Y8);
	DDX_Check(pDX, IDC_X2Y9, m_X2Y9);
	DDX_Check(pDX, IDC_X3Y0, m_X3Y0);
	DDX_Check(pDX, IDC_X3Y1, m_X3Y1);
	DDX_Check(pDX, IDC_X3Y10, m_X3Y10);
	DDX_Check(pDX, IDC_X3Y11, m_X3Y11);
	DDX_Check(pDX, IDC_X3Y12, m_X3Y12);
	DDX_Check(pDX, IDC_X3Y13, m_X3Y13);
	DDX_Check(pDX, IDC_X3Y14, m_X3Y14);
	DDX_Check(pDX, IDC_X3Y15, m_X3Y15);
	DDX_Check(pDX, IDC_X3Y2, m_X3Y2);
	DDX_Check(pDX, IDC_X3Y3, m_X3Y3);
	DDX_Check(pDX, IDC_X3Y4, m_X3Y4);
	DDX_Check(pDX, IDC_X3Y5, m_X3Y5);
	DDX_Check(pDX, IDC_X3Y6, m_X3Y6);
	DDX_Check(pDX, IDC_X3Y7, m_X3Y7);
	DDX_Check(pDX, IDC_X3Y8, m_X3Y8);
	DDX_Check(pDX, IDC_X3Y9, m_X3Y9);
	DDX_Check(pDX, IDC_X4Y0, m_X4Y0);
	DDX_Check(pDX, IDC_X4Y1, m_X4Y1);
	DDX_Check(pDX, IDC_X4Y10, m_X4Y10);
	DDX_Check(pDX, IDC_X4Y11, m_X4Y11);
	DDX_Check(pDX, IDC_X4Y12, m_X4Y12);
	DDX_Check(pDX, IDC_X4Y13, m_X4Y13);
	DDX_Check(pDX, IDC_X4Y14, m_X4Y14);
	DDX_Check(pDX, IDC_X4Y15, m_X4Y15);
	DDX_Check(pDX, IDC_X4Y2, m_X4Y2);
	DDX_Check(pDX, IDC_X4Y3, m_X4Y3);
	DDX_Check(pDX, IDC_X4Y4, m_X4Y4);
	DDX_Check(pDX, IDC_X4Y5, m_X4Y5);
	DDX_Check(pDX, IDC_X4Y6, m_X4Y6);
	DDX_Check(pDX, IDC_X4Y7, m_X4Y7);
	DDX_Check(pDX, IDC_X4Y8, m_X4Y8);
	DDX_Check(pDX, IDC_X4Y9, m_X4Y9);
	DDX_Check(pDX, IDC_X5Y0, m_X5Y0);
	DDX_Check(pDX, IDC_X5Y1, m_X5Y1);
	DDX_Check(pDX, IDC_X5Y10, m_X5Y10);
	DDX_Check(pDX, IDC_X5Y11, m_X5Y11);
	DDX_Check(pDX, IDC_X5Y12, m_X5Y12);
	DDX_Check(pDX, IDC_X5Y13, m_X5Y13);
	DDX_Check(pDX, IDC_X5Y14, m_X5Y14);
	DDX_Check(pDX, IDC_X5Y15, m_X5Y15);
	DDX_Check(pDX, IDC_X5Y2, m_X5Y2);
	DDX_Check(pDX, IDC_X5Y3, m_X5Y3);
	DDX_Check(pDX, IDC_X5Y4, m_X5Y4);
	DDX_Check(pDX, IDC_X5Y5, m_X5Y5);
	DDX_Check(pDX, IDC_X5Y6, m_X5Y6);
	DDX_Check(pDX, IDC_X5Y7, m_X5Y7);
	DDX_Check(pDX, IDC_X5Y8, m_X5Y8);
	DDX_Check(pDX, IDC_X5Y9, m_X5Y9);
	DDX_Check(pDX, IDC_X6Y0, m_X6Y0);
	DDX_Check(pDX, IDC_X6Y1, m_X6Y1);
	DDX_Check(pDX, IDC_X6Y10, m_X6Y10);
	DDX_Check(pDX, IDC_X6Y11, m_X6Y11);
	DDX_Check(pDX, IDC_X6Y12, m_X6Y12);
	DDX_Check(pDX, IDC_X6Y13, m_X6Y13);
	DDX_Check(pDX, IDC_X6Y14, m_X6Y14);
	DDX_Check(pDX, IDC_X6Y15, m_X6Y15);
	DDX_Check(pDX, IDC_X6Y2, m_X6Y2);
	DDX_Check(pDX, IDC_X6Y3, m_X6Y3);
	DDX_Check(pDX, IDC_X6Y4, m_X6Y4);
	DDX_Check(pDX, IDC_X6Y5, m_X6Y5);
	DDX_Check(pDX, IDC_X6Y6, m_X6Y6);
	DDX_Check(pDX, IDC_X6Y7, m_X6Y7);
	DDX_Check(pDX, IDC_X6Y8, m_X6Y8);
	DDX_Check(pDX, IDC_X7Y0, m_X7Y0);
	DDX_Check(pDX, IDC_X6Y9, m_X6Y9);
	DDX_Check(pDX, IDC_X7Y1, m_X7Y1);
	DDX_Check(pDX, IDC_X7Y10, m_X7Y10);
	DDX_Check(pDX, IDC_X7Y11, m_X7Y11);
	DDX_Check(pDX, IDC_X7Y12, m_X7Y12);
	DDX_Check(pDX, IDC_X7Y13, m_X7Y13);
	DDX_Check(pDX, IDC_X7Y14, m_X7Y14);
	DDX_Check(pDX, IDC_X7Y15, m_X7Y15);
	DDX_Check(pDX, IDC_X7Y2, m_X7Y2);
	DDX_Check(pDX, IDC_X7Y3, m_X7Y3);
	DDX_Check(pDX, IDC_X7Y4, m_X7Y4);
	DDX_Check(pDX, IDC_X7Y5, m_X7Y5);
	DDX_Check(pDX, IDC_X7Y6, m_X7Y6);
	DDX_Check(pDX, IDC_X7Y7, m_X7Y7);
	DDX_Check(pDX, IDC_X7Y8, m_X7Y8);
	DDX_Check(pDX, IDC_X7Y9, m_X7Y9);
	DDX_Text(pDX, IDC_EDIT_SYMBOL, m_Symbol);
	DDX_Text(pDX, IDC_EDIT_OUT, m_Out);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CFontEditDlg, CDialog)
	//{{AFX_MSG_MAP(CFontEditDlg)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON_MAKE_CODE, OnButtonMakeCode)
	ON_BN_CLICKED(IDC_BUTTON_CLEAR, OnButtonClear)
	ON_BN_CLICKED(IDC_BUTTON_READ_CODE, OnButtonReadCode)
	ON_BN_CLICKED(IDC_BUTTON_UP, OnButtonUp)
	ON_BN_CLICKED(IDC_BUTTON_DOWN, OnButtonDown)
	ON_BN_CLICKED(IDC_BUTTON_LEFT, OnButtonLeft)
	ON_BN_CLICKED(IDC_BUTTON_RIGHT, OnButtonRight)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CFontEditDlg message handlers

BOOL CFontEditDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	m_Heigh.Clear();
	m_Heigh.AddString("8");
	m_Heigh.AddString("16");
	m_Heigh.SetCurSel(1);
	
	m_Wide.Clear();
	m_Wide.AddString("5");
	m_Wide.AddString("6");
	m_Wide.AddString("7");
	m_Wide.AddString("8");
	m_Wide.SetCurSel(3);

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CFontEditDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CFontEditDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CFontEditDlg::OnButtonMakeCode() 
{
	// TODO: Add your control notification handler code here
	int i,b[8]={0},mask;
	CString str;

	UpdateData(true);

	m_Heigh.GetWindowText(str);

    mask = (1<<0); i=0;
    if( m_X0Y0 ) b[i] |= mask; i++;
    if( m_X1Y0 ) b[i] |= mask; i++;
    if( m_X2Y0 ) b[i] |= mask; i++;
    if( m_X3Y0 ) b[i] |= mask; i++;
    if( m_X4Y0 ) b[i] |= mask; i++;
    if( m_X5Y0 ) b[i] |= mask; i++;
    if( m_X6Y0 ) b[i] |= mask; i++;
    if( m_X7Y0 ) b[i] |= mask; i++;

    mask = (1<<1); i=0;
    if( m_X0Y1 ) b[i] |= mask; i++;
    if( m_X1Y1 ) b[i] |= mask; i++;
    if( m_X2Y1 ) b[i] |= mask; i++;
    if( m_X3Y1 ) b[i] |= mask; i++;
    if( m_X4Y1 ) b[i] |= mask; i++;
    if( m_X5Y1 ) b[i] |= mask; i++;
    if( m_X6Y1 ) b[i] |= mask; i++;
    if( m_X7Y1 ) b[i] |= mask; i++;

    mask = (1<<2); i=0;
    if( m_X0Y2 ) b[i] |= mask; i++;
    if( m_X1Y2 ) b[i] |= mask; i++;
    if( m_X2Y2 ) b[i] |= mask; i++;
    if( m_X3Y2 ) b[i] |= mask; i++;
    if( m_X4Y2 ) b[i] |= mask; i++;
    if( m_X5Y2 ) b[i] |= mask; i++;
    if( m_X6Y2 ) b[i] |= mask; i++;
    if( m_X7Y2 ) b[i] |= mask; i++;

    mask = (1<<3); i=0;
    if( m_X0Y3 ) b[i] |= mask; i++;
    if( m_X1Y3 ) b[i] |= mask; i++;
    if( m_X2Y3 ) b[i] |= mask; i++;
    if( m_X3Y3 ) b[i] |= mask; i++;
    if( m_X4Y3 ) b[i] |= mask; i++;
    if( m_X5Y3 ) b[i] |= mask; i++;
    if( m_X6Y3 ) b[i] |= mask; i++;
    if( m_X7Y3 ) b[i] |= mask; i++;

    mask = (1<<4); i=0;
    if( m_X0Y4 ) b[i] |= mask; i++;
    if( m_X1Y4 ) b[i] |= mask; i++;
    if( m_X2Y4 ) b[i] |= mask; i++;
    if( m_X3Y4 ) b[i] |= mask; i++;
    if( m_X4Y4 ) b[i] |= mask; i++;
    if( m_X5Y4 ) b[i] |= mask; i++;
    if( m_X6Y4 ) b[i] |= mask; i++;
    if( m_X7Y4 ) b[i] |= mask; i++;

    mask = (1<<5); i=0;
    if( m_X0Y5 ) b[i] |= mask; i++;
    if( m_X1Y5 ) b[i] |= mask; i++;
    if( m_X2Y5 ) b[i] |= mask; i++;
    if( m_X3Y5 ) b[i] |= mask; i++;
    if( m_X4Y5 ) b[i] |= mask; i++;
    if( m_X5Y5 ) b[i] |= mask; i++;
    if( m_X6Y5 ) b[i] |= mask; i++;
    if( m_X7Y5 ) b[i] |= mask; i++;

    mask = (1<<6); i=0;
    if( m_X0Y6 ) b[i] |= mask; i++;
    if( m_X1Y6 ) b[i] |= mask; i++;
    if( m_X2Y6 ) b[i] |= mask; i++;
    if( m_X3Y6 ) b[i] |= mask; i++;
    if( m_X4Y6 ) b[i] |= mask; i++;
    if( m_X5Y6 ) b[i] |= mask; i++;
    if( m_X6Y6 ) b[i] |= mask; i++;
    if( m_X7Y6 ) b[i] |= mask; i++;

    mask = (1<<7); i=0;
    if( m_X0Y7 ) b[i] |= mask; i++;
    if( m_X1Y7 ) b[i] |= mask; i++;
    if( m_X2Y7 ) b[i] |= mask; i++;
    if( m_X3Y7 ) b[i] |= mask; i++;
    if( m_X4Y7 ) b[i] |= mask; i++;
    if( m_X5Y7 ) b[i] |= mask; i++;
    if( m_X6Y7 ) b[i] |= mask; i++;
    if( m_X7Y3 ) b[i] |= mask; i++;

	if( str == "16" )
	{
		mask = (1<<8); i=0;
		if( m_X0Y8 ) b[i] |= mask; i++;
		if( m_X1Y8 ) b[i] |= mask; i++;
		if( m_X2Y8 ) b[i] |= mask; i++;
		if( m_X3Y8 ) b[i] |= mask; i++;
		if( m_X4Y8 ) b[i] |= mask; i++;
		if( m_X5Y8 ) b[i] |= mask; i++;
		if( m_X6Y8 ) b[i] |= mask; i++;
		if( m_X7Y8 ) b[i] |= mask; i++;

		mask = (1<<9); i=0;
		if( m_X0Y9 ) b[i] |= mask; i++;
		if( m_X1Y9 ) b[i] |= mask; i++;
		if( m_X2Y9 ) b[i] |= mask; i++;
		if( m_X3Y9 ) b[i] |= mask; i++;
		if( m_X4Y9 ) b[i] |= mask; i++;
		if( m_X5Y9 ) b[i] |= mask; i++;
		if( m_X6Y9 ) b[i] |= mask; i++;
		if( m_X7Y9 ) b[i] |= mask; i++;

		mask = (1<<10); i=0;
		if( m_X0Y10 ) b[i] |= mask; i++;
		if( m_X1Y10 ) b[i] |= mask; i++;
		if( m_X2Y10 ) b[i] |= mask; i++;
		if( m_X3Y10 ) b[i] |= mask; i++;
		if( m_X4Y10 ) b[i] |= mask; i++;
		if( m_X5Y10 ) b[i] |= mask; i++;
		if( m_X6Y10 ) b[i] |= mask; i++;
		if( m_X7Y10 ) b[i] |= mask; i++;

		mask = (1<<11); i=0;
		if( m_X0Y11 ) b[i] |= mask; i++;
		if( m_X1Y11 ) b[i] |= mask; i++;
		if( m_X2Y11 ) b[i] |= mask; i++;
		if( m_X3Y11 ) b[i] |= mask; i++;
		if( m_X4Y11 ) b[i] |= mask; i++;
		if( m_X5Y11 ) b[i] |= mask; i++;
		if( m_X6Y11 ) b[i] |= mask; i++;
		if( m_X7Y11 ) b[i] |= mask; i++;

		mask = (1<<12); i=0;
		if( m_X0Y12 ) b[i] |= mask; i++;
		if( m_X1Y12 ) b[i] |= mask; i++;
		if( m_X2Y12 ) b[i] |= mask; i++;
		if( m_X3Y12 ) b[i] |= mask; i++;
		if( m_X4Y12 ) b[i] |= mask; i++;
		if( m_X5Y12 ) b[i] |= mask; i++;
		if( m_X6Y12 ) b[i] |= mask; i++;
		if( m_X7Y12 ) b[i] |= mask; i++;

		mask = (1<<13); i=0;
		if( m_X0Y13 ) b[i] |= mask; i++;
		if( m_X1Y13 ) b[i] |= mask; i++;
		if( m_X2Y13 ) b[i] |= mask; i++;
		if( m_X3Y13 ) b[i] |= mask; i++;
		if( m_X4Y13 ) b[i] |= mask; i++;
		if( m_X5Y13 ) b[i] |= mask; i++;
		if( m_X6Y13 ) b[i] |= mask; i++;
		if( m_X7Y13 ) b[i] |= mask; i++;

		mask = (1<<14); i=0;
		if( m_X0Y14 ) b[i] |= mask; i++;
		if( m_X1Y14 ) b[i] |= mask; i++;
		if( m_X2Y14 ) b[i] |= mask; i++;
		if( m_X3Y14 ) b[i] |= mask; i++;
		if( m_X4Y14 ) b[i] |= mask; i++;
		if( m_X5Y14 ) b[i] |= mask; i++;
		if( m_X6Y14 ) b[i] |= mask; i++;
		if( m_X7Y14 ) b[i] |= mask; i++;

		mask = (1<<15); i=0;
		if( m_X0Y15 ) b[i] |= mask; i++;
		if( m_X1Y15 ) b[i] |= mask; i++;
		if( m_X2Y15 ) b[i] |= mask; i++;
		if( m_X3Y15 ) b[i] |= mask; i++;
		if( m_X4Y15 ) b[i] |= mask; i++;
		if( m_X5Y15 ) b[i] |= mask; i++;
		if( m_X6Y15 ) b[i] |= mask; i++;
		if( m_X7Y15 ) b[i] |= mask; i++;

		m_Wide.GetWindowText(str);

		if( str == "5" )
			str.Format("0x%04X, 0x%04X, 0x%04X, 0x%04X, 0x%04X, /* %s */",b[0],b[1],b[2],b[3],b[4],m_Symbol);
		else if( str == "6" )
			str.Format("0x%04X, 0x%04X, 0x%04X, 0x%04X, 0x%04X, 0x%04X, /* %s */",b[0],b[1],b[2],b[3],b[4],b[5],m_Symbol);
		else if( str == "7" )
			str.Format("0x%04X, 0x%04X, 0x%04X, 0x%04X, 0x%04X, 0x%04X, 0x%04X, /* %s */",b[0],b[1],b[2],b[3],b[4],b[5],b[6],m_Symbol);
		else 
			str.Format("0x%04X, 0x%04X, 0x%04X, 0x%04X, 0x%04X, 0x%04X, 0x%04X, 0x%04X, /* %s */",b[0],b[1],b[2],b[3],b[4],b[5],b[6],b[7],m_Symbol);
	}
	else
	{
		m_Wide.GetWindowText(str);

		if( str == "5" )
			str.Format("0x%02X, 0x%02X, 0x%02X, 0x%02X, 0x%02X, /* %s */",b[0],b[1],b[2],b[3],b[4],m_Symbol);
		else if( str == "6" )
			str.Format("0x%02X, 0x%02X, 0x%02X, 0x%02X, 0x%02X, 0x%02X, /* %s */",b[0],b[1],b[2],b[3],b[4],b[5],m_Symbol);
		else if( str == "7" )
			str.Format("0x%02X, 0x%02X, 0x%02X, 0x%02X, 0x%02X, 0x%02X, 0x%02X, /* %s */",b[0],b[1],b[2],b[3],b[4],b[5],b[6],m_Symbol);
		else 
			str.Format("0x%02X, 0x%02X, 0x%02X, 0x%02X, 0x%02X, 0x%02X, 0x%02X, 0x%02X, /* %s */",b[0],b[1],b[2],b[3],b[4],b[5],b[6],b[7],m_Symbol);
	}

	m_Out = str;
	
	UpdateData(false);
}

void CFontEditDlg::OnButtonReadCode() 
{
	// TODO: Add your control notification handler code here
	int i,b[8]={0},mask;
	UpdateData(true);
	CString str;

	UpdateData(true);

	m_Wide.GetWindowText(str);

	if( str == "5" )
		sscanf(m_Out,"%X, %X, %X, %X, %X",&b[0],&b[1],&b[2],&b[3],&b[4]);
	else if( str == "6" )
		sscanf(m_Out,"%X, %X, %X, %X, %X, %X",&b[0],&b[1],&b[2],&b[3],&b[4],&b[5]);
	else if( str == "7" )
		sscanf(m_Out,"%X, %X, %X, %X, %X, %X, %X",&b[0],&b[1],&b[2],&b[3],&b[4],&b[5],&b[6]);
	else 
		sscanf(m_Out,"%X, %X, %X, %X, %X, %X, %X, %X%",&b[0],&b[1],&b[2],&b[3],&b[4],&b[5],&b[6],&b[7]);

	m_Heigh.GetWindowText(str);

	OnButtonClear();

    mask = (1<<0); i=0;
    m_X0Y0 = (b[i] & mask) == mask; i++;
    m_X1Y0 = (b[i] & mask) == mask; i++;
    m_X2Y0 = (b[i] & mask) == mask; i++;
    m_X3Y0 = (b[i] & mask) == mask; i++;
    m_X4Y0 = (b[i] & mask) == mask; i++;
    m_X5Y0 = (b[i] & mask) == mask; i++;
    m_X6Y0 = (b[i] & mask) == mask; i++;
    m_X7Y0 = (b[i] & mask) == mask; i++;

    mask = (1<<1); i=0;
    m_X0Y1 = (b[i] & mask) == mask; i++;
    m_X1Y1 = (b[i] & mask) == mask; i++;
    m_X2Y1 = (b[i] & mask) == mask; i++;
    m_X3Y1 = (b[i] & mask) == mask; i++;
    m_X4Y1 = (b[i] & mask) == mask; i++;
    m_X5Y1 = (b[i] & mask) == mask; i++;
    m_X6Y1 = (b[i] & mask) == mask; i++;
    m_X7Y1 = (b[i] & mask) == mask; i++;

    mask = (1<<2); i=0;
    m_X0Y2 = (b[i] & mask) == mask; i++;
    m_X1Y2 = (b[i] & mask) == mask; i++;
    m_X2Y2 = (b[i] & mask) == mask; i++;
    m_X3Y2 = (b[i] & mask) == mask; i++;
    m_X4Y2 = (b[i] & mask) == mask; i++;
    m_X5Y2 = (b[i] & mask) == mask; i++;
    m_X6Y2 = (b[i] & mask) == mask; i++;
    m_X7Y2 = (b[i] & mask) == mask; i++;

    mask = (1<<3); i=0;
    m_X0Y3 = (b[i] & mask) == mask; i++;
    m_X1Y3 = (b[i] & mask) == mask; i++;
    m_X2Y3 = (b[i] & mask) == mask; i++;
    m_X3Y3 = (b[i] & mask) == mask; i++;
    m_X4Y3 = (b[i] & mask) == mask; i++;
    m_X5Y3 = (b[i] & mask) == mask; i++;
    m_X6Y3 = (b[i] & mask) == mask; i++;
    m_X7Y3 = (b[i] & mask) == mask; i++;

    mask = (1<<4); i=0;
    m_X0Y4 = (b[i] & mask) == mask; i++;
    m_X1Y4 = (b[i] & mask) == mask; i++;
    m_X2Y4 = (b[i] & mask) == mask; i++;
    m_X3Y4 = (b[i] & mask) == mask; i++;
    m_X4Y4 = (b[i] & mask) == mask; i++;
    m_X5Y4 = (b[i] & mask) == mask; i++;
    m_X6Y4 = (b[i] & mask) == mask; i++;
    m_X7Y4 = (b[i] & mask) == mask; i++;

    mask = (1<<5); i=0;
    m_X0Y5 = (b[i] & mask) == mask; i++;
    m_X1Y5 = (b[i] & mask) == mask; i++;
    m_X2Y5 = (b[i] & mask) == mask; i++;
    m_X3Y5 = (b[i] & mask) == mask; i++;
    m_X4Y5 = (b[i] & mask) == mask; i++;
    m_X5Y5 = (b[i] & mask) == mask; i++;
    m_X6Y5 = (b[i] & mask) == mask; i++;
    m_X7Y5 = (b[i] & mask) == mask; i++;

    mask = (1<<6); i=0;
    m_X0Y6 = (b[i] & mask) == mask; i++;
    m_X1Y6 = (b[i] & mask) == mask; i++;
    m_X2Y6 = (b[i] & mask) == mask; i++;
    m_X3Y6 = (b[i] & mask) == mask; i++;
    m_X4Y6 = (b[i] & mask) == mask; i++;
    m_X5Y6 = (b[i] & mask) == mask; i++;
    m_X6Y6 = (b[i] & mask) == mask; i++;
    m_X7Y6 = (b[i] & mask) == mask; i++;

    mask = (1<<7); i=0;
    m_X0Y7 = (b[i] & mask) == mask; i++;
    m_X1Y7 = (b[i] & mask) == mask; i++;
    m_X2Y7 = (b[i] & mask) == mask; i++;
    m_X3Y7 = (b[i] & mask) == mask; i++;
    m_X4Y7 = (b[i] & mask) == mask; i++;
    m_X5Y7 = (b[i] & mask) == mask; i++;
    m_X6Y7 = (b[i] & mask) == mask; i++;
    m_X7Y7 = (b[i] & mask) == mask; i++;

    mask = (1<<8); i=0;
    m_X0Y8 = (b[i] & mask) == mask; i++;
    m_X1Y8 = (b[i] & mask) == mask; i++;
    m_X2Y8 = (b[i] & mask) == mask; i++;
    m_X3Y8 = (b[i] & mask) == mask; i++;
    m_X4Y8 = (b[i] & mask) == mask; i++;
    m_X5Y8 = (b[i] & mask) == mask; i++;
    m_X6Y8 = (b[i] & mask) == mask; i++;
    m_X7Y8 = (b[i] & mask) == mask; i++;

	if( str == "16" )
	{
		mask = (1<<9); i=0;
		m_X0Y9 = (b[i] & mask) == mask; i++;
		m_X1Y9 = (b[i] & mask) == mask; i++;
		m_X2Y9 = (b[i] & mask) == mask; i++;
		m_X3Y9 = (b[i] & mask) == mask; i++;
		m_X4Y9 = (b[i] & mask) == mask; i++;
		m_X5Y9 = (b[i] & mask) == mask; i++;
		m_X6Y9 = (b[i] & mask) == mask; i++;
		m_X7Y9 = (b[i] & mask) == mask; i++;

		mask = (1<<10); i=0;
		m_X0Y10 = (b[i] & mask) == mask; i++;
		m_X1Y10 = (b[i] & mask) == mask; i++;
		m_X2Y10 = (b[i] & mask) == mask; i++;
		m_X3Y10 = (b[i] & mask) == mask; i++;
		m_X4Y10 = (b[i] & mask) == mask; i++;
		m_X5Y10 = (b[i] & mask) == mask; i++;
		m_X6Y10 = (b[i] & mask) == mask; i++;
		m_X7Y10 = (b[i] & mask) == mask; i++;

		mask = (1<<11); i=0;
		m_X0Y11 = (b[i] & mask) == mask; i++;
		m_X1Y11 = (b[i] & mask) == mask; i++;
		m_X2Y11 = (b[i] & mask) == mask; i++;
		m_X3Y11 = (b[i] & mask) == mask; i++;
		m_X4Y11 = (b[i] & mask) == mask; i++;
		m_X5Y11 = (b[i] & mask) == mask; i++;
		m_X6Y11 = (b[i] & mask) == mask; i++;
		m_X7Y11 = (b[i] & mask) == mask; i++;

		mask = (1<<12); i=0;
		m_X0Y12 = (b[i] & mask) == mask; i++;
		m_X1Y12 = (b[i] & mask) == mask; i++;
		m_X2Y12 = (b[i] & mask) == mask; i++;
		m_X3Y12 = (b[i] & mask) == mask; i++;
		m_X4Y12 = (b[i] & mask) == mask; i++;
		m_X5Y12 = (b[i] & mask) == mask; i++;
		m_X6Y12 = (b[i] & mask) == mask; i++;
		m_X7Y12 = (b[i] & mask) == mask; i++;

		mask = (1<<13); i=0;
		m_X0Y13 = (b[i] & mask) == mask; i++;
		m_X1Y13 = (b[i] & mask) == mask; i++;
		m_X2Y13 = (b[i] & mask) == mask; i++;
		m_X3Y13 = (b[i] & mask) == mask; i++;
		m_X4Y13 = (b[i] & mask) == mask; i++;
		m_X5Y13 = (b[i] & mask) == mask; i++;
		m_X6Y13 = (b[i] & mask) == mask; i++;
		m_X7Y13 = (b[i] & mask) == mask; i++;

		mask = (1<<14); i=0;
		m_X0Y14 = (b[i] & mask) == mask; i++;
		m_X1Y14 = (b[i] & mask) == mask; i++;
		m_X2Y14 = (b[i] & mask) == mask; i++;
		m_X3Y14 = (b[i] & mask) == mask; i++;
		m_X4Y14 = (b[i] & mask) == mask; i++;
		m_X5Y14 = (b[i] & mask) == mask; i++;
		m_X6Y14 = (b[i] & mask) == mask; i++;
		m_X7Y14 = (b[i] & mask) == mask; i++;

		mask = (1<<15); i=0;
		m_X0Y15 = (b[i] & mask) == mask; i++;
		m_X1Y15 = (b[i] & mask) == mask; i++;
		m_X2Y15 = (b[i] & mask) == mask; i++;
		m_X3Y15 = (b[i] & mask) == mask; i++;
		m_X4Y15 = (b[i] & mask) == mask; i++;
		m_X5Y15 = (b[i] & mask) == mask; i++;
		m_X6Y15 = (b[i] & mask) == mask; i++;
		m_X7Y15 = (b[i] & mask) == mask; i++;
	}

	UpdateData(false);
}



void CFontEditDlg::OnButtonClear() 
{
	// TODO: Add your control notification handler code here
	m_X0Y0 = false;
	m_X1Y0 = false;
	m_X2Y0 = false;
	m_X3Y0 = false;
	m_X4Y0 = false;
	m_X5Y0 = false;
	m_X6Y0 = false;
	m_X7Y0 = false;

	m_X0Y1 = false;
	m_X1Y1 = false;
	m_X2Y1 = false;
	m_X3Y1 = false;
	m_X4Y1 = false;
	m_X5Y1 = false;
	m_X6Y1 = false;
	m_X7Y1 = false;

	m_X0Y2 = false;
	m_X1Y2 = false;
	m_X2Y2 = false;
	m_X3Y2 = false;
	m_X4Y2 = false;
	m_X5Y2 = false;
	m_X6Y2 = false;
	m_X7Y2 = false;

	m_X0Y3 = false;
	m_X1Y3 = false;
	m_X2Y3 = false;
	m_X3Y3 = false;
	m_X4Y3 = false;
	m_X5Y3 = false;
	m_X6Y3 = false;
	m_X7Y3 = false;
	
	m_X0Y4 = false;
	m_X1Y4 = false;
	m_X2Y4 = false;
	m_X3Y4 = false;
	m_X4Y4 = false;
	m_X5Y4 = false;
	m_X6Y4 = false;
	m_X7Y4 = false;
	
	m_X0Y5 = false;
	m_X1Y5 = false;
	m_X2Y5 = false;
	m_X3Y5 = false;
	m_X4Y5 = false;
	m_X5Y5 = false;
	m_X6Y5 = false;
	m_X7Y5 = false;

	m_X0Y6 = false;
	m_X1Y6 = false;
	m_X2Y6 = false;
	m_X3Y6 = false;
	m_X4Y6 = false;
	m_X5Y6 = false;
	m_X6Y6 = false;
	m_X7Y6 = false;
	
	m_X0Y7 = false;
	m_X1Y7 = false;
	m_X2Y7 = false;
	m_X3Y7 = false;
	m_X4Y7 = false;
	m_X5Y7 = false;
	m_X6Y7 = false;
	m_X7Y7 = false;
	
	m_X0Y8 = false;
	m_X1Y8 = false;
	m_X2Y8 = false;
	m_X3Y8 = false;
	m_X4Y8 = false;
	m_X5Y8 = false;
	m_X6Y8 = false;
	m_X7Y8 = false;
	
	m_X0Y9 = false;
	m_X1Y9 = false;
	m_X2Y9 = false;
	m_X3Y9 = false;
	m_X4Y9 = false;
	m_X5Y9 = false;
	m_X6Y9 = false;
	m_X7Y9 = false;
	
	m_X0Y10 = false;
	m_X1Y10 = false;
	m_X2Y10 = false;
	m_X3Y10 = false;
	m_X4Y10 = false;
	m_X5Y10 = false;
	m_X6Y10 = false;
	m_X7Y10 = false;

	m_X0Y11 = false;
	m_X1Y11 = false;
	m_X2Y11 = false;
	m_X3Y11 = false;
	m_X4Y11 = false;
	m_X5Y11 = false;
	m_X6Y11 = false;
	m_X7Y11 = false;

	m_X0Y12 = false;
	m_X1Y12 = false;
	m_X2Y12 = false;
	m_X3Y12 = false;
	m_X4Y12 = false;
	m_X5Y12 = false;
	m_X6Y12 = false;
	m_X7Y12 = false;

	m_X0Y13 = false;
	m_X1Y13 = false;
	m_X2Y13 = false;
	m_X3Y13 = false;
	m_X4Y13 = false;
	m_X5Y13 = false;
	m_X6Y13 = false;
	m_X7Y13 = false;

	m_X0Y14 = false;
	m_X1Y14 = false;
	m_X2Y14 = false;
	m_X3Y14 = false;
	m_X4Y14 = false;
	m_X5Y14 = false;
	m_X6Y14 = false;
	m_X7Y14 = false;

	m_X0Y15 = false;
	m_X1Y15 = false;
	m_X2Y15 = false;
	m_X3Y15 = false;
	m_X4Y15 = false;
	m_X5Y15 = false;
	m_X6Y15 = false;
	m_X7Y15 = false;

	UpdateData(false);
}



void CFontEditDlg::OnButtonUp() 
{
	// TODO: Add your control notification handler code here
	CString str;

	UpdateData(true);

	m_Heigh.GetWindowText(str);

    m_X0Y0 = m_X0Y1;
    m_X1Y0 = m_X1Y1;
    m_X2Y0 = m_X2Y1;
    m_X3Y0 = m_X3Y1;
    m_X4Y0 = m_X4Y1;
    m_X5Y0 = m_X5Y1;
    m_X6Y0 = m_X6Y1;
    m_X7Y0 = m_X7Y1;

    m_X0Y1 = m_X0Y2;
    m_X1Y1 = m_X1Y2;
    m_X2Y1 = m_X2Y2;
    m_X3Y1 = m_X3Y2;
    m_X4Y1 = m_X4Y2;
    m_X5Y1 = m_X5Y2;
    m_X6Y1 = m_X6Y2;
    m_X7Y1 = m_X7Y2;

    m_X0Y2 = m_X0Y3;
    m_X1Y2 = m_X1Y3;
    m_X2Y2 = m_X2Y3;
    m_X3Y2 = m_X3Y3;
    m_X4Y2 = m_X4Y3;
    m_X5Y2 = m_X5Y3;
    m_X6Y2 = m_X6Y3;
    m_X7Y2 = m_X7Y3;
   
    m_X0Y3 = m_X0Y4;
    m_X1Y3 = m_X1Y4;
    m_X2Y3 = m_X2Y4;
    m_X3Y3 = m_X3Y4;
    m_X4Y3 = m_X4Y4;
    m_X5Y3 = m_X5Y4;
    m_X6Y3 = m_X6Y4;
    m_X7Y3 = m_X7Y4;
	
    m_X0Y4 = m_X0Y5;
    m_X1Y4 = m_X1Y5;
    m_X2Y4 = m_X2Y5;
    m_X3Y4 = m_X3Y5;
    m_X4Y4 = m_X4Y5;
    m_X5Y4 = m_X5Y5;
    m_X6Y4 = m_X6Y5;
    m_X7Y4 = m_X7Y5;

    m_X0Y5 = m_X0Y6;
    m_X1Y5 = m_X1Y6;
    m_X2Y5 = m_X2Y6;
    m_X3Y5 = m_X3Y6;
    m_X4Y5 = m_X4Y6;
    m_X5Y5 = m_X5Y6;
    m_X6Y5 = m_X6Y6;
    m_X7Y5 = m_X7Y6;

    m_X0Y6 = m_X0Y7;
    m_X1Y6 = m_X1Y7;
    m_X2Y6 = m_X2Y7;
    m_X3Y6 = m_X3Y7;
    m_X4Y6 = m_X4Y7;
    m_X5Y6 = m_X5Y7;
    m_X6Y6 = m_X6Y7;
    m_X7Y6 = m_X7Y7;

	if( str == "8" )
	{
		m_X0Y7 = false;
		m_X1Y7 = false;
		m_X2Y7 = false;
		m_X3Y7 = false;
		m_X4Y7 = false;
		m_X5Y7 = false;
		m_X6Y7 = false;
		m_X7Y7 = false;
	}
	else
	{
		m_X0Y7 = m_X0Y8;
		m_X1Y7 = m_X1Y8;
		m_X2Y7 = m_X2Y8;
		m_X3Y7 = m_X3Y8;
		m_X4Y7 = m_X4Y8;
		m_X5Y7 = m_X5Y8;
		m_X6Y7 = m_X6Y8;
		m_X7Y7 = m_X7Y8;

		m_X0Y8 = m_X0Y9;
		m_X1Y8 = m_X1Y9;
		m_X2Y8 = m_X2Y9;
		m_X3Y8 = m_X3Y9;
		m_X4Y8 = m_X4Y9;
		m_X5Y8 = m_X5Y9;
		m_X6Y8 = m_X6Y9;
		m_X7Y8 = m_X7Y9;

		m_X0Y8 = m_X0Y10;
		m_X1Y8 = m_X1Y10;
		m_X2Y8 = m_X2Y10;
		m_X3Y8 = m_X3Y10;
		m_X4Y8 = m_X4Y10;
		m_X5Y8 = m_X5Y10;
		m_X6Y8 = m_X6Y10;
		m_X7Y8 = m_X7Y10;
	
		m_X0Y10 = m_X0Y11;
		m_X1Y10 = m_X1Y11;
		m_X2Y10 = m_X2Y11;
		m_X3Y10 = m_X3Y11;
		m_X4Y10 = m_X4Y11;
		m_X5Y10 = m_X5Y11;
		m_X6Y10 = m_X6Y11;
		m_X7Y10 = m_X7Y11;

		m_X0Y11 = m_X0Y12;
		m_X1Y11 = m_X1Y12;
		m_X2Y11 = m_X2Y12;
		m_X3Y11 = m_X3Y12;
		m_X4Y11 = m_X4Y12;
		m_X5Y11 = m_X5Y12;
		m_X6Y11 = m_X6Y12;
		m_X7Y11 = m_X7Y12;

		m_X0Y12 = m_X0Y13;
		m_X1Y12 = m_X1Y13;
		m_X2Y12 = m_X2Y13;
		m_X3Y12 = m_X3Y13;
		m_X4Y12 = m_X4Y13;
		m_X5Y12 = m_X5Y13;
		m_X6Y12 = m_X6Y13;
		m_X7Y12 = m_X7Y13;

		m_X0Y13 = m_X0Y14;
		m_X1Y13 = m_X1Y14;
		m_X2Y13 = m_X2Y14;
		m_X3Y13 = m_X3Y14;
		m_X4Y13 = m_X4Y14;
		m_X5Y13 = m_X5Y14;
		m_X6Y13 = m_X6Y14;
		m_X7Y13 = m_X7Y14;

		m_X0Y14 = m_X0Y15;
		m_X1Y14 = m_X1Y15;
		m_X2Y14 = m_X2Y15;
		m_X3Y14 = m_X3Y15;
		m_X4Y14 = m_X4Y15;
		m_X5Y14 = m_X5Y15;
		m_X6Y14 = m_X6Y15;
		m_X7Y14 = m_X7Y15;

		m_X0Y15 = false;
		m_X1Y15 = false;
		m_X2Y15 = false;
		m_X3Y15 = false;
		m_X4Y15 = false;
		m_X5Y15 = false;
		m_X6Y15 = false;
		m_X7Y15 = false;
	}	
	UpdateData(false);
}

void CFontEditDlg::OnButtonDown() 
{
	// TODO: Add your control notification handler code here
	CString str;

	UpdateData(true);

	m_Heigh.GetWindowText(str);

	if( str == "16" )
	{
		m_X0Y15 = m_X0Y14;
		m_X1Y15 = m_X1Y14;
		m_X2Y15 = m_X2Y14;
		m_X3Y15 = m_X3Y14;
		m_X4Y15 = m_X4Y14;
		m_X5Y15 = m_X5Y14;
		m_X6Y15 = m_X6Y14;
		m_X7Y15 = m_X7Y14;

		m_X0Y14 = m_X0Y13;
		m_X1Y14 = m_X1Y13;
		m_X2Y14 = m_X2Y13;
		m_X3Y14 = m_X3Y13;
		m_X4Y14 = m_X4Y13;
		m_X5Y14 = m_X5Y13;
		m_X6Y14 = m_X6Y13;
		m_X7Y14 = m_X7Y13;

		m_X0Y13 = m_X0Y12;
		m_X1Y13 = m_X1Y12;
		m_X2Y13 = m_X2Y12;
		m_X3Y13 = m_X3Y12;
		m_X4Y13 = m_X4Y12;
		m_X5Y13 = m_X5Y12;
		m_X6Y13 = m_X6Y12;
		m_X7Y13 = m_X7Y12;

		m_X0Y12 = m_X0Y11;
		m_X1Y12 = m_X1Y11;
		m_X2Y12 = m_X2Y11;
		m_X3Y12 = m_X3Y11;
		m_X4Y12 = m_X4Y11;
		m_X5Y12 = m_X5Y11;
		m_X6Y12 = m_X6Y11;
		m_X7Y12 = m_X7Y11;
		
		m_X0Y11 = m_X0Y10;
		m_X1Y11 = m_X1Y10;
		m_X2Y11 = m_X2Y10;
		m_X3Y11 = m_X3Y10;
		m_X4Y11 = m_X4Y10;
		m_X5Y11 = m_X5Y10;
		m_X6Y11 = m_X6Y10;
		m_X7Y11 = m_X7Y10;

		m_X0Y10 = m_X0Y9;
		m_X1Y10 = m_X1Y9;
		m_X2Y10 = m_X2Y9;
		m_X3Y10 = m_X3Y9;
		m_X4Y10 = m_X4Y9;
		m_X5Y10 = m_X5Y9;
		m_X6Y10 = m_X6Y9;
		m_X7Y10 = m_X7Y9;

		m_X0Y9 = m_X0Y8;
		m_X1Y9 = m_X1Y8;
		m_X2Y9 = m_X2Y8;
		m_X3Y9 = m_X3Y8;
		m_X4Y9 = m_X4Y8;
		m_X5Y9 = m_X5Y8;
		m_X6Y9 = m_X6Y8;
		m_X7Y9 = m_X7Y8;

		m_X0Y8 = m_X0Y7;
		m_X1Y8 = m_X1Y7;
		m_X2Y8 = m_X2Y7;
		m_X3Y8 = m_X3Y7;
		m_X4Y8 = m_X4Y7;
		m_X5Y8 = m_X5Y7;
		m_X6Y8 = m_X6Y7;
		m_X7Y8 = m_X7Y7;
	}

	m_X0Y7 = m_X0Y6;
	m_X1Y7 = m_X1Y6;
	m_X2Y7 = m_X2Y6;
	m_X3Y7 = m_X3Y6;
	m_X4Y7 = m_X4Y6;
	m_X5Y7 = m_X5Y6;
	m_X6Y7 = m_X6Y6;
	m_X7Y7 = m_X7Y6;
	
	m_X0Y6 = m_X0Y5;
	m_X1Y6 = m_X1Y5;
	m_X2Y6 = m_X2Y5;
	m_X3Y6 = m_X3Y5;
	m_X4Y6 = m_X4Y5;
	m_X5Y6 = m_X5Y5;
	m_X6Y6 = m_X6Y5;
	m_X7Y6 = m_X7Y5;
	
	m_X0Y5 = m_X0Y4;
	m_X1Y5 = m_X1Y4;
	m_X2Y5 = m_X2Y4;
	m_X3Y5 = m_X3Y4;
	m_X4Y5 = m_X4Y4;
	m_X5Y5 = m_X5Y4;
	m_X6Y5 = m_X6Y4;
	m_X7Y5 = m_X7Y4;
	
	m_X0Y4 = m_X0Y3;
	m_X1Y4 = m_X1Y3;
	m_X2Y4 = m_X2Y3;
	m_X3Y4 = m_X3Y3;
	m_X4Y4 = m_X4Y3;
	m_X5Y4 = m_X5Y3;
	m_X6Y4 = m_X6Y3;
	m_X7Y4 = m_X7Y3;
	
	m_X0Y3 = m_X0Y2;
	m_X1Y3 = m_X1Y2;
	m_X2Y3 = m_X2Y2;
	m_X3Y3 = m_X3Y2;
	m_X4Y3 = m_X4Y2;
	m_X5Y3 = m_X5Y2;
	m_X6Y3 = m_X6Y2;
	m_X7Y3 = m_X7Y2;
	
	m_X0Y2 = m_X0Y1;
	m_X1Y2 = m_X1Y1;
	m_X2Y2 = m_X2Y1;
	m_X3Y2 = m_X3Y1;
	m_X4Y2 = m_X4Y1;
	m_X5Y2 = m_X5Y1;
	m_X6Y2 = m_X6Y1;
	m_X7Y2 = m_X7Y1;
	
	m_X0Y1 = m_X0Y0;
	m_X1Y1 = m_X1Y0;
	m_X2Y1 = m_X2Y0;
	m_X3Y1 = m_X3Y0;
	m_X4Y1 = m_X4Y0;
	m_X5Y1 = m_X5Y0;
	m_X6Y1 = m_X6Y0;
	m_X7Y1 = m_X7Y0;
	
	m_X0Y0 = false;
	m_X1Y0 = false;
	m_X2Y0 = false;
	m_X3Y0 = false;
	m_X4Y0 = false;
	m_X5Y0 = false;
	m_X6Y0 = false;
	m_X7Y0 = false;

	UpdateData(false);
}

void CFontEditDlg::OnButtonLeft() 
{
	// TODO: Add your control notification handler code here
	CString str;
	int i;
	UpdateData(true);

	m_Wide.GetWindowText(str);
	sscanf(str,"%d",&i);

	m_X0Y0 = m_X1Y0;
	m_X0Y1 = m_X1Y1;
	m_X0Y2 = m_X1Y2;
	m_X0Y3 = m_X1Y3;
	m_X0Y4 = m_X1Y4;
	m_X0Y5 = m_X1Y5;
	m_X0Y6 = m_X1Y6;
	m_X0Y7 = m_X1Y7;
	m_X0Y8 = m_X1Y8;
	m_X0Y9 = m_X1Y9;
	m_X0Y10 = m_X1Y10;
	m_X0Y11 = m_X1Y11;
	m_X0Y12 = m_X1Y12;
	m_X0Y13 = m_X1Y13;
	m_X0Y14 = m_X1Y14;
	m_X0Y15 = m_X1Y15;

	m_X1Y0 = m_X2Y0;
	m_X1Y1 = m_X2Y1;
	m_X1Y2 = m_X2Y2;
	m_X1Y3 = m_X2Y3;
	m_X1Y4 = m_X2Y4;
	m_X1Y5 = m_X2Y5;
	m_X1Y6 = m_X2Y6;
	m_X1Y7 = m_X2Y7;
	m_X1Y8 = m_X2Y8;
	m_X1Y9 = m_X2Y9;
	m_X1Y10 = m_X2Y10;
	m_X1Y11 = m_X2Y11;
	m_X1Y12 = m_X2Y12;
	m_X1Y13 = m_X2Y13;
	m_X1Y14 = m_X2Y14;
	m_X1Y15 = m_X2Y15;
	
	m_X2Y0 = m_X3Y0;
	m_X2Y1 = m_X3Y1;
	m_X2Y2 = m_X3Y2;
	m_X2Y3 = m_X3Y3;
	m_X2Y4 = m_X3Y4;
	m_X2Y5 = m_X3Y5;
	m_X2Y6 = m_X3Y6;
	m_X2Y7 = m_X3Y7;
	m_X2Y8 = m_X3Y8;
	m_X2Y9 = m_X3Y9;
	m_X2Y10 = m_X3Y10;
	m_X2Y11 = m_X3Y11;
	m_X2Y12 = m_X3Y12;
	m_X2Y13 = m_X3Y13;
	m_X2Y14 = m_X3Y14;
	m_X2Y15 = m_X3Y15;

	m_X3Y0 = m_X4Y0;
	m_X3Y1 = m_X4Y1;
	m_X3Y2 = m_X4Y2;
	m_X3Y3 = m_X4Y3;
	m_X3Y4 = m_X4Y4;
	m_X3Y5 = m_X4Y5;
	m_X3Y6 = m_X4Y6;
	m_X3Y7 = m_X4Y7;
	m_X3Y8 = m_X4Y8;
	m_X3Y9 = m_X4Y9;
	m_X3Y10 = m_X4Y10;
	m_X3Y11 = m_X4Y11;
	m_X3Y12 = m_X4Y12;
	m_X3Y13 = m_X4Y13;
	m_X3Y14 = m_X4Y14;
	m_X3Y15 = m_X4Y15;

	if( i == 5 )
	{
		m_X4Y0 = false;
		m_X4Y1 = false;
		m_X4Y2 = false;
		m_X4Y3 = false;
		m_X4Y4 = false;
		m_X4Y5 = false;
		m_X4Y6 = false;
		m_X4Y7 = false;
		m_X4Y8 = false;
		m_X4Y9 = false;
		m_X4Y10 = false;
		m_X4Y11 = false;
		m_X4Y12 = false;
		m_X4Y13 = false;
		m_X4Y14 = false;
		m_X4Y15 = false;
	}
	if( i > 5 )
	{
		m_X4Y0 = m_X5Y0;
		m_X4Y1 = m_X5Y1;
		m_X4Y2 = m_X5Y2;
		m_X4Y3 = m_X5Y3;
		m_X4Y4 = m_X5Y4;
		m_X4Y5 = m_X5Y5;
		m_X4Y6 = m_X5Y6;
		m_X4Y7 = m_X5Y7;
		m_X4Y8 = m_X5Y8;
		m_X4Y9 = m_X5Y9;
		m_X4Y10 = m_X5Y10;
		m_X4Y11 = m_X5Y11;
		m_X4Y12 = m_X5Y12;
		m_X4Y13 = m_X5Y13;
		m_X4Y14 = m_X5Y14;
		m_X4Y15 = m_X5Y15;
	}
	if( i == 6 )
	{
		m_X5Y0 = false;
		m_X5Y1 = false;
		m_X5Y2 = false;
		m_X5Y3 = false;
		m_X5Y4 = false;
		m_X5Y5 = false;
		m_X5Y6 = false;
		m_X5Y7 = false;
		m_X5Y8 = false;
		m_X5Y9 = false;
		m_X5Y10 = false;
		m_X5Y11 = false;
		m_X5Y12 = false;
		m_X5Y13 = false;
		m_X5Y14 = false;
		m_X5Y15 = false;
	}
	if( i > 6 )
	{
		m_X5Y0 = m_X6Y0;
		m_X5Y1 = m_X6Y1;
		m_X5Y2 = m_X6Y2;
		m_X5Y3 = m_X6Y3;
		m_X5Y4 = m_X6Y4;
		m_X5Y5 = m_X6Y5;
		m_X5Y6 = m_X6Y6;
		m_X5Y7 = m_X6Y7;
		m_X5Y8 = m_X6Y8;
		m_X5Y9 = m_X6Y9;
		m_X5Y10 = m_X6Y10;
		m_X5Y11 = m_X6Y11;
		m_X5Y12 = m_X6Y12;
		m_X5Y13 = m_X6Y13;
		m_X5Y14 = m_X6Y14;
		m_X5Y15 = m_X6Y15;
	}
	if( i == 7 )
	{
		m_X6Y0 = false;
		m_X6Y1 = false;
		m_X6Y2 = false;
		m_X6Y3 = false;
		m_X6Y4 = false;
		m_X6Y5 = false;
		m_X6Y6 = false;
		m_X6Y7 = false;
		m_X6Y8 = false;
		m_X6Y9 = false;
		m_X6Y10 = false;
		m_X6Y11 = false;
		m_X6Y12 = false;
		m_X6Y13 = false;
		m_X6Y14 = false;
		m_X6Y15 = false;
	}
	if( i > 7 )
	{
		m_X6Y0 = m_X7Y0;
		m_X6Y1 = m_X7Y1;
		m_X6Y2 = m_X7Y2;
		m_X6Y3 = m_X7Y3;
		m_X6Y4 = m_X7Y4;
		m_X6Y5 = m_X7Y5;
		m_X6Y6 = m_X7Y6;
		m_X6Y7 = m_X7Y7;
		m_X6Y8 = m_X7Y8;
		m_X6Y9 = m_X7Y9;
		m_X6Y10 = m_X7Y10;
		m_X6Y11 = m_X7Y11;
		m_X6Y12 = m_X7Y12;
		m_X6Y13 = m_X7Y13;
		m_X6Y14 = m_X7Y14;
		m_X6Y15 = m_X7Y15;

		m_X7Y0 = false;
		m_X7Y1 = false;
		m_X7Y2 = false;
		m_X7Y3 = false;
		m_X7Y4 = false;
		m_X7Y5 = false;
		m_X7Y6 = false;
		m_X7Y7 = false;
		m_X7Y8 = false;
		m_X7Y9 = false;
		m_X7Y10 = false;
		m_X7Y11 = false;
		m_X7Y12 = false;
		m_X7Y13 = false;
		m_X7Y14 = false;
		m_X7Y15 = false;
	}
	UpdateData(false);
}

void CFontEditDlg::OnButtonRight() 
{
	// TODO: Add your control notification handler code here
	CString str;
	int i;
	UpdateData(true);

	m_Wide.GetWindowText(str);
	sscanf(str,"%d",&i);
		
	if( i >= 8 )
	{
		m_X7Y0 = m_X6Y0;
		m_X7Y1 = m_X6Y1;
		m_X7Y2 = m_X6Y2;
		m_X7Y3 = m_X6Y3;
		m_X7Y4 = m_X6Y4;
		m_X7Y5 = m_X6Y5;
		m_X7Y6 = m_X6Y6;
		m_X7Y7 = m_X6Y7;
		m_X7Y8 = m_X6Y8;
		m_X7Y9 = m_X6Y9;
		m_X7Y10 = m_X6Y10;
		m_X7Y11 = m_X6Y11;
		m_X7Y12 = m_X6Y12;
		m_X7Y13 = m_X6Y13;
		m_X7Y14 = m_X6Y14;
		m_X7Y15 = m_X6Y15;
	}
	if( i >= 7 )
	{
		m_X6Y0 = m_X5Y0;
		m_X6Y1 = m_X5Y1;
		m_X6Y2 = m_X5Y2;
		m_X6Y3 = m_X5Y3;
		m_X6Y4 = m_X5Y4;
		m_X6Y5 = m_X5Y5;
		m_X6Y6 = m_X5Y6;
		m_X6Y7 = m_X5Y7;
		m_X6Y8 = m_X5Y8;
		m_X6Y9 = m_X5Y9;
		m_X6Y10 = m_X5Y10;
		m_X6Y11 = m_X5Y11;
		m_X6Y12 = m_X5Y12;
		m_X6Y13 = m_X5Y13;
		m_X6Y14 = m_X5Y14;
		m_X6Y15 = m_X5Y15;
	}
	if( i >= 6 )
	{
		m_X5Y0 = m_X4Y0;
		m_X5Y1 = m_X4Y1;
		m_X5Y2 = m_X4Y2;
		m_X5Y3 = m_X4Y3;
		m_X5Y4 = m_X4Y4;
		m_X5Y5 = m_X4Y5;
		m_X5Y6 = m_X4Y6;
		m_X5Y7 = m_X4Y7;
		m_X5Y8 = m_X4Y8;
		m_X5Y9 = m_X4Y9;
		m_X5Y10 = m_X4Y10;
		m_X5Y11 = m_X4Y11;
		m_X5Y12 = m_X4Y12;
		m_X5Y13 = m_X4Y13;
		m_X5Y14 = m_X4Y14;
		m_X5Y15 = m_X4Y15;
	}
	if( i >= 5 )
	{
		m_X4Y0 = m_X3Y0;
		m_X4Y1 = m_X3Y1;
		m_X4Y2 = m_X3Y2;
		m_X4Y3 = m_X3Y3;
		m_X4Y4 = m_X3Y4;
		m_X4Y5 = m_X3Y5;
		m_X4Y6 = m_X3Y6;
		m_X4Y7 = m_X3Y7;
		m_X4Y8 = m_X3Y8;
		m_X4Y9 = m_X3Y9;
		m_X4Y10 = m_X3Y10;
		m_X4Y11 = m_X3Y11;
		m_X4Y12 = m_X3Y12;
		m_X4Y13 = m_X3Y13;
		m_X4Y14 = m_X3Y14;
		m_X4Y15 = m_X3Y15;
	}

	m_X3Y0 = m_X2Y0;
	m_X3Y1 = m_X2Y1;
	m_X3Y2 = m_X2Y2;
	m_X3Y3 = m_X2Y3;
	m_X3Y4 = m_X2Y4;
	m_X3Y5 = m_X2Y5;
	m_X3Y6 = m_X2Y6;
	m_X3Y7 = m_X2Y7;
	m_X3Y8 = m_X2Y8;
	m_X3Y9 = m_X2Y9;
	m_X3Y10 = m_X2Y10;
	m_X3Y11 = m_X2Y11;
	m_X3Y12 = m_X2Y12;
	m_X3Y13 = m_X2Y13;
	m_X3Y14 = m_X2Y14;
	m_X3Y15 = m_X2Y15;
	
	m_X2Y0 = m_X1Y0;
	m_X2Y1 = m_X1Y1;
	m_X2Y2 = m_X1Y2;
	m_X2Y3 = m_X1Y3;
	m_X2Y4 = m_X1Y4;
	m_X2Y5 = m_X1Y5;
	m_X2Y6 = m_X1Y6;
	m_X2Y7 = m_X1Y7;
	m_X2Y8 = m_X1Y8;
	m_X2Y9 = m_X1Y9;
	m_X2Y10 = m_X1Y10;
	m_X2Y11 = m_X1Y11;
	m_X2Y12 = m_X1Y12;
	m_X2Y13 = m_X1Y13;
	m_X2Y14 = m_X1Y14;
	m_X2Y15 = m_X1Y15;

	m_X1Y0 = m_X0Y0;
	m_X1Y1 = m_X0Y1;
	m_X1Y2 = m_X0Y2;
	m_X1Y3 = m_X0Y3;
	m_X1Y4 = m_X0Y4;
	m_X1Y5 = m_X0Y5;
	m_X1Y6 = m_X0Y6;
	m_X1Y7 = m_X0Y7;
	m_X1Y8 = m_X0Y8;
	m_X1Y9 = m_X0Y9;
	m_X1Y10 = m_X0Y10;
	m_X1Y11 = m_X0Y11;
	m_X1Y12 = m_X0Y12;
	m_X1Y13 = m_X0Y13;
	m_X1Y14 = m_X0Y14;
	m_X1Y15 = m_X0Y15;

	m_X0Y0 = false;
	m_X0Y1 = false;
	m_X0Y2 = false;
	m_X0Y3 = false;
	m_X0Y4 = false;
	m_X0Y5 = false;
	m_X0Y6 = false;
	m_X0Y7 = false;
	m_X0Y8 = false;
	m_X0Y9 = false;
	m_X0Y10 = false;
	m_X0Y11 = false;
	m_X0Y12 = false;
	m_X0Y13 = false;
	m_X0Y14 = false;
	m_X0Y15 = false;

	UpdateData(false);	
}
