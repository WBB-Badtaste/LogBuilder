// MyEdit.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "LogBuilder.h"
#include "MyEdit.h"


// CMyEdit

IMPLEMENT_DYNAMIC(CMyEdit, CEdit)

CMyEdit::CMyEdit()
{
}

CMyEdit::~CMyEdit()
{
}


BEGIN_MESSAGE_MAP(CMyEdit, CEdit)
	ON_WM_CHAR()
END_MESSAGE_MAP()



// CMyEdit ��Ϣ�������



void CMyEdit::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if(nChar == VK_RETURN) 
		MessageBox(_T("Hello!")); 
	CEdit::OnChar(nChar, nRepCnt, nFlags);
}
