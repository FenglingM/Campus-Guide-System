#include"stdafx.h"
#include"mywork.h"
#include"spotdefine.h"
#include<string.h>
#define INF 10000     //����һ�������ĳ���INF��һ���������С�Ķࣩ

void Graph::Init(MGraph &g)    //ͼ�ĳ�ʼ������
{
	g.n = 12;   //�����������12��
	g.e = 18;   //������18��
	int A[N][N] = {       //������Ȩ����ͼ���ڽӾ���
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
	CString  name[] = {"Уʷ��","ͼ���","�����ѧԺ","ӣ���Ǳ�","��һͤ","���ν��",
		"���ĺ�","�³�","����","��ѧԺ","÷԰","����"};    //�����������Ƶ��ַ�������
	int i,j;
	for(i=0;i<g.n;i++)     
		for(j = 0;j<g.n;j++)
			g.edges[i][j] = A[i][j];
	for(i = 0;i<g.n;i++){
		g.vexs[i].no = i;   //���������±��Ӧ
		g.vexs[i].name = name[i];
	}
}

 
CString Graph::FindPath(MGraph g,int v,int u)  //�������·��������Dijkatra�㷨
{  //�βΣ�����ͼg����㡢�յ��ţ�����������·���ַ���
	int dist[N],path[N]; //�ֱ��ʾÿ�����㵽�������·�����ȣ���ǰ���·����ǰһ�������� 
	int s[N];    //�Ƿ����ҵ����·���ı�־
	int mindis,i,j,r;
	CString str;
	for(i = 0;i<g.n;i++)
	{   dist[i] = g.edges[v][i];  //�����ʼ��
		s[i] = 0;  //��ǳ�ʼ��
		if(g.edges[v][i]<INF)  //·����ʼ��
			path[i] = v;
		else
			path[i] = -1;
	}
	s[v] = 1; path[v] = 0;    //����ŷ���s��
	for(i = 0;i<g.n;i++)
	{   mindis = INF;
	    for(j = 0;j<g.n;j++)  //ѡ������s���Ҿ�����̾���Ķ���r
	       if(s[j] == 0 && dist[j]<mindis)
		   {
			   r = j;
			   mindis = dist[j];
		   }
		s[r] = 1;   //����r���뵽s��
		for(j = 0;j<g.n;j++)    //�޸�ʣ�ඥ��ľ���
			if(g.edges[r][j]<INF && dist[r]+g.edges[r][j]<dist[j])
			{
				dist[j] = dist[r]+g.edges[r][j];
				path[j] = r;
			}
	}

	Transform(g,path,s,v,u,str);   //���ú��������������Ҫ��·���ַ���
	return str;   //����
}

void Graph::Transform(MGraph g,int path[],int s[],int v,int u,CString &str)
{ //�βΰ���Dijkatra�㷨����õ�ͼg��path[],s[],��㡢�յ��š��ַ���������ͨ�����ô��ݷ��أ�
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
            for(j = d;j>0;j--){    //����·����һ���ַ�����
		        CString temp = str;   //��ʱ�ַ�������
		        str.Format(_T("%s %s %s"),temp,g.vexs[apath[j]].name,"-> ");
	        }
			CString temp = str;
			str.Format(_T("%s %s"),temp,g.vexs[apath[0]].name);
		}
	}
}

CString Graph::nearSpot(MGraph g,int v)   //��ĳ������ĸ������㣬���������ٽ���������
{
	int i;
	CString m_str;
	for(i=0;i<g.n;i++)
		if(g.edges[v][i] != 0 && g.edges[v][i] != INF){  //������������0�������֮��ʱ
			CString temp = m_str;     //�����������ľ������Ƽ����ַ���
			m_str.Format(_T("%s %s %s %s %d %s"),temp,"/",g.vexs[i].name,":",g.edges[v][i],"��");
		}
	return m_str;
}

Graph::Graph()
{

}
Graph::~Graph()
{

}