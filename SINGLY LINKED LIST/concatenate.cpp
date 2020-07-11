#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};node *first,*second,*third;
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
		void concatenate(node *f, node*s)
		{
			node *p;
			p=f;
			while(p->next!=NULL)
			{
				p=p->next;
			}
			p->next=second;
			second=NULL;
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
int main ()
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
	cout<<endl<<endl;
	obj.display(second);
	obj.concatenate(first,second);
	cout<<endl<<"Concatenated list: "<<endl;
	obj.display(first);
}
