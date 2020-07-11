//question5 arrays ka sum pairwise check kerna hai woh equal to
//x ki value ana chahye aur x bhi user hi dey ga
#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
	node *prv;
}; node *head,*tail;
class list
{
	public:
		list()
		{
			head=NULL;
			tail=NULL;
		}
		void addnode(int n)
		{
			node *temp=new node;
			temp->next=NULL;
			temp->prv=NULL;
			temp->data=n;
			if(head==NULL)
			{
				head=temp;
				tail=temp;
			}
			else
			{
				tail->next=temp;
				temp->prv=tail;
				tail=temp;
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
		void display()
	{
		node *current;
		current=head;
		while(head->next!=NULL)
		{
			
			cout<<current->data<<" ";
			current=current->next;
		}
	}
	
};
int main()
{
	list obj1;
	int x,n,val,i;
	cout<<"How many values you want to enter in the list: ";
	cin>>val;
	for(i=0;i<val;i++)
	{
		cin>>n;
		obj1.addnode(n);
	}
	cout<<endl;
	cout<<"Value of x= ";
	cin>>x;
	obj1.check(x,val);
//	obj1.display();
	
}


