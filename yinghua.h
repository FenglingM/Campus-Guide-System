#pragma once


// yinghua �Ի���

class yinghua : public CDialogEx
{
	DECLARE_DYNAMIC(yinghua)

public:
	yinghua(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~yinghua();

// �Ի�������
	enum { IDD = IDD_DIALOG4 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
