#pragma once
#include <afxwin.h>
class CPaintGraph :
	public CStatic
{
	//DECLARE_DYNAMIC(CPaintGraph)

public:
	CPaintGraph();
	~CPaintGraph();
	DECLARE_MESSAGE_MAP()
	afx_msg void OnPaint();
};

