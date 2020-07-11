#include<iostream>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
};node*root=0;
class tree{
	public:
		node* create()
		{
		int x;
		node *newnode=new node;
		cout<<"Enter data/nEnter -1 for no node"<<endl;
		cin>>x;
		if(x==-1)
		{
			return 0;
		}
		else
		{
			newnode->data=x;
			cout<<endl<<"Enter Left child"<<endl;
			cin>>x;
			newnode->left=create();
			cout<<endl<<"Enter right child"<<endl;
			cin>>x;
			newnode->right=create();
			return newnode;
		}
	}
};
int main()
{
	tree bt;
	root=bt.create();
}
