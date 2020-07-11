#include<iostream>
using namespace std;
struct node {
	int data;
	node *left ,*right ;
} *root = NULL;
class Trees {
	public :
void insert(int key)
	{
		struct node *t=root;
		struct node *r=NULL,*p;
		if(root==NULL)
			{
				p=new node;
				p->data=key;
				p->left=p->right=NULL;
				root=p;
				return;
			}
		while(t!=NULL)
		{
		r=t;
		if(key<t->data)
		t=t->left;
		else if(key>t->data)
		t=t->right;
		else
		return;
		}
	p=new node;
	p->data=key;
	p->left=p->right=NULL;
	if(key<r->data) r->left=p;
	else r->right=p;
}
	int height (node *temp)
	{
		int x,y;
		if (temp==NULL) return 0;
		else {
			x=height(temp->left);
			y=height(temp->right);
		}
		if (x>y) return x+1;
		else return y+1;
	}
	node *Predecessor (node *temp)
	{
		while (temp!=NULL && temp->right!=NULL)
		temp=temp->right;
		return temp;
	}
	node *Successor (node *temp)
	{
		while (temp!=NULL && temp->left!=NULL)
		temp=temp->left;
		return temp;
		
	}
	node *Delete(node *p,int key)
	{
		cout << "P KA DATA ABH HY" << p->data << endl;
		node *q;
		if(p==NULL)
		return NULL;
		if(p->left==NULL && p->right==NULL)
		{
			if(p==root)
			root=NULL;
			delete(p);
			return NULL;
		}
		if(key < p->data)
		p->left=Delete(p->left,key);
		else if(key > p->data)
		p->right=Delete(p->right,key);
		else
		{ 
			if(height(p->left)>height(p->right))
			{
				cout << "P";
				q=Predecessor(p->left);
				p->data=q->data;
				p->left=Delete(p->left,q->data);
			}
			else
			{	cout << "Q";
				cout <<"PDATANOW"<< p->right->data << endl;
				q=Successor(p->right);
				cout <<"PDATA"<< p->data << endl;
				p->data=q->data;
				p->right=Delete(p->right,q->data);
			}
		}
		return p;
	}
	void display (node *temp)
	{
		if (temp == NULL) 
        return;
    	else {
    	cout << temp->data << " ";
    	display(temp->left);
    	display(temp->right);
		}
	}
};
int main ()
{
	Trees obj;
	obj.insert(12);
	obj.insert(5);
	obj.insert(16);
	obj.insert(3);
	obj.insert(7);
	obj.insert(1);
	obj.insert(9);
	obj.insert(8);
	obj.insert(11);
	obj.insert(13);
	obj.insert(17);
	obj.insert(14);
	obj.insert(20);
	obj.insert(18);
	cout << "Current Tree\n";
	obj.display(root);
	cout << "\nTree Now\n";
	obj.Delete(root,12);
	obj.display(root);
//	cout << "\nTree Now\n";
//	obj.Delete(root,3);
//	obj.display(root);
//	cout << "\nTree Now\n";
//	obj.Delete(root,7);
//	obj.display(root);
//	cout << "\nTree Now\n";
//	obj.Delete(root,5);
//	obj.display(root);
	
}
