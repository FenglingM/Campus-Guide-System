#pragma once


// gongcao �Ի���

class gongcao : public CDialogEx
{
	DECLARE_DYNAMIC(gongcao)

public:
	gongcao(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~gongcao();

// �Ի�������
	enum { IDD = IDD_DIALOG12 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
