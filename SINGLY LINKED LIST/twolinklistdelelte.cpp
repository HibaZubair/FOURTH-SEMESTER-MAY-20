#include<iostream>
using namespace std;
struct node
{
	int data;
	
	node *next;
};node *first, *second;
class list
{
	node *tailf=NULL, *tails=NULL;
	public:
		list()
		{
			first=NULL;
			second=NULL;
		}
		void addnode1(int n)
		{
			node *t=new node;
			t->data=n;
			t->next=NULL;
			if(first==NULL)
			{
				first=t;
				tailf=t;
			}
			else
			{
				tailf->next=t;
				tailf=t;
			}
		}
		void addnode2(int n)
		{
			node *t=new node;
			t->data=n;
			t->next=NULL;
			if(second==NULL)
			{
				second=t;
				tails=t;
			}
			else
			{
				tails->next=t;
				tails=t;
			}
		}
		void deletion(node *first, node*second, int val)
	{
		int n=0,i=0,j=0,a=0;
		node *temp, *p;
		
	
	while(second!=NULL)
	{
		temp=first;
	    if(second->data==0)
	   {
		temp->data=0;
		temp=temp->next;
	   }
	    else
	   {
		while(i!=second->data)
		{
			++i;
			temp=temp->next;
		}
		i=0;
		temp->data=0;
	   } 
	   second=second->next;
	}	    
		  
	}
	void deletion(node *f)
	{
		node *temp,*p;
		temp=f;
		p=f;
		while(temp!=NULL)
		{
			if(temp->data==0)
			{
				p->next=temp->next;
				temp->next=NULL;
				delete temp;
				temp=p;
			}
			else
			{
				
			}
			p=temp;
			temp=temp->next;
		}
	}
	void display(node *current)
		{
			
			while(current!=NULL)
			{
				cout<<current->data;
				current=current->next;
			}
		}
		
};
int main()
{
	list obj;
	
	int i,n,val,val2;
	cout<<"How many values you want to enter in the list: ";
	cin>>val;
	for(i=0;i<val;i++)
	{
		cin>>n;
		obj.addnode1(n);
	}
		obj.display(first);
	n=0;
	cout<<endl;
	cout<<"How many values you want to enter in the list: ";
	cin>>val2;
	for(i=0;i<val2;i++)
	{
		cin>>n;
		obj.addnode2(n);
	}
		obj.display(second);
	cout<<endl<<"Which node you want to delete: ";
	cin>>n;

	obj.deletion(first, second, val);
	obj.deletion(first);
	obj.display(first);

}
