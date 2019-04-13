#pragma once


// Диалоговое окно CMyTab_c

class CMyTab_c : public CDialogEx
{
	DECLARE_DYNAMIC(CMyTab_c)

public:
	CMyTab_c(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~CMyTab_c();

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TAB_c };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
};
