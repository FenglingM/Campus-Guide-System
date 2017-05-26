// gongcao.cpp : 实现文件
//

#include "stdafx.h"
#include "mywork.h"
#include "gongcao.h"
#include "afxdialogex.h"


// gongcao 对话框

IMPLEMENT_DYNAMIC(gongcao, CDialogEx)

gongcao::gongcao(CWnd* pParent /*=NULL*/)
	: CDialogEx(gongcao::IDD, pParent)
{

}

gongcao::~gongcao()
{
}

void gongcao::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(gongcao, CDialogEx)
END_MESSAGE_MAP()


// gongcao 消息处理程序
