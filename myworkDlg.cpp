
// myworkDlg.cpp : 实现文件


#include "stdafx.h"
#include "math.h"
#include "mywork.h"
#include "myworkDlg.h"
#include "afxdialogex.h"
#include"aochang.h"
#include"faxueyuan.h"
#include"gongcao.h"
#include"jianhu.h"
#include"jisuanji.h"
#include"xiaoshiguan.h"
#include"liuyiting.h"
#include"meiyuan.h"
#include"paifang.h"
#include"tushuguan.h"
#include"yinghua.h"
#include"zhujiao.h"
#include"picture.h"
#include"resource.h"
#include"spotdefine.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMapDlg dialog

CmyworkDlg::CmyworkDlg(CWnd* pParent)
	: CDialog(CmyworkDlg::IDD, pParent)
{
	
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CmyworkDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);

}

//消息映射
BEGIN_MESSAGE_MAP(CmyworkDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()   
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, Onchaxun)
	ON_BN_CLICKED(IDC_BUTTON2, Ontuijian)
	ON_BN_CLICKED(IDC_BUTTON7, Onxianshi)
	ON_WM_LBUTTONDOWN()
	ON_WM_CANCELMODE()
	ON_CBN_SELCHANGE(IDC_COMBO1, &CmyworkDlg::OnCbnSelchangeCombo1)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
//消息处理

picture s;  //创建picture类对象
MGraph g;  //定义一个邻接矩阵类型的图 
Graph G;   //定义一个Graph类对象
BOOL CmyworkDlg::OnInitDialog()
{
	CDialog::OnInitDialog();
	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here
	G.Init(g);  //初始化图  
	for(int i = 0;i<g.n;i++){    //初始化下拉框1，循环将图中景点名称添加到下拉框控件
		((CComboBox*)GetDlgItem(IDC_COMBO1))->AddString(g.vexs[i].name);
	}
	((CComboBox*)GetDlgItem(IDC_COMBO1))->SetCurSel(0);

	for(int i = 0;i<g.n;i++){    //初始化下拉框2
		((CComboBox*)GetDlgItem(IDC_COMBO2))->AddString(g.vexs[i].name);
	}
	((CComboBox*)GetDlgItem(IDC_COMBO2))->SetCurSel(0);

	for(int i = 0;i<g.n;i++){    //初始化下拉框3
		((CComboBox*)GetDlgItem(IDC_COMBO3))->AddString(g.vexs[i].name);
	}
	((CComboBox*)GetDlgItem(IDC_COMBO3))->SetCurSel(0);

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CmyworkDlg::OnSysCommand(UINT nID, LPARAM lParam)   //显示“关于”信息
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.  

void CmyworkDlg::OnPaint()    
{
	
	if (IsIconic())   //是否点击左上角图标
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);  //画出图标 
	}
	else
	{
	//	CDialog::OnPaint();   
		CPaintDC dc(this);
		CDC MemDC;
		CBitmap bit;
		CRect rect;
		bit.LoadBitmap(IDB_BITMAP1);
		MemDC.CreateCompatibleDC(this->GetDC());
		MemDC.SelectObject(&bit);
		this->GetClientRect(&rect);    //定义加载地图的位置和大小
        dc.FillSolidRect(rect,RGB(147,224,255));     //设置为绿色背景
		dc.StretchBlt(0,80,rect.Width(),rect.Height(),&MemDC,0,0,900,550,SRCCOPY); 
		MemDC.DeleteDC();//插入地图图片
		::DeleteObject(&bit);  
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CmyworkDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CmyworkDlg::Onxianshi()     //显示 按钮响应事件
{
	    RedrawWindow(); 
	    CString ch,ch1;
		CComboBox* m_ccb1=(CComboBox*)GetDlgItem(IDC_COMBO3);  //获取下拉框的内容
	    int v=m_ccb1->GetCurSel();    //获取下拉框选中内容的索引下标
	    m_ccb1->GetLBText(v,ch1);    //根据索引获取选中的内容，并赋值给ch1
		for(int i = 0;i<g.n;i++){      //根据选中的内容，获取选中的景点标号
			if(g.vexs[i].name == ch1) 
				v = i;
		}
		ch = G.nearSpot(g,v);
		CStatic *pStatic=(CStatic*)GetDlgItem(IDC_TEXT3);  //向静态文本框2中写内容
        pStatic->SetWindowText(ch);	
}

void CmyworkDlg::Onchaxun() 
{
	// TODO: Add your control notification handler code here
	RedrawWindow(); 
    int i1,j1;
	CString a,b;
	CComboBox* m_ccb1=(CComboBox*)GetDlgItem(IDC_COMBO1);  //获取两个下拉框的内容
	i1=m_ccb1->GetCurSel();    //获取下拉框选中内容的索引下标
	m_ccb1->GetLBText(i1,a);    //根据索引获取选中的内容，并赋值给a
	CComboBox* m_ccb2=(CComboBox*)GetDlgItem(IDC_COMBO2);
	j1=m_ccb2->GetCurSel();
	m_ccb1->GetLBText(j1,b);
	for(int i = 0;i<g.n;i++){      //根据选中的内容，获取选中的起止景点标号
			if(g.vexs[i].name == a) 
				i1 = i;
			if(g.vexs[i].name == b)
				j1 = i;
		}
	if(i1==j1)
		MessageBox("这是同一地点！","错误");
	else{
		CString ch;
	    ch = G.FindPath(g,i1,j1);   
		CStatic *pStatic=(CStatic*)GetDlgItem(IDC_TEXT1);  //向静态文本框1中写内容
        pStatic->SetWindowText(ch);	
		}
}

void CmyworkDlg::Ontuijian()     //推荐 按钮响应事件
{
	    RedrawWindow(); 
	    CString ch,ch1,ch2;
		ch1 = G.FindPath(g,8,0);
		ch2 = ch = G.FindPath(g,8,7);
		ch.Format(_T("%s %s %s %s %s"),"1>赏樱路线：",ch1,"（樱顶)      2>爬山路线：",ch2,"(珞珈山)");
		CStatic *pStatic=(CStatic*)GetDlgItem(IDC_TEXT2);  //向静态文本框2中写内容
        pStatic->SetWindowText(ch);	
}

void CmyworkDlg::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CString str1;  //定义两个字符串变量
	CString str2;
	CDialog::OnLButtonDown(nFlags, point);   //有左击鼠标时，产生动作事件
	if(point.x>=0 && point.x<=681 && point.y>=79 && point.y<=515) //如果鼠标在地图范围内点击则产生动作
	{  
		str1.Format("%d",point.x);    
	    str2.Format("%d",point.y);
	    MessageBox(str1+" "+str2);   //将位置坐标转化为字符串显示输出
	    if(point.x>230&&point.x<267&&point.y>190&&point.y<199){   //校史馆
	       xiaoshiguan z;
	       z.DoModal();  }
	    if(point.x>234&&point.x<262&&point.y>353&&point.y<385){   //图书馆
	       tushuguan z;
	       z.DoModal();  }
	    if(point.x>79&&point.x<108&&point.y>253&&point.y<268){    //计算机学院
	        jisuanji z;
	        z.DoModal();   }
	    if(point.x>225&&point.x<399&&point.y>227&&point.y<245){    //樱花大道
	        yinghua z;
	        z.DoModal();   }
	    if(point.x>231&&point.x<239&&point.y>342&&point.y<348) {   //六一亭
	        liuyiting z;
	        z.DoModal();  }
	    if(point.x>301&&point.x<325&&point.y>300&&point.y<313){    //中心湖
	        jianhu z;
	        z.DoModal();  }
	    if(point.x>294&&point.x<310&&point.y>91&&point.y<118){   //变形金刚（工学部主教）
	        zhujiao z;
	        z.DoModal();}
	    if(point.x>289&&point.x<259&&point.y>330&&point.y<355){   //梅园
	        meiyuan z;
	        z.DoModal();}
	    if(point.x>527&&point.x<539&&point.y>135&&point.y<164){    //工操
	       gongcao z;
	       z.DoModal();}
	    if(point.x>94&&point.x<128&&point.y>454&&point.y<462){   //正门牌坊
	       paifang z;
	       z.DoModal();}
	    if(point.x>375&&point.x<387&&point.y>265&&point.y<291){   //奥场
	       aochang z;
	       z.DoModal();   }
	    if(point.x>517&&point.x<546&&point.y>280&&point.y<296) {    //法学院
	       faxueyuan z;
	       z.DoModal();  }
	}
//	this-> ClientToScreen(pt);
	
}

void CmyworkDlg::OnCancelMode() 
{
	CDialog::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}


void CmyworkDlg::OnCbnSelchangeCombo1()
{
	// TODO: 在此添加控件通知处理程序代码
}


void CmyworkDlg::OnCbnSelchangeCombo3()
{
	// TODO: 在此添加控件通知处理程序代码
}
