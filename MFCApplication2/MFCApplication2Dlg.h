
// MFCApplication2Dlg.h : файл заголовка
//

#pragma once


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
	double m_val;

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
		//ПРИМЕР ВЗАИМОДЕЙСТВИЯ
		CWnd* pWn = GetDlgItem(IDC_STATIC_N);

		if (pWn) {

			CString strA;

			pWn->SetFont(&m_Font);

			pWn->GetWindowText(strA);

			strA += _T(":");

			pWn->SetWindowText(strA);

		}

		pWn = GetDlgItem(IDC_STATIC_f);

		if (pWn) {

			CString strA;

			pWn->SetFont(&m_Font);

			pWn->GetWindowText(strA);

			strA += _T(":");

			pWn->SetWindowText(strA);

		}

		pWn = GetDlgItem(IDC_STATIC_a);

		if (pWn) {

			CString strA;

			pWn->SetFont(&m_Font);

			pWn->GetWindowText(strA);

			strA += _T(":");

			pWn->SetWindowText(strA);

		}

		pWn = GetDlgItem(IDC_STATIC_c);

		if (pWn) {

			CString strA;

			pWn->SetFont(&m_Font);

			pWn->GetWindowText(strA);

			strA += _T(":");

			pWn->SetWindowText(strA);

		}


		return TRUE;  // возврат значения TRUE, если фокус не передан элементу управления
	}

	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton1();
};
