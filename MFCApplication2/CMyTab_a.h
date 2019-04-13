#pragma once


// Диалоговое окно CMyTab_a

class CMyTab_a : public CDialogEx
{
	DECLARE_DYNAMIC(CMyTab_a)

public:
	CMyTab_a(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~CMyTab_a();

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TAB_a };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
};
