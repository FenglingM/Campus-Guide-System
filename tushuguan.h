#pragma once


// tusguguan �Ի���

class tushuguan : public CDialogEx
{
	DECLARE_DYNAMIC(tushuguan)

public:
	tushuguan(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~tushuguan();

// �Ի�������
	enum { IDD = IDD_DIALOG2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
