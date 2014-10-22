// MyEdit.cpp : 实现文件
//

#include "stdafx.h"
#include "LogBuilder.h"
#include "MyEdit.h"


// CMyEdit

IMPLEMENT_DYNAMIC(CMyEdit, CEdit)

CMyEdit::CMyEdit()
{
	 RegisterWindowClass();
}

CMyEdit::~CMyEdit()
{
}

BOOL CMyEdit::RegisterWindowClass(HINSTANCE hInstance)
{
	LPCWSTR className = L"CMyEdit";//"CMyWin"控件类的名字
	WNDCLASS windowclass;     

	if(hInstance)
		hInstance = AfxGetInstanceHandle();

	if (!(::GetClassInfo(hInstance, className, &windowclass)))
	{            
		windowclass.style = CS_DBLCLKS;
		windowclass.lpfnWndProc = ::DefWindowProc;
		windowclass.cbClsExtra = windowclass.cbWndExtra = 0;
		windowclass.hInstance = hInstance;
		windowclass.hIcon = NULL;
		windowclass.hCursor = AfxGetApp()->LoadStandardCursor(IDC_ARROW);
		windowclass.hbrBackground = ::GetSysColorBrush(COLOR_WINDOW);
		windowclass.lpszMenuName = NULL;
		windowclass.lpszClassName = className;

		if (!AfxRegisterClass(&windowclass))
		{
			AfxThrowResourceException();
			return FALSE;
		}
	}

	return TRUE;
}


BEGIN_MESSAGE_MAP(CMyEdit, CEdit)
END_MESSAGE_MAP()



// CMyEdit 消息处理程序

void CMyEdit::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags) 
{ 
	if(nChar == VK_RETURN) 
		MessageBox(_T("Hello!")); 

	CEdit::OnChar(nChar, nRepCnt, nFlags); 
} 
