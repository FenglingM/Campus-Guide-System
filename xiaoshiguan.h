#pragma once


// laotu �Ի���

class xiaoshiguan : public CDialogEx
{
	DECLARE_DYNAMIC(xiaoshiguan)

public:
	xiaoshiguan(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~xiaoshiguan();

// �Ի�������
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
