#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
class list
{
	node *head, *tail;
	public:
		list()
		{
			head=NULL;
			tail=NULL;
		}
		void addnode(int n)
		{
			node *temp=new node;
			temp->data=n;
			temp->next=NULL;
			if(head==NULL)
			{
				head=temp;
				tail=temp;
			}
			else
			{
				tail->next=temp;
				tail=tail->next;
			}
		}
		void median(int val)
		{
			node *p;
			p=head;
			int a=0,i=1;
			if(val%2!=0)
			{
				val=val-1;
				a=val/2;
				a=a+1;
				while(i!=a)
				{
					
					p=p->next;
					++i;
				}
				cout<<p->data;
			}
			else
			{
				a=val/2;
			    int b,c;
			    while(i!=a)
				{
					
					p=p->next;
					++i;
				}
			    b=p->data;
				p=p->next;
				c=p->data;
				a=0;
				a=(b+c)/2;
				
				cout<<a;  
			}
		}
};
int main()
{
	list obj;
		int i,n,val;
	cout<<"How many values you want to enter in the list: ";
	cin>>val;
	for(i=0;i<val;i++)
	{
		cin>>n;
		obj.addnode(n);
	}
	obj.median(val);
}
