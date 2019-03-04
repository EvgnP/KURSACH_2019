// CDialog_f.cpp: файл реализации
//

#include "stdafx.h"
#include "MFCApplication2.h"
#include "CDialog_f.h"
#include "afxdialogex.h"
#include <String>
#include "MFCApplication2Dlg.h"


// Диалоговое окно CDialog_f

IMPLEMENT_DYNAMIC(CDialog_f, CDialogEx)

CDialog_f::CDialog_f(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_PROPPAGE_SMALL_f, pParent)
{

}

CDialog_f::~CDialog_f()
{
}

void CDialog_f::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDialog_f, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_accept_f, &CDialog_f::OnBnClickedButtonacceptf)
END_MESSAGE_MAP()


// Обработчики сообщений CDialog_f


void CDialog_f::OnBnClickedButtonacceptf()
{
	CDialogEx::OnCancel();
}



