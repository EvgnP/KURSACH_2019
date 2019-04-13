// CMyTab_a.cpp: файл реализации
//

#include "stdafx.h"
#include "MFCApplication2.h"
#include "CMyTab_a.h"
#include "afxdialogex.h"


// Диалоговое окно CMyTab_a

IMPLEMENT_DYNAMIC(CMyTab_a, CDialogEx)

CMyTab_a::CMyTab_a(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_TAB_a, pParent)
{

}

CMyTab_a::~CMyTab_a()
{
}

void CMyTab_a::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMyTab_a, CDialogEx)
END_MESSAGE_MAP()


// Обработчики сообщений CMyTab_a
