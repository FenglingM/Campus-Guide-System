#pragma once


// paifang �Ի���

class paifang : public CDialogEx
{
	DECLARE_DYNAMIC(paifang)

public:
	paifang(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~paifang();

// �Ի�������
	enum { IDD = IDD_DIALOG9 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
