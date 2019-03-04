#pragma once


// Диалоговое окно CDialog_c

class CDialog_c : public CDialogEx
{
	DECLARE_DYNAMIC(CDialog_c)

public:
	CDialog_c(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~CDialog_c();

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PROPPAGE_SMALL_c };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonacceptc();
};
