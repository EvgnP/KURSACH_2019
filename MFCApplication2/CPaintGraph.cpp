#include "stdafx.h"
#include "MFCApplication2.h"
#include "CPaintGraph.h"
#include <iostream>
#include <vector>
#include "MFCApplication2Dlg.h"

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

	/*CBrush c;
	c.CreateSolidBrush(COLORREF RGB(255,155,255));
	dc.SelectObject(&c);*/



	dc.MoveTo(0,65);
	dc.LineTo(270, 65);

	dc.MoveTo(135, 0);
	dc.LineTo(135, 130);

	dc.MoveTo(0,65);

	std::vector<POINT> vecPT;

	CMFCApplication2Dlg* pD = (CMFCApplication2Dlg*)AfxGetMainWnd();
	if (!pD)
		return;
	pD->m_calc.GetPoints(vecPT);
	CPen pR;
	pR.CreatePen(PS_SOLID, 2, RGB(158, 0, 0));
	HGDIOBJ pOld = dc.SelectObject(pR);

	for (int i = 0; i < vecPT.size(); i++)
	{
		if (!i)
			dc.MoveTo(vecPT[i]);
		else
			dc.LineTo(vecPT[i]);
	}


	dc.SelectObject(pOld);

}
