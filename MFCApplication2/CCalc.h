#pragma once
#include <vector>
class CCalc
{
public:
	CCalc();
	~CCalc();
	POINT m_pt0;
	double m_scaleX;
	double m_scaleY;
	bool GetPoints(std::vector<POINT> & m_vecPT);
	void SetScale(int scale, int XY);
};

