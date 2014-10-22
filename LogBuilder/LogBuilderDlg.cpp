
// LogBuilderDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "LogBuilder.h"
#include "LogBuilderDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CLogBuilderDlg �Ի���




CLogBuilderDlg::CLogBuilderDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CLogBuilderDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	m_end1 = _T("");
	m_end2 = _T("");
	m_end3 = _T("");
	m_end4 = _T("");
	m_end5 = _T("");
	m_item1 = _T("");
	m_item2 = _T("");
	m_item3 = _T("");
	m_item4 = _T("");
	m_item5 = _T("");
	m_remark = _T("");
	m_start1 = _T("");
	m_start2 = _T("");
	m_start3 = _T("");
	m_start4 = _T("");
	m_start5 = _T("");

}

void CLogBuilderDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_CMYEDIT1, m_myEdit1);
	DDX_Text(pDX, IDC_END1, m_end1);
	DDX_Text(pDX, IDC_END2, m_end2);
	DDX_Text(pDX, IDC_END3, m_end3);
	DDX_Text(pDX, IDC_END4, m_end4);
	DDX_Text(pDX, IDC_END5, m_end5);
	DDX_Text(pDX, IDC_ITEM1, m_item1);
	DDX_Text(pDX, IDC_ITEM2, m_item2);
	DDX_Text(pDX, IDC_ITEM3, m_item3);
	DDX_Text(pDX, IDC_ITEM4, m_item4);
	DDX_Text(pDX, IDC_ITEM5, m_item5);
	DDX_Text(pDX, IDC_REMARK, m_remark);
	DDX_Text(pDX, IDC_START1, m_start1);
	DDX_Text(pDX, IDC_START2, m_start2);
	DDX_Text(pDX, IDC_START3, m_start3);
	DDX_Text(pDX, IDC_START4, m_start4);
	DDX_Text(pDX, IDC_START5, m_start5);
}

BEGIN_MESSAGE_MAP(CLogBuilderDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_EN_SETFOCUS(IDC_ITEM1, &CLogBuilderDlg::OnSetfocusItem1)
	ON_EN_SETFOCUS(IDC_ITEM2, &CLogBuilderDlg::OnSetfocusItem2)
	ON_EN_SETFOCUS(IDC_ITEM3, &CLogBuilderDlg::OnSetfocusItem3)
	ON_EN_SETFOCUS(IDC_ITEM4, &CLogBuilderDlg::OnSetfocusItem4)
	ON_EN_SETFOCUS(IDC_ITEM5, &CLogBuilderDlg::OnSetfocusItem5)
END_MESSAGE_MAP()


// CLogBuilderDlg ��Ϣ�������

BOOL CLogBuilderDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ���ô˶Ի����ͼ�ꡣ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	ShowWindow(SW_MINIMIZE);

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CLogBuilderDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CLogBuilderDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CLogBuilderDlg::OnSetfocusItem1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CTime t=CTime::GetCurrentTime ();
	if(m_item1=="")
		m_start1=t.Format(_T("%H:%M:%S"));
	UpdateData(FALSE);
}


void CLogBuilderDlg::OnSetfocusItem2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CTime t=CTime::GetCurrentTime ();
	if(m_item2=="")
		m_start2=t.Format(_T("%H:%M:%S"));
	UpdateData(FALSE);
}


void CLogBuilderDlg::OnSetfocusItem3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CTime t=CTime::GetCurrentTime ();
	if(m_item3=="")
		m_start3=t.Format(_T("%H:%M:%S"));
	UpdateData(FALSE);
}


void CLogBuilderDlg::OnSetfocusItem4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CTime t=CTime::GetCurrentTime ();
	if(m_item4=="")
		m_start4=t.Format(_T("%H:%M:%S"));
	UpdateData(FALSE);
}


void CLogBuilderDlg::OnSetfocusItem5()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CTime t=CTime::GetCurrentTime ();
	if(m_item5=="")
		m_start5=t.Format(_T("%H:%M:%S"));
	UpdateData(FALSE);
}
