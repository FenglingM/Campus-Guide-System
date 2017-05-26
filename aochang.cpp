// aochang.cpp : 实现文件
//

#include "stdafx.h"
#include "mywork.h"
#include "aochang.h"
#include "afxdialogex.h"


// aochang 对话框

IMPLEMENT_DYNAMIC(aochang, CDialogEx)

aochang::aochang(CWnd* pParent /*=NULL*/)
	: CDialogEx(aochang::IDD, pParent)
{

}

aochang::~aochang()
{
}

void aochang::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(aochang, CDialogEx)
END_MESSAGE_MAP()


// aochang 消息处理程序
