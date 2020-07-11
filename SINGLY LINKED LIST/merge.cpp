#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};node *first=NULL, *second=NULL, *third=NULL, *last=NULL;
class list
{
    node *tailf,*tails;
		
		public:
			
	list()
	{
	
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
	void merge(node *first, node *second)
	{
		
		if(first->data<second->data)
		{
			third=first;
			last=first;
			first=first->next;
			third->next=NULL;
			cout<<last->data;
		}
		else
		{
			third=second;
			last=second;
			second=second->next;
			third->next=NULL;
			cout<<last->data;
		}
		while(first!=NULL && second!=NULL)
		{
			if(first->data<second->data)
			{
				last->next=first;
				last=first;
				first=first->next;
				last->next=NULL;
				
			}
			else
			{
				last->next=second;
				last=second;
				second=second->next;
				last->next=NULL;
				
			}
	
		}
		if(first!=NULL)
		{
			last->next=first;
			
		}
		else
		{
			last->next=second;
			
		}
	}
	void display(node *third)
    {
    	node *p;
		p=third;
        
			while(p!=NULL)
			{
				
				cout<<p->data<<" ";
				p=p->next;
			}
    }
};
//inputs asscending order mein jayein gae
int main()
{
	list obj;
	int i,n,val;
	cout<<"How many values you want to enter in the list: ";
	cin>>val;
	for(i=0;i<val;i++)
	{
		cin>>n;
		obj.addnode1(n);
	}
	cout<<endl<<"List 1: ";obj.display(first);
	val=0;
	n=0;
	cout<<endl;
	cout<<"How many values you want to enter in the list: ";
	cin>>val;
	for(i=0;i<val;i++)
	{
		cin>>n;
		obj.addnode2(n);
	}
	cout<<endl<<"List 2: ";obj.display(second);
	cout<<endl;
	cout<<endl<<"Arranged List: "<<endl;
	obj.merge(first,second);
	obj.display(third);
}
