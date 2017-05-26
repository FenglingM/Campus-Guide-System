#pragma once


// jianhu 对话框

class jianhu : public CDialogEx
{
	DECLARE_DYNAMIC(jianhu)

public:
	jianhu(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~jianhu();

// 对话框数据
	enum { IDD = IDD_DIALOG7 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
