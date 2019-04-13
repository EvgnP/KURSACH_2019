#pragma once


// Диалоговое окно CMyTab_b

class CMyTab_b : public CDialogEx
{
	DECLARE_DYNAMIC(CMyTab_b)

public:
	CMyTab_b(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~CMyTab_b();

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TAB_b };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
};
