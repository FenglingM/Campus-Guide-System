#pragma once


// aochang �Ի���

class aochang : public CDialogEx
{
	DECLARE_DYNAMIC(aochang)

public:
	aochang(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~aochang();

// �Ի�������
	enum { IDD = IDD_DIALOG8 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
