// CMyTab_b.cpp: файл реализации
//

#include "stdafx.h"
#include "MFCApplication2.h"
#include "CMyTab_b.h"
#include "afxdialogex.h"


// Диалоговое окно CMyTab_b

IMPLEMENT_DYNAMIC(CMyTab_b, CDialogEx)

CMyTab_b::CMyTab_b(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_TAB_b, pParent)
{

}

CMyTab_b::~CMyTab_b()
{
}

void CMyTab_b::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMyTab_b, CDialogEx)
END_MESSAGE_MAP()


// Обработчики сообщений CMyTab_b
