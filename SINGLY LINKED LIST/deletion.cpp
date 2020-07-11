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
		//deleting head
		void deletehead()
		{
			node *temp;
			temp=head;
			head=head->next;
			delete temp;
		}
		//deleting tail
		void deletetail()
		{
			node *temp, *n=NULL;
			temp=head;
			while(temp->next!=NULL)
			{
				n=temp;
				temp=temp->next;
			}
		
			
			n->next=NULL;
			tail=n;
			delete temp;
		}
		void display()
		{
			node *current;
			current=head;
			cout<<endl;
			cout<<"After deleting head node"<<endl;
			while(current!=NULL)
			{
				cout<<current->data<<endl;
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
	obj.deletetail();
	obj.display();	
}
