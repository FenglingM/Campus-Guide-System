#pragma once


// jianhu �Ի���

class jianhu : public CDialogEx
{
	DECLARE_DYNAMIC(jianhu)

public:
	jianhu(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~jianhu();

// �Ի�������
	enum { IDD = IDD_DIALOG7 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
