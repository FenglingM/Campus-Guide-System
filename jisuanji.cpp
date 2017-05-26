// jisuanji.cpp : 实现文件
//

#include "stdafx.h"
#include "mywork.h"
#include "jisuanji.h"
#include "afxdialogex.h"


// jisuanji 对话框

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


// jisuanji 消息处理程序


void jisuanji::OnBnClickedOk2()
{
	// TODO: 在此添加控件通知处理程序代码
}
