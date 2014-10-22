
// LogBuilderDlg.h : 头文件
//

#pragma once

#include "MyEdit.h"
// CLogBuilderDlg 对话框
class CLogBuilderDlg : public CDialogEx
{
// 构造
public:
	CLogBuilderDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_LOGBUILDER_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
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
