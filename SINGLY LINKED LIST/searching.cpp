//searching
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
		void search(int n)
		{
			int count;
			node *search;
			search=head;
			while(search!=NULL)
			{
				if(n==search->data)
				{
					count=1;
				}
				else
				{
				}
				search=search->next;
			}
			if(count>0)
			{
				cout<<endl<<"the element exists in the list";
			}
		    if(count==0)
			{
				cout<<endl<<"It does not exist";
			}
		}
		void display()
		{
			node *current;
			current=head;
			while(current!=NULL)
			{
				cout<<current->data;
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
	n=0;
	cout<<endl<<"Which value you want to search: ";
	cin>>n;
	obj.search(n);
	
}
