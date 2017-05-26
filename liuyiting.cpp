// liuyiting.cpp : 实现文件
//

#include "stdafx.h"
#include "mywork.h"
#include "liuyiting.h"
#include "afxdialogex.h"


// liuyiting 对话框

IMPLEMENT_DYNAMIC(liuyiting, CDialogEx)

liuyiting::liuyiting(CWnd* pParent /*=NULL*/)
	: CDialogEx(liuyiting::IDD, pParent)
{

}

liuyiting::~liuyiting()
{
}

void liuyiting::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(liuyiting, CDialogEx)
END_MESSAGE_MAP()


// liuyiting 消息处理程序
