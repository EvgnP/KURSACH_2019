// CDialog_a.cpp: файл реализации
//

#include "stdafx.h"
#include "MFCApplication2.h"
#include "CDialog_a.h"
#include "afxdialogex.h"


// Диалоговое окно CDialog_a

IMPLEMENT_DYNAMIC(CDialog_a, CDialogEx)

CDialog_a::CDialog_a(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_PROPPAGE_SMALL_a, pParent)
{

}

CDialog_a::~CDialog_a()
{
}

void CDialog_a::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDialog_a, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_accept_a, &CDialog_a::OnBnClickedButtonaccepta)
END_MESSAGE_MAP()


// Обработчики сообщений CDialog_a


void CDialog_a::OnBnClickedButtonaccepta()
{
	CDialogEx::OnCancel();
}
