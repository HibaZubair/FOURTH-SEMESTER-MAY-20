#include<iostream>
using namespace std;
struct node
{
	int data;
	node *prv;
	node *next;
};node *head, *tail;
class list{
	
	public:
	list()
	{
		head=NULL;
		tail=NULL;
	}
	void addnode(int n)
	{
		node *t=new node;
		t->data=n;
		t->prv=NULL;
		t->next=NULL;
		
		if(head==NULL)
		{
			head=t;
			tail=t;
		}
		else
		{
			tail->next=t;
			t->prv=tail;
	        tail=t;
		}
	}
	//insertion at head
	void insertionhead(int i)
	{
		node *temp=new node;
		temp->next=head;
		head->prv=temp;
		temp->prv=NULL;
		temp->data=i;
		head=temp;
		
	}
	//insertion at tail
		void insertiontail(int i)
	{
		node *temp=new node;
		temp->prv=tail;
		tail->next=temp;
		temp->data=i;
		temp->next=NULL;
		tail=temp;
		
	}
	//insertion at given index
	void insertionatanynode(int i,int index)
	{
		int n;
		node *p,*c;
		node *temp=new node;
		temp->data=i;
		p=head;
		
			for(n=1;n<index;n++)
			{
				p=p->next;
			}
			temp->next=p->next;
			temp->prv=p;
			c=p->next;
			c->prv=temp;
			p->next=temp;
	}
	//insertion at middle for even linked list
	void insertinmiddleeven(int i,int val)
	{
		int a=val/2;
		int n;
		node *p,*c;
		node *temp=new node;
		temp->data=i;
		p=head;
		
			for(n=1;n<a;n++)
			{
				p=p->next;
			}
			temp->next=p->next;
			temp->prv=p;
			c=p->next;
			c->prv=temp;
			p->next=temp;
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
	list obj;
	int i,n,val,choice,index;
	cout<<"How many values you want to enter in the list: ";
	cin>>val;
	for(i=0;i<val;i++)
	{
		cin>>n;
		obj.addnode(n);
	}
	cout<<endl;
	cout<<"Where do you want to insert/n 1.Head/n2.Tail/n3.Any node/n/4.In middle";
	cin>>choice;
	cout<<endl<<"What you want to insert: ";
	cin>>i;
	if(choice==1)
	{
		obj.insertionhead(i);
		
	}
	else if(choice==2)
	{
		obj.insertiontail(i);
	}
	else if(choice==3)
	{
		cout<<endl<<"Which index you want to insert: ";
		cin>>index;
		obj.insertionatanynode(i,index);
		
	}
	else
	{
		obj.insertinmiddleeven(i,val);
	}
	
	obj.display();
}
