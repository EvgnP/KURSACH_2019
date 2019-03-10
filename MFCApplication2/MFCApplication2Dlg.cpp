
// MFCApplication2Dlg.cpp : ���� ����������
//

#include "stdafx.h"
#include "MFCApplication2.h"
#include "MFCApplication2Dlg.h"
#include "afxdialogex.h"
#include "CDialog_f.h"
#include "CDialog_a.h"
#include "CDialog_c.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ���������� ���� CAboutDlg ������������ ��� �������� �������� � ����������

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// ������ ����������� ����
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // ��������� DDX/DDV

// ����������
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


// ���������� ���� CMFCApplication2Dlg



CMFCApplication2Dlg::CMFCApplication2Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MFCAPPLICATION2_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCApplication2Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMFCApplication2Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_EN_CHANGE(IDC_EDIT_parametr_N, &CMFCApplication2Dlg::OnEnChangeEditParametr_N)
	ON_BN_CLICKED(IDC_BUTTON_REFRESH_GRAPH, &CMFCApplication2Dlg::OnBnClickedRefreshGraph)
	ON_BN_CLICKED(IDC_BUTTON_parametr_f, &CMFCApplication2Dlg::OnBnClickedParametr_f)
	ON_BN_CLICKED(IDC_BUTTON_parametr_a, &CMFCApplication2Dlg::OnBnClickedParametr_a)
	ON_BN_CLICKED(IDC_BUTTON_parametr_c, &CMFCApplication2Dlg::OnBnClickedParametr_c)
END_MESSAGE_MAP()


// ����������� ��������� CMFCApplication2Dlg

void CMFCApplication2Dlg::OnSysCommand(UINT nID, LPARAM lParam)
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

// ��� ���������� ������ ����������� � ���������� ���� ����� ��������������� ����������� ���� �����,
//  ����� ���������� ������.  ��� ���������� MFC, ������������ ������ ���������� ��� �������������,
//  ��� ������������� ����������� ������� ��������.

void CMFCApplication2Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // �������� ���������� ��� ���������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ������������ ������ �� ������ ����������� ��������������
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ��������� ������
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// ������� �������� ��� ������� ��� ��������� ����������� ������� ��� �����������
//  ���������� ����.
HCURSOR CMFCApplication2Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMFCApplication2Dlg::OnEnChangeEditParametr_N()
{
	// TODO:  ���� ��� ������� ���������� RICHEDIT, �� ������� ���������� �� �����
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  �������� ��� �������� ����������
	/*CWnd* pWn1 = GetDlgItem(IDC_STATIC);
	
	CWnd* pWn = GetDlgItem(IDC_EDIT1);

	if(pWn) {
		
		CString strA;

		pWn->SetFont(&m_Font);

		pWn->GetWindowText(strA);

		m_val = atof(CW2A(strA));

		pWn1->SetWindowText(strA);

	
	}*/
}


void CMFCApplication2Dlg::OnBnClickedRefreshGraph()
{
	// TODO: �������� ���� ��� ����������� �����������
	CDialogEx::OnCancel();
}



void CMFCApplication2Dlg::OnBnClickedParametr_f()
{

	CDialog_f dlg_f;

	dlg_f.DoModal();

}


void CMFCApplication2Dlg::OnBnClickedParametr_a()
{
	CDialog_a dlg_a;

	dlg_a.DoModal();
}


void CMFCApplication2Dlg::OnBnClickedParametr_c()
{
	CDialog_c dlg_c;

	dlg_c.DoModal();
}

