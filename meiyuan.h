#pragma once


// meiyuan �Ի���

class meiyuan : public CDialogEx
{
	DECLARE_DYNAMIC(meiyuan)

public:
	meiyuan(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~meiyuan();

// �Ի�������
	enum { IDD = IDD_DIALOG11 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
