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
		void reverse()
		{
			node *p,*q,*r;
			p=head;
			q=NULL;
			r=NULL;
			while(p!=NULL)
			{
				r=q;
				q=p;
				p=p->next;
				q->next=r;
			
			}
			
			head=q;
			
		}
		void display()
		{
			node *current;
			current=head;
			while(current!=NULL)
			{
				cout<<current->data<<" ";
				current=current->next;
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
		obj.display();
		obj.reverse();
		cout<<endl<<endl<<"Reversed list: "<<endl;
		obj.display();
}
