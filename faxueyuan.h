#pragma once


// faxueyuan �Ի���

class faxueyuan : public CDialogEx
{
	DECLARE_DYNAMIC(faxueyuan)

public:
	faxueyuan(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~faxueyuan();

// �Ի�������
	enum { IDD = IDD_DIALOG10 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
