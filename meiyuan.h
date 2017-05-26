#pragma once


// meiyuan 对话框

class meiyuan : public CDialogEx
{
	DECLARE_DYNAMIC(meiyuan)

public:
	meiyuan(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~meiyuan();

// 对话框数据
	enum { IDD = IDD_DIALOG11 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
