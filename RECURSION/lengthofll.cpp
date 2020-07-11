#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};node *head, *tail;
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
			}
			else
			{
				tail->next=temp;
				tail=tail->next;
			}
		}
		int length(node *p)
		{
			if(p!=NULL)
			{
				p=p->next;
				return length(p)+1;
			}
			else 
			return 0;
		}
};
int main()
{
	int i,val,n,a;
	list obj;
	cout<<"How many values you want in linked list: ";
	cin>>val;
	for(i=0;i<val;i++)
	{
		cin>>n;
		obj.addnode(n);
    }
	a=obj.length(head);
	cout<<a;
	
}
