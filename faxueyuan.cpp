// faxueyuan.cpp : 实现文件
//

#include "stdafx.h"
#include "mywork.h"
#include "faxueyuan.h"
#include "afxdialogex.h"


// faxueyuan 对话框

IMPLEMENT_DYNAMIC(faxueyuan, CDialogEx)

faxueyuan::faxueyuan(CWnd* pParent /*=NULL*/)
	: CDialogEx(faxueyuan::IDD, pParent)
{

}

faxueyuan::~faxueyuan()
{
}

void faxueyuan::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(faxueyuan, CDialogEx)
END_MESSAGE_MAP()


// faxueyuan 消息处理程序
