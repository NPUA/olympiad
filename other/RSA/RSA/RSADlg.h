
// RSADlg.h : header file
//

#pragma once


// CRSADlg dialog
class CRSADlg : public CDialogEx
{
// Construction
public:
	CRSADlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_RSA_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	int x1;
	int x2;
	int x3;
	int x4;
	int x5;
	int x6;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	int p;
	int q;
	int n;
	int fi;
	int e1;
	int e2;
	int e3;
	int e4;
	int e5;
	int e6;
	int e7;
	afx_msg void OnBnClickedButton4();
	int e;
	int d;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	int x;
	int y;
	afx_msg void OnEnChangeEdit18();
};
