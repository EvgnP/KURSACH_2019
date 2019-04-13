
// MFCApplication2Dlg.cpp : файл реализации
//

#include "stdafx.h"
#include "MFCApplication2.h"
#include "MFCApplication2Dlg.h"
#include "afxdialogex.h"
#include "CDialog_f.h"
#include "CDialog_a.h"
#include "CDialog_c.h"
#include "CCalc.h"
#include "resource.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Диалоговое окно CAboutDlg используется для описания сведений о приложении

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

// Реализация
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


// диалоговое окно CMFCApplication2Dlg



CMFCApplication2Dlg::CMFCApplication2Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MFCAPPLICATION2_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCApplication2Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_SLIDER_CHANGE_Y, m_Slider_Y);
	DDX_Control(pDX, IDC_SLIDER_CHANGE_X, m_Slider_X);
	DDX_Control(pDX, IDC_TAB_PARAMETERS, m_tabctrl);
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
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_SLIDER_CHANGE_Y, &CMFCApplication2Dlg::OnNMCustomdrawSliderChangeY)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_SLIDER_CHANGE_X, &CMFCApplication2Dlg::OnNMCustomdrawSliderChangeX)
	ON_NOTIFY(TCN_SELCHANGE, IDC_TAB_PARAMETERS, &CMFCApplication2Dlg::OnTcnSelchangeTabParameters)
END_MESSAGE_MAP()


// обработчики сообщений CMFCApplication2Dlg

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

// При добавлении кнопки свертывания в диалоговое окно нужно воспользоваться приведенным ниже кодом,
//  чтобы нарисовать значок.  Для приложений MFC, использующих модель документов или представлений,
//  это автоматически выполняется рабочей областью.

void CMFCApplication2Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // контекст устройства для рисования

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Выравнивание значка по центру клиентского прямоугольника
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Нарисуйте значок
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// Система вызывает эту функцию для получения отображения курсора при перемещении
//  свернутого окна.
HCURSOR CMFCApplication2Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMFCApplication2Dlg::OnEnChangeEditParametr_N()
{
	// TODO:  Если это элемент управления RICHEDIT, то элемент управления не будет
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Добавьте код элемента управления
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
	// TODO: добавьте свой код обработчика уведомлений
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




void CMFCApplication2Dlg::OnNMCustomdrawSliderChangeY(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	// TODO: добавьте свой код обработчика уведомлений
	/*this->SetScrollRange(0,0,30,1);
	this->SetScrollPos(0,0,1);*/
	

	//changeY.SetScale(30 - m_Slider_Y.GetPos(), 1);
	m_calc.m_scaleY = 30 - m_Slider_Y.GetPos();

	CWnd *pwn = GetDlgItem(IDC_PAINTER_SIGNAL);

	pwn->Invalidate();
	
	pwn = GetDlgItem(IDC_PAINTER_DPF);

	pwn->Invalidate();

	*pResult = 0;
}


void CMFCApplication2Dlg::OnNMCustomdrawSliderChangeX(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	m_calc.m_scaleX = 30 - m_Slider_X.GetPos();

	CWnd *pwn = GetDlgItem(IDC_PAINTER_SIGNAL);

	pwn->Invalidate();

	pwn = GetDlgItem(IDC_PAINTER_DPF);

	pwn->Invalidate();
	*pResult = 0;
}




void CMFCApplication2Dlg::OnTcnSelchangeTabParameters(NMHDR *pNMHDR, LRESULT *pResult)
{
	// TODO: добавьте свой код обработчика уведомлений
	*pResult = 0;

	int iSel = m_tabctrl.GetCurSel();

	if (iSel == 0) {
		
		m_tab_a.ShowWindow(SW_SHOW);
		m_tab_b.ShowWindow(SW_HIDE);
		m_tab_c.ShowWindow(SW_HIDE);

	}
	else if (iSel == 1) {
		
		m_tab_a.ShowWindow(SW_HIDE);
		m_tab_b.ShowWindow(SW_SHOW);
		m_tab_c.ShowWindow(SW_HIDE);

	}
	else if (iSel == 2) {

		m_tab_a.ShowWindow(SW_HIDE);
		m_tab_b.ShowWindow(SW_HIDE);
		m_tab_c.ShowWindow(SW_SHOW);

	}
}
