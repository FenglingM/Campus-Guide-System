#pragma once


// gongcao 对话框

class gongcao : public CDialogEx
{
	DECLARE_DYNAMIC(gongcao)

public:
	gongcao(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~gongcao();

// 对话框数据
	enum { IDD = IDD_DIALOG12 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
