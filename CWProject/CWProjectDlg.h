
// CWProjectDlg.h: 头文件
//

#pragma once
#include "CMSComm.h"

// CCWProjectDlg 对话框
class CCWProjectDlg : public CDialogEx
{
// 构造
public:
	CCWProjectDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CWPROJECT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CMSComm m_ctrlComm;
	CComboBox m_ComboBox;
	CString m_strRXData;
	CString m_strTXData;
	int m_Index;
	afx_msg void OnBnClickedOpen();
	DECLARE_EVENTSINK_MAP()
	void OnCommMscomm1();
	afx_msg void OnBnClickedSendbt();
};
