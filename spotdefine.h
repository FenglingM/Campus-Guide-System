#define N 12
typedef struct
	{
		int no;  //������
	    CString name;  //��������
		CString introduce;//�������
	}Vertex;   //�������ݽṹ
typedef struct
{
	int edges[N][N];  //�ߵ�Ȩֵ
	int n,e;   //ͼ�ж�����������
	Vertex vexs[N];  //�������
}MGraph;   //�����ڽӾ���ṹ

class Graph  //ͼ��
{
public:
    MGraph g;
	void Graph::Init(MGraph &g); //��ʼ��ͼ��Ϣ
	CString FindPath(MGraph g,int v,int u); //����·��
	void Transform(MGraph g,int path[],int s[],int v,int u,CString &str);   //·��������
	CString nearSpot(MGraph g,int v);
    Graph();
	virtual ~Graph();

};


