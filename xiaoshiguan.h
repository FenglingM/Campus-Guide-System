#pragma once


// laotu 对话框

class xiaoshiguan : public CDialogEx
{
	DECLARE_DYNAMIC(xiaoshiguan)

public:
	xiaoshiguan(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~xiaoshiguan();

// 对话框数据
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
