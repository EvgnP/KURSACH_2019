
// MFCApplication2Dlg.h : файл заголовка
//

#pragma once

#include "CPaintGraph.h"
#include "CCalc.h"
#include "CMyTab_a.h"
#include "CMyTab_b.h"
#include "CMyTab_c.h"




// диалоговое окно CMFCApplication2Dlg
class CMFCApplication2Dlg : public CDialogEx
{
// Создание
public:
	CMFCApplication2Dlg(CWnd* pParent = NULL);	// стандартный конструктор

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION2_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// поддержка DDX/DDV

public:

	CFont m_Font;
	CPaintGraph graph_signal;
	CPaintGraph graph_DPF;

// Реализация
protected:
	HICON m_hIcon;

	// Созданные функции схемы сообщений
	virtual BOOL OnInitDialog()
	{
		CDialogEx::OnInitDialog();

		// Добавление пункта "О программе..." в системное меню.

		// IDM_ABOUTBOX должен быть в пределах системной команды.
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

		// Задает значок для этого диалогового окна.  Среда делает это автоматически,
		//  если главное окно приложения не является диалоговым
		SetIcon(m_hIcon, TRUE);			// Крупный значок
		SetIcon(m_hIcon, FALSE);		// Мелкий значок

										//шрифт изменение

		m_Font.CreateFontW(20, 0, 0, 0, FW_BOLD, 0, 0, 0, 0, 0, 0, 0, 0, _T("Comic Sans"));

		// TODO: добавьте дополнительную инициализацию

		CTabCtrl *pTabCtrl = (CTabCtrl *)GetDlgItem(IDC_TAB_PARAMETERS);
		TCITEM item_a, item_b, item_c;

		m_tab_c.Create(IDD_TAB_a, pTabCtrl);

	
		item_c.mask = TCIF_TEXT | TCIF_PARAM;
		item_c.lParam = (LPARAM)&m_tab_c;
		item_c.pszText = _T("c");
		pTabCtrl->InsertItem(0,&item_c);

		CRect rcItem_c;
		pTabCtrl->GetItemRect(0,&rcItem_c);
		m_tab_c.SetWindowPos(NULL, rcItem_c.left, rcItem_c.bottom + 1, 0, 0, SWP_NOSIZE | SWP_NOZORDER);


		m_tab_b.Create(IDD_TAB_b, pTabCtrl);

		item_b.mask = TCIF_TEXT | TCIF_PARAM;
		item_b.lParam = (LPARAM)&m_tab_b;
		item_b.pszText = _T("b");
		pTabCtrl->InsertItem(0, &item_b);

		CRect rcItem_b;
		pTabCtrl->GetItemRect(0, &rcItem_b);
		m_tab_b.SetWindowPos(NULL, rcItem_b.left, rcItem_b.bottom + 1, 0, 0, SWP_NOSIZE | SWP_NOZORDER);


		m_tab_a.Create(IDD_TAB_c, pTabCtrl);

		item_a.mask = TCIF_TEXT | TCIF_PARAM;
		item_a.lParam = (LPARAM)&m_tab_a;
		item_a.pszText = _T("a");
		pTabCtrl->InsertItem(0, &item_a);

		CRect rcItem_a;
		pTabCtrl->GetItemRect(0, &rcItem_a);
		m_tab_a.SetWindowPos(NULL, rcItem_a.left, rcItem_a.bottom + 1, 0, 0, SWP_NOSIZE | SWP_NOZORDER);

		
		m_tab_a.ShowWindow(SW_HIDE);
		m_tab_b.ShowWindow(SW_HIDE);
		m_tab_c.ShowWindow(SW_SHOW);

		//ПРИМЕР ВЗАИМОДЕЙСТВИЯ
		CWnd* pWn = GetDlgItem(IDC_STATIC_N);
		CString strA;

		if (pWn) {

			

			pWn->SetFont(&m_Font);

			pWn->GetWindowText(strA);

			strA += _T(":");

			pWn->SetWindowText(strA);

		}

		pWn = GetDlgItem(IDC_STATIC_f);

		if (pWn) {

			pWn->SetFont(&m_Font);

			pWn->GetWindowText(strA);

			strA += _T(":");

			pWn->SetWindowText(strA);

		}

		pWn = GetDlgItem(IDC_STATIC_a);

		if (pWn) {

			pWn->SetFont(&m_Font);

			pWn->GetWindowText(strA);

			strA += _T(":");

			pWn->SetWindowText(strA);

		}

		pWn = GetDlgItem(IDC_STATIC_c);

		if (pWn) {

			pWn->SetFont(&m_Font);

			pWn->GetWindowText(strA);

			strA += _T(":");

			pWn->SetWindowText(strA);

		}

		pWn = GetDlgItem(IDC_STATIC_CHANGE_Y);

		if (pWn) {

			pWn->SetFont(&m_Font);

			/*pWn->GetWindowText(strA);

			strA += _T(":");*/

			//pWn->SetWindowText(strA);

		}

		pWn = GetDlgItem(IDC_STATIC_CHANGE_X);

		if (pWn) {

			pWn->SetFont(&m_Font);

			/*pWn->GetWindowText(strA);

			strA += _T(":");*/

			//pWn->SetWindowText(strA);

		}
		m_Slider_Y.SetRange(1,30,0);
		m_Slider_Y.SetPos(30);

		m_Slider_X.SetRange(1, 29, 0);

		graph_signal.SubclassDlgItem(IDC_PAINTER_SIGNAL, this);

		graph_DPF.SubclassDlgItem(IDC_PAINTER_DPF, this);

		

		return TRUE;  // возврат значения TRUE, если фокус не передан элементу управления
	}

	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEditParametr_N();
	afx_msg void OnBnClickedRefreshGraph();
	afx_msg void OnBnClickedParametr_f();
	afx_msg void OnBnClickedParametr_a();
	afx_msg void OnBnClickedParametr_c();
	CCalc m_calc;
	CMyTab_a m_tab_a;
	CMyTab_b m_tab_b;
	CMyTab_c m_tab_c;
	afx_msg void OnNMCustomdrawSliderChangeY(NMHDR *pNMHDR, LRESULT *pResult);
	CSliderCtrl m_Slider_Y;
	afx_msg void OnNMCustomdrawSliderChangeX(NMHDR *pNMHDR, LRESULT *pResult);
	CSliderCtrl m_Slider_X;
	afx_msg void OnTcnSelchangeTabParameters(NMHDR *pNMHDR, LRESULT *pResult);
	CTabCtrl m_tabctrl;
};
