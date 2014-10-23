
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
	m_projectName = _T("");
}


void CLogBuilderDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
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
	DDX_Text(pDX, IDC_PROJECTNAME, m_projectName);
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
	{
		UpdateData(TRUE);
		m_start1=t.Format(_T("%H:%M"));
		UpdateData(FALSE);
	}
}


void CLogBuilderDlg::OnSetfocusItem2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CTime t=CTime::GetCurrentTime ();
	if(m_item2=="")
	{
		UpdateData(TRUE);
		m_start2=t.Format(_T("%H:%M"));
		UpdateData(FALSE);
	}
}


void CLogBuilderDlg::OnSetfocusItem3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CTime t=CTime::GetCurrentTime ();
	if(m_item3=="")
	{
		UpdateData(TRUE);
		m_start3=t.Format(_T("%H:%M"));
		UpdateData(FALSE);
	}
}


void CLogBuilderDlg::OnSetfocusItem4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CTime t=CTime::GetCurrentTime ();
	if(m_item4=="")
	{
		UpdateData(TRUE);
		m_start4=t.Format(_T("%H:%M"));
		UpdateData(FALSE);
	}
}


void CLogBuilderDlg::OnSetfocusItem5()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CTime t=CTime::GetCurrentTime ();
	if(m_item5=="")
	{
		UpdateData(TRUE);
		m_start5=t.Format(_T("%H:%M"));
		UpdateData(FALSE);
	}
}


BOOL CLogBuilderDlg::PreTranslateMessage(MSG*   pMsg)    
{  
//	if(pMsg->message==WM_KEYDOWN   &&   pMsg->wParam==VK_ESCAPE)     return   TRUE;  
	
	if(pMsg->message==WM_KEYDOWN   &&   pMsg->wParam==VK_RETURN)  
	{
		UpdateData(TRUE);
		CTime t(0);
		CEdit *p=0;
		int selStart=0,selEnd=0;
		CString buffer("");
		switch( GetFocus()->GetDlgCtrlID() )
		{
		case IDC_ITEM1:
			if(m_item1!="")
			{
				p=(CEdit*)GetDlgItem(IDC_ITEM1);				
				p->GetSel(selStart,selEnd);
				if(selEnd-selStart==p->LineLength())
				{
					buffer=m_start1+_T("~")+m_end1+_T(" ")+m_item1+_T("\n");
					WriteLog(buffer);
					m_start1=m_end1=m_item1=_T("");
				}
				else
				{
					p->SetSel(0,p->LineLength());
					t=CTime::GetCurrentTime ();
					m_end1=t.Format(_T("%H:%M"));
				}
			}
			break;
		case IDC_ITEM2:
			if(m_item2!="")
			{
				p=(CEdit*)GetDlgItem(IDC_ITEM1);				
				p->GetSel(selStart,selEnd);
				if(selEnd-selStart==p->LineLength())
				{
					buffer=m_start2+_T("~")+m_end2+_T(" ")+m_item2+_T("\n");
					WriteLog(buffer);
					m_start2=m_end2=m_item2=_T("");
				}
				else
				{
					p->SetSel(0,p->LineLength());
					t=CTime::GetCurrentTime ();
					m_end2=t.Format(_T("%H:%M"));
				}
			}
			break;
		case IDC_ITEM3:
			if(m_item3!="")
			{
				p=(CEdit*)GetDlgItem(IDC_ITEM1);				
				p->GetSel(selStart,selEnd);
				if(selEnd-selStart==p->LineLength())
				{
					buffer=m_start3+_T("~")+m_end3+_T(" ")+m_item3+_T("\n");
					WriteLog(buffer);
					m_start3=m_end3=m_item3=_T("");
				}
				else
				{
					p->SetSel(0,p->LineLength());
					t=CTime::GetCurrentTime ();
					m_end3=t.Format(_T("%H:%M"));
				}
			}
			break;
		case IDC_ITEM4:
			if(m_item4!="")
			{
				p=(CEdit*)GetDlgItem(IDC_ITEM1);				
				p->GetSel(selStart,selEnd);
				if(selEnd-selStart==p->LineLength())
				{
					buffer=m_start4+_T("~")+m_end4+_T(" ")+m_item4+_T("\n");
					WriteLog(buffer);
					m_start4=m_end4=m_item4=_T("");
				}
				else
				{
					p->SetSel(0,p->LineLength());
					t=CTime::GetCurrentTime ();
					m_end4=t.Format(_T("%H:%M"));
				}
			}
			break;
		case IDC_ITEM5:
			if(m_item5!="")
			{
				p=(CEdit*)GetDlgItem(IDC_ITEM1);				
				p->GetSel(selStart,selEnd);
				if(selEnd-selStart==p->LineLength())
				{
					buffer=m_start5+_T("~")+m_end5+_T(" ")+m_item5+_T("\n");
					WriteLog(buffer);
					m_start5=m_end5=m_item5=_T("");
				}
				else
				{
					p->SetSel(0,p->LineLength());
					t=CTime::GetCurrentTime ();
					m_end5=t.Format(_T("%H:%M"));
				}
			}
			break;
		case IDC_REMARK:
			if(m_remark!=""&&m_projectName!="")
			{
				p=(CEdit*)GetDlgItem(IDC_REMARK);				
				buffer=m_remark+_T("\n");
				WriteMemo(buffer);
				m_remark=_T("");
				m_projectName=m_remark=_T("");
			}
			break;
		case IDC_PROJECTNAME:
			if(m_remark!=""&&m_projectName!="")
			{
				p=(CEdit*)GetDlgItem(IDC_REMARK);				
				buffer=m_remark+_T("\n");
				WriteMemo(buffer);
				m_remark=_T("");
				m_projectName=m_remark=_T("");
			}
			break;
		case IDC_END1:
			break;
		case IDC_END2:
			break;
		case IDC_END3:
			break;
		case IDC_END4:
			break;
		case IDC_END5:
			break;
		default:
			break;
		}
		UpdateData(FALSE);
		return TRUE;
	}
	return CDialog::PreTranslateMessage(pMsg);  
}


BOOL CLogBuilderDlg::WriteLog(const CString &str)
{
	CTime t=CTime::GetCurrentTime ();
	m_file.Open(_T("E:\\�����ĵ�\\������־\\")+t.Format(_T("%Y%m%d"))+_T("log.doc"),CFile::modeCreate|CFile::modeNoTruncate|CFile::modeWrite);
	m_file.SeekToEnd(); 
	m_file.Write((LPCTSTR)str, str.GetLength());
	m_file.Close();
	return TRUE;
}

BOOL CLogBuilderDlg::WriteMemo(const CString &str)
{
	m_file.Open(_T("E:\\�����ĵ�\\���̱���\\")+m_projectName+_T("memo.doc"),CFile::modeCreate|CFile::modeNoTruncate|CFile::modeWrite);
	m_file.SeekToEnd(); 
	m_file.Write((LPCTSTR)str, str.GetLength());
	m_file.Close();
	return TRUE;
}