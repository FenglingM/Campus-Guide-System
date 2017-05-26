// yinghua.cpp : 实现文件
//

#include "stdafx.h"
#include "mywork.h"
#include "yinghua.h"
#include "afxdialogex.h"


// yinghua 对话框

IMPLEMENT_DYNAMIC(yinghua, CDialogEx)

yinghua::yinghua(CWnd* pParent /*=NULL*/)
	: CDialogEx(yinghua::IDD, pParent)
{

}

yinghua::~yinghua()
{
}

void yinghua::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(yinghua, CDialogEx)
END_MESSAGE_MAP()


// yinghua 消息处理程序
