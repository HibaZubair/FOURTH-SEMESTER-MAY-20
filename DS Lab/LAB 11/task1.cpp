//Deletion of nodes from tree also task-2 lab
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
//			cout<<endl<<"PRE-ORDER: ";
//			pre_order(root);
//			cout<<endl<<"POST-ORDER: ";
//			post_order(root);
//			cout<<endl;
		}
		void deletion(int n)
		{
			root=Delete(root,n);
		}
		//Function to find minimum in a tree. 
node* FindMin(node* t)
{
	while(t->left != NULL) 
	{
	t = t->left;//cause bilkul last value leftmost value wil be smallest
    }
	return t;
}

// Function to search a delete a value from tree.
node* Delete(node *t, int data)
 {
	if(t == NULL) 
	{
		return t; 		
	}
	
	else if(data < t->data) 
	{
	  t->left = Delete(t->left,data);
    }
	else if (data > root->data) 
	{
	 t->right = Delete(t->right,data);
    }
		
	else {
		// Case 1:  No child
		if(t->left == NULL && t->right == NULL) { 
			delete t;
			t = NULL;
		}
		//Case 2: One child 
		//if has only left child
		else if(t->left == NULL)
	    {
			node *temp = t;
			t = t->right;
			delete temp;
		}
		//if has only right child
		else if(t->right == NULL) {
			node *temp = t;
			t = t->left;
			delete temp;
		}
		// case 3: 2 children
		else { 
			node *temp = FindMin(t->right);
			t->data = temp->data;
			t->right = Delete(t->right,temp->data);
		}
	}
	return t;
}
		
};
int main ()
{
	tree BST;
	BST.insert(12);
	BST.insert(7);
	BST.insert(14);
	BST.insert(8);
	BST.insert(3);
	BST.insert(13);
	BST.insert(17);
	BST.insert(1);
	BST.insert(9);
	BST.insert(20);
	BST.insert(5);
	BST.insert(11);
	BST.insert(18);
	cout<<endl;
	BST.deletion(12);
	BST.deletion(3);
	BST.deletion(7);
	BST.deletion(5);
	BST.display();
	return 0;
}
