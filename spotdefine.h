#define N 12
typedef struct
	{
		int no;  //景点编号
	    CString name;  //景点名称
		CString introduce;//景点介绍
	}Vertex;   //景点数据结构
typedef struct
{
	int edges[N][N];  //边的权值
	int n,e;   //图中顶点数、边数
	Vertex vexs[N];  //点的数组
}MGraph;   //完整邻接矩阵结构

class Graph  //图类
{
public:
    MGraph g;
	void Graph::Init(MGraph &g); //初始化图信息
	CString FindPath(MGraph g,int v,int u); //查找路径
	void Transform(MGraph g,int path[],int s[],int v,int u,CString &str);   //路径整理函数
	CString nearSpot(MGraph g,int v);
    Graph();
	virtual ~Graph();

};


