#pragma once


// CMyEdit

class CMyEdit : public CEdit
{
	DECLARE_DYNAMIC(CMyEdit)

public:
	CMyEdit();
	virtual ~CMyEdit();

protected:
	DECLARE_MESSAGE_MAP()

private:
	BOOL RegisterWindowClass(HINSTANCE hInstance = NULL);
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
};


