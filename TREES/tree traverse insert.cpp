//Tree traversal + insertion
#include<iostream>
using namespace std;
struct node
{
    int data;
	node *left;
	node *right;	
};node *root;
class tree
{
	public:
	tree()
	{
		root=NULL;
	}
	void insert(int n)
	{
		root=insertion(n,root);
	}
	node* insertion(int n, node *t)
	{
		
		if(t==NULL)
		{
			t=new node;
			t->data=n;
			t->left=NULL;
			t->right=NULL;
		}
		//left
		else if(n<t->data)
		{
			t->left=insertion(n,t->left);
		}
		//right
		else if(n>t->data)
		{
			t->right=insertion(n,t->right);
		}
		return t;
	}
	//inorder
	void inorder(node *t){
			if(t==NULL)
			{
				return;
			}
			inorder(t->left);
			cout<<t->data<<" ";
			inorder(t->right);
			
		}
	//post-order
		void post_order(node *t)
		{
			if(t==NULL)
			{
				return;
			}
			post_order(t->left);
			post_order(t->right);
			cout<<t->data<<" ";
			
		}
	//pre-order
		void pre_order(node *t)
		{
			if(t==NULL)
			{
				return;
			}
			cout<<t->data<<" ";
			pre_order(t->left);
			pre_order(t->right);
			
		}
		
		void display()
		{
			cout<<"INORDER: ";
			inorder(root);
			cout<<endl<<"PRE-ORDER: ";
			pre_order(root);
			cout<<endl<<"POST-ORDER: ";
			post_order(root);
			cout<<endl;
		}
};
int main ()
{
	tree BST;
	BST.insert(4);
	BST.insert(55);
	BST.insert(16);
	BST.insert(1);
	cout<<endl;
	BST.display();
	return 0;
}
