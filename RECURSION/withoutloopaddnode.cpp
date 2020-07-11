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
			struct node *temp;
			temp = new node;
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
	node* hh(node *p)
	{
		if(p->next!=NULL)
		{
		p=p->next;
		return hh(p);
	}
		else
		{
			node *t=new node;
			t->data=5;
			p->next=t;
			t->next=NULL;
		}
		
    	
		p=head;
        
			while(p!=NULL)
			{
				
				cout<<p->data<<" ";
				p=p->next;
			}
    
		
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
    obj.hh(head);
    
}
