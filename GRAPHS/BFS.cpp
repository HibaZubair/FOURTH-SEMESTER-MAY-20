//By adjacency matrix-BFS
#include<iostream>
//using built-in list library for queue to implement bfs
#include<list>
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
	
	//TRAVERSAL BFS:Breadth first search
	//using built-in queue funtion and list utility of cpp
	void traverse(int n,int starting_vertex)
	{
		
		bool *visited;
		visited=new bool[n];
		for(int i=0;i<n;i++)
		{
			visited[i]=false;
		}
		cout<<endl<<"Visited vertices(path) by Breadth-First search: "<<endl;
		traverse_bfs(matrix,n,starting_vertex,visited);
	}
	void traverse_bfs(int **matrix,int n,int starting_vertex,bool *visited)
	{
		list<int> queue;
		queue.push_back(starting_vertex);
		visited[starting_vertex]=true;
		
		while(!queue.empty())
		{
        starting_vertex = queue.front(); 
        cout <<vertices[starting_vertex]<<" "; 
        queue.pop_front(); 
  
        for(int i=0;i<n;i++)
		{
			if(matrix[starting_vertex][i]==1)
			{
				if(visited[i]==false)
				{
					visited[i] = true; 
					queue.push_back(i); 
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
