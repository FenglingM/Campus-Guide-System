#pragma once


// jisuanji 对话框

class jisuanji : public CDialogEx
{
	DECLARE_DYNAMIC(jisuanji)

public:
	jisuanji(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~jisuanji();

// 对话框数据
	enum { IDD = IDD_DIALOG3 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk2();
};
