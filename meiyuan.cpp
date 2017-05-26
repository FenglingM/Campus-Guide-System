// meiyuan.cpp : 实现文件
//

#include "stdafx.h"
#include "mywork.h"
#include "meiyuan.h"
#include "afxdialogex.h"


// meiyuan 对话框

IMPLEMENT_DYNAMIC(meiyuan, CDialogEx)

meiyuan::meiyuan(CWnd* pParent /*=NULL*/)
	: CDialogEx(meiyuan::IDD, pParent)
{

}

meiyuan::~meiyuan()
{
}

void meiyuan::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(meiyuan, CDialogEx)
END_MESSAGE_MAP()


// meiyuan 消息处理程序
