#pragma once


// yinghua 对话框

class yinghua : public CDialogEx
{
	DECLARE_DYNAMIC(yinghua)

public:
	yinghua(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~yinghua();

// 对话框数据
	enum { IDD = IDD_DIALOG4 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
