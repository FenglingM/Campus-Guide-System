#pragma once


// jisuanji �Ի���

class jisuanji : public CDialogEx
{
	DECLARE_DYNAMIC(jisuanji)

public:
	jisuanji(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~jisuanji();

// �Ի�������
	enum { IDD = IDD_DIALOG3 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk2();
};
