#pragma once


// faxueyuan 对话框

class faxueyuan : public CDialogEx
{
	DECLARE_DYNAMIC(faxueyuan)

public:
	faxueyuan(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~faxueyuan();

// 对话框数据
	enum { IDD = IDD_DIALOG10 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
