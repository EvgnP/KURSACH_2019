// CDialog_c.cpp: файл реализации
//

#include "stdafx.h"
#include "MFCApplication2.h"
#include "CDialog_c.h"
#include "afxdialogex.h"


// Диалоговое окно CDialog_c

IMPLEMENT_DYNAMIC(CDialog_c, CDialogEx)

CDialog_c::CDialog_c(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_PROPPAGE_SMALL_c, pParent)
{

}

CDialog_c::~CDialog_c()
{
}

void CDialog_c::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDialog_c, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_accept_c, &CDialog_c::OnBnClickedButtonacceptc)
END_MESSAGE_MAP()


// Обработчики сообщений CDialog_c


void CDialog_c::OnBnClickedButtonacceptc()
{
	CDialogEx::OnCancel();
}
