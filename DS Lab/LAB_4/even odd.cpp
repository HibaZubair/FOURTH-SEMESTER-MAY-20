//evenodd
#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
node *first=NULL, *second=NULL;
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
			node *first=new node;
			first->data=n;
			first->next=NULL;
			if(head==NULL)
			{
				head=first;
				tail=first;
			}
			else
			{
				tail->next=first;
				tail=tail->next;
			}
		 	
		}
		void addnode2(int n)
		{
			
			
			node *second=new node;
			second->data=n;
			second->next=NULL;
			if(head==NULL)
			{
				head=second;
				tail=second;
			}
			else
			{
				tail->next=second;
				tail=tail->next;
			}
		}

	
   void display(node *p)
    {
    	p=head;
        cout<<endl<<"Arranged List: "<<endl;
			while(p!=NULL)
			{
				cout<<p->data<<" ";
				p=p->next;
			}
    }
};
int main()
{
	int i,val,n;
	
	list obj,obj1;
	cout<<"How many values you want in linked list: ";
	cin>>val;
	int arr[val];
	for(i=0;i<val;i++)
	{
		cin>>n;
		arr[i]=n;
		obj.addnode(n);
	}
	

	n=0;
   	for(i=0;i<val;i++)
	{
		n=arr[i];
		if(n%2==0)
		{
		obj1.addnode2(n);}
		else
		{
		}
		
	}
	for(i=0;i<val;i++)
	{
		n=arr[i];
		if(n%2!=0)
		{
		obj1.addnode2(n);}
		else
		{
		}
		
	}
	obj1.display(second);
	
}
