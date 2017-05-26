// zhujiao.cpp : 实现文件
//

#include "stdafx.h"
#include "mywork.h"
#include "zhujiao.h"
#include "afxdialogex.h"


// zhujiao 对话框

IMPLEMENT_DYNAMIC(zhujiao, CDialogEx)

zhujiao::zhujiao(CWnd* pParent /*=NULL*/)
	: CDialogEx(zhujiao::IDD, pParent)
{

}

zhujiao::~zhujiao()
{
}

void zhujiao::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(zhujiao, CDialogEx)
END_MESSAGE_MAP()


// zhujiao 消息处理程序
