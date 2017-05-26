#pragma once


// paifang 对话框

class paifang : public CDialogEx
{
	DECLARE_DYNAMIC(paifang)

public:
	paifang(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~paifang();

// 对话框数据
	enum { IDD = IDD_DIALOG9 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
