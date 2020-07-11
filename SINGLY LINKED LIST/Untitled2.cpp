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
			}
			else
			{
				tail->next=temp;
				tail=tail->next;
			}
		}
		int recurr(node *head,int key)
		{
			static int frequency=0;
			if(head==NULL)
			{
				return frequency;
			}
			else if(head->data==key)
			{
				++frequency;
				cout<<endl<<frequency;
				return recurr(head->next,key);
			}
			return recurr(head->next,key);
			
		}
};
int main()
{
	list obj;
	int n,val,i;
	cout<<"Linked list elements: ";
	cin>>val;
	cout<<endl<<"Enter elements: ";
	for(i=0;i<val;i++)
	{
		cin>>n;
		obj.addnode(n);
	}
	n=0;
	val=0;
	cout<<endl<<"kis ki frequency maloom kerni hai digit likho: ";
	cin>>n;
	val=obj.recurr(head,n);
	cout<<endl;
	cout<<"frequency: "<<val;
}
