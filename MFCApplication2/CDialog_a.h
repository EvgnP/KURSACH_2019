#pragma once


// Диалоговое окно CDialog_a

class CDialog_a : public CDialogEx
{
	DECLARE_DYNAMIC(CDialog_a)

public:
	CDialog_a(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~CDialog_a();

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PROPPAGE_SMALL_a };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonaccepta();
};
