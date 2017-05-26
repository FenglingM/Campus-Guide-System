#include"stdafx.h"
#include"mywork.h"
#include"spotdefine.h"
#include<string.h>
#define INF 10000     //定义一个无穷大的常量INF（一般距离比这个小的多）

void Graph::Init(MGraph &g)    //图的初始化函数
{
	g.n = 12;   //给出顶点个数12个
	g.e = 18;   //边条数18条
	int A[N][N] = {       //给出带权无向图的邻接矩阵
		{0,INF,INF,69,INF,INF,INF,INF,INF,INF,INF,INF},
		{INF,0,INF,INF,37,INF,INF,INF,162,INF,69,INF},
		{INF,INF,0,177,133,250,INF,INF,197,INF,INF,INF},
		{69,INF,177,0,INF,135,63,102,INF,240,INF,INF},
		{INF,37,133,INF,0,INF,102,INF,160,INF,INF,INF},
		{INF,INF,250,135,INF,0,INF,INF,INF,INF,INF,226},
		{INF,INF,INF,63,102,INF,0,INF,INF,INF,33,INF},
		{INF,INF,INF,102,INF,INF,INF,0,INF,142,97,INF},
		{INF,162,197,INF,160,INF,INF,INF,0,INF,INF,INF},
		{INF,INF,INF,240,INF,INF,INF,142,INF,0,INF,137},
		{INF,69,INF,INF,INF,INF,33,97,INF,INF,0,INF},
		{INF,INF,INF,INF,INF,226,INF,INF,INF,137,INF,0},
	};
	CString  name[] = {"校史馆","图书馆","计算机学院","樱花城堡","六一亭","变形金刚",
		"中心湖","奥场","正门","法学院","梅园","工操"};    //给出景点名称的字符串数组
	int i,j;
	for(i=0;i<g.n;i++)     
		for(j = 0;j<g.n;j++)
			g.edges[i][j] = A[i][j];
	for(i = 0;i<g.n;i++){
		g.vexs[i].no = i;   //景点编号与下标对应
		g.vexs[i].name = name[i];
	}
}

 
CString Graph::FindPath(MGraph g,int v,int u)  //查找最短路径，采用Dijkatra算法
{  //形参，包括图g，起点、终点编号，返回整理后的路径字符串
	int dist[N],path[N]; //分别表示每个顶点到起点的最短路径长度，当前最短路径中前一个顶点编号 
	int s[N];    //是否已找到最短路径的标志
	int mindis,i,j,r;
	CString str;
	for(i = 0;i<g.n;i++)
	{   dist[i] = g.edges[v][i];  //距离初始化
		s[i] = 0;  //标记初始化
		if(g.edges[v][i]<INF)  //路径初始化
			path[i] = v;
		else
			path[i] = -1;
	}
	s[v] = 1; path[v] = 0;    //起点编号放在s中
	for(i = 0;i<g.n;i++)
	{   mindis = INF;
	    for(j = 0;j<g.n;j++)  //选出不在s中且具有最短距离的顶点r
	       if(s[j] == 0 && dist[j]<mindis)
		   {
			   r = j;
			   mindis = dist[j];
		   }
		s[r] = 1;   //顶点r加入到s中
		for(j = 0;j<g.n;j++)    //修改剩余顶点的距离
			if(g.edges[r][j]<INF && dist[r]+g.edges[r][j]<dist[j])
			{
				dist[j] = dist[r]+g.edges[r][j];
				path[j] = r;
			}
	}

	Transform(g,path,s,v,u,str);   //调用函数，整理出所需要的路径字符串
	return str;   //返回
}

void Graph::Transform(MGraph g,int path[],int s[],int v,int u,CString &str)
{ //形参包括Dijkatra算法中求得的图g，path[],s[],起点、终点编号、字符串变量（通过引用传递返回）
	int apath[N];
	int i,j,k,d;
	for(i=0;i<g.n;i++){
		if(s[i] ==1 && i == u){
			d = 0; apath[d] = i;
			k =path[i];
			while(k!=v){
		        d++;
		        apath[d] = k;
		        k = path[k];
	        }
	        d++; apath[d] = v;
            for(j = d;j>0;j--){    //整合路径到一个字符串中
		        CString temp = str;   //临时字符串变量
		        str.Format(_T("%s %s %s"),temp,g.vexs[apath[j]].name,"-> ");
	        }
			CString temp = str;
			str.Format(_T("%s %s"),temp,g.vexs[apath[0]].name);
		}
	}
}

CString Graph::nearSpot(MGraph g,int v)   //求某个景点的附近景点，返回所有临近景点名称
{
	int i;
	CString m_str;
	for(i=0;i<g.n;i++)
		if(g.edges[v][i] != 0 && g.edges[v][i] != INF){  //当两点间距离在0到无穷大之间时
			CString temp = m_str;     //将符合条件的景点名称加入字符串
			m_str.Format(_T("%s %s %s %s %d %s"),temp,"/",g.vexs[i].name,":",g.edges[v][i],"米");
		}
	return m_str;
}

Graph::Graph()
{

}
Graph::~Graph()
{

}