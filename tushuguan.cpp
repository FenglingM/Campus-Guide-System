// tusguguan.cpp : 实现文件
//

#include "stdafx.h"
#include "mywork.h"
#include "tushuguan.h"
#include "afxdialogex.h"


// tusguguan 对话框

IMPLEMENT_DYNAMIC(tushuguan, CDialogEx)

tushuguan::tushuguan(CWnd* pParent /*=NULL*/)
	: CDialogEx(tushuguan::IDD, pParent)
{

}

tushuguan::~tushuguan()
{
}

void tushuguan::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(tushuguan, CDialogEx)
END_MESSAGE_MAP()


// tusguguan 消息处理程序
