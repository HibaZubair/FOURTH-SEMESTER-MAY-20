#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<time.h>
#include<string.h>
#include<queue>
using namespace std;
class MinD{
	public:
	double tdistance;
	queue<string> q;
};
MinD md[3]={0};
class edge
{
	public:
		double distance;
		bool e;
		edge(){}
		edge(double d)
		{
			distance=d;
		}
		edge(double d,int e)
		{
			distance=d;
			this->e=e;
		}
};
class node
{
	public:
		int name,credit;
		node *left,*right;
		node()
		{
			this->left=this->right=NULL;
		}
};
int tcredits;
bool flag=0;
class LRtree
{
	public:
		node *root;
		LRtree()
		{
			root=NULL;
		}
		void insertion(string lr,int data,int credit)
		{
			insert(lr,data,root,0,lr.length(),credit);
		}
		// Function to insert the tree
		void insert(string lr,int data,node* c,int i,int sl,int credit)
		{
			node *nn=new node();
			nn->name=data;
			nn->credit=credit;
			// Saving root
			if(root == NULL)
			{
				root=nn;
				root->left=root->right=0;
				return;
			}
			// If the index is on the second last index of the string
			if(i == sl-1)
			{
				// save to left
				if(lr[i] == 'l')
				{
					c->left=nn;
				}
				// save to right
				else
				{
					c->right=nn;;
				}
				return;
			}
			// move to left
			else if(lr[i] == 'l')
			{
				insert(lr,data,c->left,i+1,sl,credit);
			}
			// move to right
			else if(lr[i] == 'r')
			{
				insert(lr,data,c->right,i+1,sl,credit);
			}
			
		}
		void question(int que)
		{
			ifstream ifile;
			string out;
			ifile.open("question.txt");
			// goes to the line number represented by the node name
			for(int i=0;i<que;i++)
			{
				getline(ifile,out);
				
			}
			cout << out << endl;
		}
		char answer()
		{
			ifstream ifile;
			char out;
			ifile.open("YesNo.txt");
			srand(time(NULL));
			int x=rand()%2+1;
			for(int i=0;i<x;i++)
			{
				ifile>>out;
			}
			return out;
		}
		int traverse(node *c)
		{
			char ans;
			// displays question
			question(c->name);
//			cin >> ans;
			// selects answer randomly
			ans=answer();
			cout << ans << endl;
			// total number of credits are added to calculate the percentage
			tcredits=c->credit+tcredits;
			// if the tree ends
			if(c->left == NULL && c->right == NULL)
			{
				if(flag == 0)
				{
					// returns zero if the last answer of the user is no
					return 0;	
				}
				// returns the credit of the last node
				return c->credit;
			}
			else if(ans=='Y')
			{
				flag=1;
				// adds credit of all the yes
				return traverse(c->right)+c->credit;
			}
			else if(ans == 'N')
			{
				flag=0;
				return traverse(c->left);
			}
			else
			{
				cout << "Invalid entry. Enter either 'Y' or 'N'" << endl;
				traverse(c);
			}
		}
};
class graph
{
	public:
		edge matrix[59][59];
		double distance;
		graph()
		{
			for(int i=0;i<59;i++)
			{
				for(int j=0;j<59;j++)
				{
					matrix[i][j].e=0;
					matrix[i][j].distance=0;
				}
			}
			distance=0;
		}
		// adds edges and their distances
		void addedges(int x,int y,double d)
		{
			matrix[x][y].e=1;
			matrix[x][y].distance=d;
		}
		string convert(int min)
		{
			ifstream ifile;
			string out;
			ifile.open("graph.txt");
			// goes to the line number represented by the edge name
			for(int i=0;i<=min;i++)
			{
				getline(ifile,out);
						
			}
			return out;
		}
		int minedge(int x,int y)
		{
			int min=y;
			// minimum distance from the edge is calculated
			for(int i=1;y+i<59;i++)
			{
				if(matrix[x][y+i].e == 1 )
				{
					if(matrix[x][y+i].distance <= matrix[x][min].distance)
					{
						min=y+i;
					}
				}
			}
			// total distance is saved
			distance=matrix[x][min].distance+distance;
			return min;
		}
		void dijkstra(int start,int j)
		{
			int min=start,i=1;
			string s=convert(min);
			// enqueues the string into a queue
			md[j].q.push(s);
			// Checks if the hospital is reached
			if(s == "JPMC" || s == "Civil" || s == "DOW" || s == "Indus" || s == "SIUT" || s == "Ziauddin North" || s == "Ziaudding Clifton" || s == "Ziauddin Kemari" || s == "Aga Khan")
			{		

				return;
			}
			// if start reaches the end
			if(start >= 59)
			{
				return;
			}
			// the minimum edge is accessed to find its next connecting minimum edge
			while(1)
			{
				if(matrix[start][i].e == 1)
				{
					min=minedge(start,i);
					matrix[start][i].e=0;
					break;
				}
				i++;
			}
			dijkstra(min,j);
			md[j].tdistance=distance;
		}
		
};
