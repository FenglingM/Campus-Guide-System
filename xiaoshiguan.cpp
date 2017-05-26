// laotu.cpp : 实现文件
//

#include "stdafx.h"
#include "mywork.h"
#include "xiaoshiguan.h"
#include "afxdialogex.h"


// laotu 对话框

IMPLEMENT_DYNAMIC(xiaoshiguan, CDialogEx)

xiaoshiguan::xiaoshiguan(CWnd* pParent /*=NULL*/)
	: CDialogEx(xiaoshiguan::IDD, pParent)
{

}

xiaoshiguan::~xiaoshiguan()
{
}

void xiaoshiguan::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(xiaoshiguan, CDialogEx)

END_MESSAGE_MAP()


// laotu 消息处理程序
