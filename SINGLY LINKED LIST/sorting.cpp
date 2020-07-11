//sorting
#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
class list
{
	node *head,*tail;
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
		void sorting()
		{
			
			int i;
			node *temp;
			node *n;
				
		for(temp=head;temp!=NULL;temp=temp->next)
		{
		 	
			for(n=temp->next;n!=NULL;n=n->next)
		{
			  if(temp->data>n->data)
			{
				i=temp->data;
				temp->data=n->data;
				n->data=i;
			}
		    else
		    {
			}
		
		}
			//n=NULL;	
		}
		
		}
		void display()
		{
			node *current;
			current=head;
			cout<<"Ascending order: "<<endl;
			while(current!=NULL)
			{
				cout<<current->data<<" ";
				current=current->next;
			}
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
