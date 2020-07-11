//By adjacency matrix-DFS
#include<iostream>
using namespace std;
class graph
{
	int no_of_vertices, **matrix;
    char *vertices,alpha='A';
	public:
	
	//first declaring all matrix zero
	//CONSTRUCTOR
	graph(int no_of_vertices)
	{
		//vertices A,B,C,.... array
		vertices=new char[no_of_vertices];
		for(int p=0;p<no_of_vertices;p++)
		{
			vertices[p]=alpha;
			++alpha;
		}
		
		this->no_of_vertices=no_of_vertices;
		//matrix column
		matrix=new int*[no_of_vertices];
		//each column box will get horizontal array
		for(int a=0;a<no_of_vertices;a++)
		{
			matrix[a]=new int[no_of_vertices];
		}
		//initializing with zero
		for(int i=0;i<no_of_vertices;i++)
		{
			for(int j=0;j<no_of_vertices;j++)
			{
				matrix[i][j]=0;
			}
		}
		//printing matrix
		cout<<"Initially the Adjacency Matrix:"<<endl;
		for(int b=0;b<no_of_vertices;b++)
		{
			for(int c=0;c<no_of_vertices;c++)
			{
				cout<<matrix[b][c]<<" ";
			}
			cout<<endl;
		}
	}
	
	//ADDING EDGES
	//since un-directed graph so a[i][j]=a[j][i]
	void add_edge(int i,int j)
	{
		matrix[i][j] = 1;
        matrix[j][i] = 1;
	}
	
	//DELETE EDGES
	//since un-directed graph so a[i][j]=a[j][i]	
	void delete_edge(int i,int j)
	{
		matrix[i][j] = 0;
        matrix[j][i] = 0;
	}
	
	//Printing the matrix
	void display()
	{
		cout<<endl<<"Adjacency Matrix:"<<endl;
		for(int b=0;b<no_of_vertices;b++)
		{
			for(int c=0;c<no_of_vertices;c++)
			{
				cout<<matrix[b][c]<<" ";
			}
			cout<<endl;
		}
	}
	
	//TRAVERSAL DFS:Depth first search
	void traverse(int n,int starting_vertex)
	{
		
		bool *visited;
		visited=new bool[n];
		for(int i=0;i<n;i++)
		{
			visited[i]=false;
		}
		cout<<endl<<"Visited vertices(path) by Depth-First search: "<<endl;
		traverse_dfs(matrix,n,starting_vertex,visited);
	}
	void traverse_dfs(int **matrix,int n,int starting_vertex,bool *visited)
	{
		cout<<vertices[starting_vertex]<<" ";
		visited[starting_vertex]=true;
		
		for(int i=0;i<n;i++)
		{
			if(matrix[starting_vertex][i]==1)
			{
				if(visited[i]==false)
				{
					traverse_dfs(matrix,n,i,visited);
				}
				else
				{
				}
			}
			else
			{
			}
		}
	}
};
int main()
{
	graph obj(8);
	
	obj.add_edge(0,1);
	obj.add_edge(0,3);
	obj.add_edge(0,6);
	obj.add_edge(1,4);
	obj.add_edge(1,5);
	obj.add_edge(2,7);
	obj.add_edge(4,6);
	obj.add_edge(5,2);
	obj.add_edge(5,3);
	
	
	
	obj.display();
	
	obj.traverse(8,0);
	
}
