#pragma once


// zhujiao �Ի���

class zhujiao : public CDialogEx
{
	DECLARE_DYNAMIC(zhujiao)

public:
	zhujiao(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~zhujiao();

// �Ի�������
	enum { IDD = IDD_DIALOG6 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
