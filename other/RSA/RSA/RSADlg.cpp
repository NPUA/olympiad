
// RSADlg.cpp : implementation file
//

#include "stdafx.h"
#include "RSA.h"
#include "RSADlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CRSADlg dialog



CRSADlg::CRSADlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_RSA_DIALOG, pParent)
	, x1(0)
	, x2(0)
	, x3(0)
	, x4(0)
	, x5(0)
	, x6(0)
	, p(17)
	, q(11)
	, n(0)
	, fi(0)
	, e1(0)
	, e2(0)
	, e3(0)
	, e4(0)
	, e5(0)
	, e6(0)
	, e7(0)
	, e(0)
	, d(0)
	, x(0)
	, y(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CRSADlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x1);
	DDX_Text(pDX, IDC_EDIT2, x2);
	DDX_Text(pDX, IDC_EDIT5, x3);
	DDX_Text(pDX, IDC_EDIT3, x4);
	DDX_Text(pDX, IDC_EDIT4, x5);
	DDX_Text(pDX, IDC_EDIT6, x6);
	DDX_Text(pDX, IDC_EDIT7, p);
	DDX_Text(pDX, IDC_EDIT8, q);
	DDX_Text(pDX, IDC_EDIT9, n);
	DDX_Text(pDX, IDC_EDIT11, fi);
	DDX_Text(pDX, IDC_EDIT13, e1);
	DDX_Text(pDX, IDC_EDIT14, e2);
	DDX_Text(pDX, IDC_EDIT15, e3);
	DDX_Text(pDX, IDC_EDIT16, e4);
	DDX_Text(pDX, IDC_EDIT17, e5);
	DDX_Text(pDX, IDC_EDIT18, e6);
	DDX_Text(pDX, IDC_EDIT19, e7);
	DDX_Text(pDX, IDC_EDIT10, e);
	DDX_Text(pDX, IDC_EDIT12, d);
}

BEGIN_MESSAGE_MAP(CRSADlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CRSADlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CRSADlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CRSADlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CRSADlg::OnBnClickedButton4)
	ON_EN_CHANGE(IDC_EDIT1, &CRSADlg::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON5, &CRSADlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CRSADlg::OnBnClickedButton6)
	ON_EN_CHANGE(IDC_EDIT18, &CRSADlg::OnEnChangeEdit18)
END_MESSAGE_MAP()


// CRSADlg message handlers

BOOL CRSADlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CRSADlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CRSADlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

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
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CRSADlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

int _GCD(int a,int b) {
	
	if (b == 0) {
		return (a);
	}
	else {
		return(_GCD(b, a%b));
	}
}

void CRSADlg::OnBnClickedButton1()
{
	UpdateData(true);
	x3 = _GCD(x1, x2);
	UpdateData(false);

}

int ext_gcd(int a, int b, int &x , int &y)
{
	if (a == 0) {
		x = 0;
		y = 1;
		return(b);
	}
	else {
		int a1, b1, tmp;
		tmp = b%a;
		int d = ext_gcd(tmp, a, a1, b1);
		x = b1 - (b / a)*a1;
		y = a1;
		return d;
	}

}
void CRSADlg::OnBnClickedButton2()
{
	UpdateData(true);
	x3 = _GCD(x1, x2);
	ext_gcd(x1, x2, x4, x5);
	UpdateData(false);

}


void CRSADlg::OnBnClickedButton3()
{
	UpdateData(true);
	x3 = _GCD(x1, x2);
	ext_gcd(x1, x2, x4, x5);
	if (x3 == 1) {
		x6 = (x4%x2 + x2) % x2;
	}
	UpdateData(false);


}
bool parz(int a) {
	bool t = false;
	if (a != 1) {
		t = true;
		for (int i = 2;i < (a / 2) + 1;i++) {
			if (a%i == 0) {
				t = false;
				break;
			}
		}
	}
	return t;
}
void CRSADlg::OnBnClickedButton4()
{
	UpdateData(true);
	n = p*q;
	fi = (p - 1)*(q - 1);
	int i;
	bool t = true;
	for (i = 2;i < fi && t;i++) {
		if (parz(i)) {
			if (fi%i != 0) {
				t = false;
			}
		}
	}
	e = i-1;
	ext_gcd(e, fi, x, y);
//	d = (x%fi + fi) % fi;
	d = x;
	if (d < 0)
		d = d + fi;

	e1 = e;
	e2 = n;
	e3 = d;
	e4 = n;
	UpdateData(false);
	
}



void CRSADlg::OnEnChangeEdit1()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
}
/*void VS_CarrierNet::generateKeys()
{
	m_rsa = RSA_generate_key(KEY_LENGTH, PUB_EXP, nullptr, nullptr);

	// To get the C-string PEM form:
	BIO *pri = BIO_new(BIO_s_mem());
	BIO *pub = BIO_new(BIO_s_mem());

	PEM_write_bio_RSAPrivateKey(pri, m_rsa, nullptr, nullptr, 0, nullptr, nullptr);
	PEM_write_bio_RSAPublicKey(pub, m_rsa);

	int pri_len = BIO_pending(pri);
	int pub_len = BIO_pending(pub);

	m_privateKey = new char[pri_len + 1];
	m_publicKey = new char[pub_len + 1];

	BIO_read(pri, m_privateKey, pri_len);
	BIO_read(pub, m_publicKey, pub_len);

	m_privateKey[pri_len] = '\0';
	m_publicKey[pub_len] = '\0';

	BIO_free_all(pub);
	BIO_free_all(pri);

	std::cout << "\n\n\n" << m_privateKey << "\n\n\n";
}*/

void CRSADlg::OnBnClickedButton5()
{
	UpdateData(true);
	e6 = 1;
	for (int i = 0;i < e1;i++) {
		e6 = e6*e5%n;
	}
	UpdateData(false);


}


void CRSADlg::OnBnClickedButton6()
{
	UpdateData(true);
	e7 = 1;
	for (int i = 0;i < e3;i++) {
		e7 = e6*e7%n;
	}
	UpdateData(false);
}





void CRSADlg::OnEnChangeEdit18()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
}
