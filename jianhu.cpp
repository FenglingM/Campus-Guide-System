// jianhu.cpp : 实现文件
//

#include "stdafx.h"
#include "mywork.h"
#include "jianhu.h"
#include "afxdialogex.h"


// jianhu 对话框

IMPLEMENT_DYNAMIC(jianhu, CDialogEx)

jianhu::jianhu(CWnd* pParent /*=NULL*/)
	: CDialogEx(jianhu::IDD, pParent)
{

}

jianhu::~jianhu()
{
}

void jianhu::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(jianhu, CDialogEx)
END_MESSAGE_MAP()


// jianhu 消息处理程序
