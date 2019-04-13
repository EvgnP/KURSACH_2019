#include "stdafx.h"
#include "CCalc.h"


CCalc::CCalc()
	:m_pt0(POINT())
	, m_scaleX(10)
	, m_scaleY(10)
{
	m_pt0.x = 135;
	m_pt0.y = 65;
}


CCalc::~CCalc()
{
}

void CCalc::SetScale(int scale,int XY) {
	if (XY)
		m_scaleY = scale;
	else
		m_scaleX = scale;
}


bool CCalc::GetPoints(std::vector<POINT> & vecPT)
{
	vecPT.clear();
	for (int i = -150; i < 150; i++)
	{
		int xi = m_pt0.x + i*m_scaleX;
		//double arg = (-m_pt0.x + xi) / m_scaleX;
		int yi = m_pt0.y - sin(i) * m_scaleY;
		POINT pt;
		if (xi < 0) {
			pt.x = 0;
			pt.y = m_pt0.y - sin((- m_pt0.x) / m_scaleX) * m_scaleY;
		}
		else
			if (xi > 270) {
				pt.x = 270;
				pt.y = m_pt0.y - sin((270-m_pt0.x)/m_scaleX) * m_scaleY;
			}
			else {
				pt.x = xi;
				pt.y = yi;
			}
		
		vecPT.push_back(pt);
	}
	return false;
}
