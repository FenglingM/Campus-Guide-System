#pragma once


// liuyiting �Ի���

class liuyiting : public CDialogEx
{
	DECLARE_DYNAMIC(liuyiting)

public:
	liuyiting(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~liuyiting();

// �Ի�������
	enum { IDD = IDD_DIALOG5 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
