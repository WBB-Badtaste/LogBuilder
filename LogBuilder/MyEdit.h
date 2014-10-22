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
	void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags) ;
	BOOL RegisterWindowClass(HINSTANCE hInstance = NULL);
};


