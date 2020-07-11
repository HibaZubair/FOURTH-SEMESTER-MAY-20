#include<iostream>
using namespace std;
struct node
{
	int data;
	node *prv;
	node *next;
};node *head, *tail;
class list{
	
	public:
	list()
	{
		head=NULL;
		tail=NULL;
	}
	void addnode(int n)
	{
		node *t=new node;
		t->data=n;
		t->prv=NULL;
		t->next=NULL;
		
		if(head==NULL)
		{
			head=t;
			tail=t;
		}
		else
		{
			tail->next=t;
			t->prv=tail;
	        tail=t;
		}
	}
	void check(int x,int val)
		{
			int ans;
			node *p,*t,*c;
			p=head;
			t=head;
			c=head;
			int i,a;
			for(i=0;i<x;i++)
			{
				a=p->data;
				t=t->next;
				while(c!=NULL)
				{
				   ans=c->data;
				   ans=a+ans;
				   if(ans==x)
				   {
				   	cout<<"( "<<a<<", "<<c->data<<" )";
				   	ans=0;
				   	c=c->next;
					}
					else
					{
						ans=0;
						c=c->next;
					}	
				}
				p=t;
				c=head;
				
			}
		}
	
};
int main()
{
	list obj;
	int i,n,val,x;
	cout<<"How many values you want to enter in the list: ";
	cin>>val;
	for(i=0;i<val;i++)
	{
		cin>>n;
		obj.addnode(n);
	}
	cout<<endl;
		cout<<"Value of x= ";
	cin>>x;
	obj.check(x,val);
}
