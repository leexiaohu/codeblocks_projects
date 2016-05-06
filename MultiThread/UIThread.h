#if !defined(AFX_UITHREAD_H__7EBA2E0B_63E0_4AC9_A042_4A81E0A7096D__INCLUDED_)
#define AFX_UITHREAD_H__7EBA2E0B_63E0_4AC9_A042_4A81E0A7096D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// UIThread.h : header file
//



/////////////////////////////////////////////////////////////////////////////
// CUIThread thread

class CUIThread : public CWinThread
{
	DECLARE_DYNCREATE(CUIThread)
public:
	CUIThread();           // protected constructor used by dynamic creation

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CUIThread)
	public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CUIThread();

	// Generated message map functions
	//{{AFX_MSG(CUIThread)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_UITHREAD_H__7EBA2E0B_63E0_4AC9_A042_4A81E0A7096D__INCLUDED_)
