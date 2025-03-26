// CRegionParameterDlg.cpp: 实现文件
//

#include "pch.h"
#include "MapEditor.h"
#include "CRegionParameterDlg.h"
#include "afxdialogex.h"


// CRegionParameterDlg 对话框

IMPLEMENT_DYNAMIC(CRegionParameterDlg, CDialogEx)

CRegionParameterDlg::CRegionParameterDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_REGION_PARAMETER, pParent)
{
	m_Pattern = 0;
}

CRegionParameterDlg::~CRegionParameterDlg()
{
}

void CRegionParameterDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_REGION_PATTERN, m_ComboBox);
	DDX_Control(pDX, IDC_REGION_COLOR, m_ColorButton);
}


BEGIN_MESSAGE_MAP(CRegionParameterDlg, CDialogEx)
	ON_CBN_SELCHANGE(IDC_REGION_PATTERN, &CRegionParameterDlg::OnSelchangeRegionPattern)
END_MESSAGE_MAP()


// CRegionParameterDlg 消息处理程序


BOOL CRegionParameterDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	m_ComboBox.SetCurSel(m_Pattern); //设置m_ComboBox的初始值

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void CRegionParameterDlg::OnSelchangeRegionPattern()
{
	// TODO: 在此添加控件通知处理程序代码
	m_Pattern = m_ComboBox.GetCurSel();//设置当前选择的点型
}
