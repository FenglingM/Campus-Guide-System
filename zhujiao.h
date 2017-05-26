#pragma once


// zhujiao 对话框

class zhujiao : public CDialogEx
{
	DECLARE_DYNAMIC(zhujiao)

public:
	zhujiao(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~zhujiao();

// 对话框数据
	enum { IDD = IDD_DIALOG6 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
