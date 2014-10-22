
// LogBuilderDlg.h : ͷ�ļ�
//

#pragma once

#include "MyEdit.h"
// CLogBuilderDlg �Ի���
class CLogBuilderDlg : public CDialogEx
{
// ����
public:
	CLogBuilderDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_LOGBUILDER_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
private:
	CTime m_ctime;
	CMyEdit m_myEdit1;
public:
//	CDateTimeCtrl m_time;
	CString m_end1;
	CString m_end2;
	CString m_end3;
	CString m_end4;
	CString m_end5;
	CString m_item1;
	CString m_item2;
	CString m_item3;
	CString m_item4;
	CString m_item5;
	CString m_remark;
	CString m_start1;
	CString m_start2;
	CString m_start3;
	CString m_start4;
	CString m_start5;
	afx_msg void OnSetfocusItem1();
	afx_msg void OnSetfocusItem2();
	afx_msg void OnSetfocusItem3();
	afx_msg void OnSetfocusItem4();
	afx_msg void OnSetfocusItem5();
};
