// jisuanji.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "mywork.h"
#include "jisuanji.h"
#include "afxdialogex.h"


// jisuanji �Ի���

IMPLEMENT_DYNAMIC(jisuanji, CDialogEx)

jisuanji::jisuanji(CWnd* pParent /*=NULL*/)
	: CDialogEx(jisuanji::IDD, pParent)
{

}

jisuanji::~jisuanji()
{
}

void jisuanji::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(jisuanji, CDialogEx)
	ON_BN_CLICKED(IDOK2, &jisuanji::OnBnClickedOk2)
END_MESSAGE_MAP()


// jisuanji ��Ϣ�������


void jisuanji::OnBnClickedOk2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
