// paifang.cpp : 实现文件
//

#include "stdafx.h"
#include "mywork.h"
#include "paifang.h"
#include "afxdialogex.h"


// paifang 对话框

IMPLEMENT_DYNAMIC(paifang, CDialogEx)

paifang::paifang(CWnd* pParent /*=NULL*/)
	: CDialogEx(paifang::IDD, pParent)
{

}

paifang::~paifang()
{
}

void paifang::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(paifang, CDialogEx)
END_MESSAGE_MAP()


// paifang 消息处理程序
