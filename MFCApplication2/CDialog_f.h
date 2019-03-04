#pragma once


// Диалоговое окно CDialog_f

class CDialog_f : public CDialogEx
{
	DECLARE_DYNAMIC(CDialog_f)

public:
	CDialog_f(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~CDialog_f();


public:

	CFont m_Font;
	

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PROPPAGE_SMALL_f };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonacceptf();
};



