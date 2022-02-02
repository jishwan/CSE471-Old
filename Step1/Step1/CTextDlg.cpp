// CTextDlg.cpp : implementation file
//

#include "pch.h"
#include "Step1.h"
#include "CTextDlg.h"
#include "afxdialogex.h"


// CTextDlg dialog

IMPLEMENT_DYNAMIC(CTextDlg, CDialog)

CTextDlg::CTextDlg(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_TEXTDLG, pParent)
	, m_y(0)
	, m_x(0)
	, m_text(_T(""))
{

}

CTextDlg::~CTextDlg()
{
}

void CTextDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_Y, m_y);
	DDX_Text(pDX, IDC_X, m_x);
	DDX_Text(pDX, IDC_TEXT, m_text);
}


BEGIN_MESSAGE_MAP(CTextDlg, CDialog)
END_MESSAGE_MAP()


// CTextDlg message handlers
