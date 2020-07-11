//circular linked list
#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};node *head,*tail;
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
		temp->data=n;
		temp->next=NULL;
		if(head==NULL)
		{
			head=temp;
			tail=temp;
			tail->next=head;
		}
		else
		{
			tail->next=temp;
			tail=tail->next;
			tail->next=head;
		}
	}
	void sorting()
	{
		int temp;
		node *n,*t;
		n=head;
		for(n=n->next;n!=head;n=n->next)
		{
			for(t=n->next;t!=head;t=t->next)
			{
				if(n->data>t->data)
				{
					temp=n->data;
	                n->data=t->data;
	                t->data=temp;
				}
				else
				{
					
				}
			}
		}
	}
	void display()
		{
			node *current;
			current=head;
			cout<<"Ascending order: "<<endl;
			do
			{
				cout<<current->data<<" ";
				current=current->next;
			}while(current!=head);
		}
};
int main()
{
	int i,val,n;
	list obj;
	cout<<"How many values you want in linked list: ";
	cin>>val;
	for(i=0;i<val;i++)
	{
		cin>>n;
		obj.addnode(n);
    }
	obj.sorting();
	obj.display();
	
}
