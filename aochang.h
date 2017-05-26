#pragma once


// aochang 对话框

class aochang : public CDialogEx
{
	DECLARE_DYNAMIC(aochang)

public:
	aochang(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~aochang();

// 对话框数据
	enum { IDD = IDD_DIALOG8 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
