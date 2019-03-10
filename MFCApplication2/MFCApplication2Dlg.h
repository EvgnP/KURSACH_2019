
// MFCApplication2Dlg.h : ���� ���������
//

#pragma once

#include "CPaintGraph.h"


// ���������� ���� CMFCApplication2Dlg
class CMFCApplication2Dlg : public CDialogEx
{
// ��������
public:
	CMFCApplication2Dlg(CWnd* pParent = NULL);	// ����������� �����������

// ������ ����������� ����
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION2_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// ��������� DDX/DDV

public:

	CFont m_Font;
	CPaintGraph graph_signal;

	CPaintGraph graph_DPF;

// ����������
protected:
	HICON m_hIcon;

	// ��������� ������� ����� ���������
	virtual BOOL OnInitDialog()
	{
		CDialogEx::OnInitDialog();

		// ���������� ������ "� ���������..." � ��������� ����.

		// IDM_ABOUTBOX ������ ���� � �������� ��������� �������.
		ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
		ASSERT(IDM_ABOUTBOX < 0xF000);

		CMenu* pSysMenu = GetSystemMenu(FALSE);
		if (pSysMenu != NULL)
		{
			BOOL bNameValid;
			CString strAboutMenu;
			bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
			ASSERT(bNameValid);
			if (!strAboutMenu.IsEmpty())
			{
				pSysMenu->AppendMenu(MF_SEPARATOR);
				pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
			}
		}

		// ������ ������ ��� ����� ����������� ����.  ����� ������ ��� �������������,
		//  ���� ������� ���� ���������� �� �������� ����������
		SetIcon(m_hIcon, TRUE);			// ������� ������
		SetIcon(m_hIcon, FALSE);		// ������ ������

										//����� ���������

		m_Font.CreateFontW(20, 0, 0, 0, FW_BOLD, 0, 0, 0, 0, 0, 0, 0, 0, _T("Comic Sans"));

		// TODO: �������� �������������� �������������
		//������ ��������������
		CWnd* pWn = GetDlgItem(IDC_STATIC_N);
		CString strA;

		if (pWn) {

			

			pWn->SetFont(&m_Font);

			pWn->GetWindowText(strA);

			strA += _T(":");

			pWn->SetWindowText(strA);

		}

		pWn = GetDlgItem(IDC_STATIC_f);

		if (pWn) {

			pWn->SetFont(&m_Font);

			pWn->GetWindowText(strA);

			strA += _T(":");

			pWn->SetWindowText(strA);

		}

		pWn = GetDlgItem(IDC_STATIC_a);

		if (pWn) {

			pWn->SetFont(&m_Font);

			pWn->GetWindowText(strA);

			strA += _T(":");

			pWn->SetWindowText(strA);

		}

		pWn = GetDlgItem(IDC_STATIC_c);

		if (pWn) {

			pWn->SetFont(&m_Font);

			pWn->GetWindowText(strA);

			strA += _T(":");

			pWn->SetWindowText(strA);

		}


		graph_signal.SubclassDlgItem(IDC_PAINTER_SIGNAL, this);

		graph_DPF.SubclassDlgItem(IDC_PAINTER_DPF, this);


		return TRUE;  // ������� �������� TRUE, ���� ����� �� ������� �������� ����������
	}

	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEditParametr_N();
	afx_msg void OnBnClickedRefreshGraph();
	afx_msg void OnBnClickedParametr_f();
	afx_msg void OnBnClickedParametr_a();
	afx_msg void OnBnClickedParametr_c();
};
