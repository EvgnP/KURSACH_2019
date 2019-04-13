// CMyTab_c.cpp: файл реализации
//

#include "stdafx.h"
#include "MFCApplication2.h"
#include "CMyTab_c.h"
#include "afxdialogex.h"


// Диалоговое окно CMyTab_c

IMPLEMENT_DYNAMIC(CMyTab_c, CDialogEx)

CMyTab_c::CMyTab_c(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_TAB_c, pParent)
{

}

CMyTab_c::~CMyTab_c()
{
}

void CMyTab_c::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMyTab_c, CDialogEx)
END_MESSAGE_MAP()


// Обработчики сообщений CMyTab_c
