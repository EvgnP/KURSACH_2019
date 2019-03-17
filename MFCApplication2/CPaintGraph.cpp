#include "stdafx.h"
#include "MFCApplication2.h"
#include "CPaintGraph.h"
#include <iostream>

using namespace std;


//IMPLEMENT_DYNAMIC(CPaintGraph,CStatic);

CPaintGraph::CPaintGraph()
{



}


CPaintGraph::~CPaintGraph()
{
}

BEGIN_MESSAGE_MAP(CPaintGraph, CStatic)
	ON_WM_PAINT()
END_MESSAGE_MAP()


void CPaintGraph::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: добавьте свой код обработчика сообщений
					   // Не вызывать CStatic::OnPaint() для сообщений рисования
	CRect rc;
	GetClientRect(&rc);

	dc.FillSolidRect(rc, RGB(255,255,255));

	CBrush c;
	c.CreateSolidBrush(COLORREF RGB(255,155,255));
	dc.SelectObject(&c);



	dc.MoveTo(0,65);
	dc.LineTo(270, 65);

	dc.MoveTo(135, 0);
	dc.LineTo(135, 130);

	/*dc.LineTo(270,130);
	dc.LineTo(0,130);
	dc.LineTo(0, 0);*/


	


	
	

}
