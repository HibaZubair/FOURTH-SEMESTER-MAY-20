#include<iostream>
using namespace std;
struct node 
{
	char data;
	int priority;
	node *next;
} *head,*tail;
class priority_queue{
	
	public :
		priority_queue()
		{
			head=NULL;
			tail=NULL;
		}
		void push (char c)
		{
			node *temp=new node;
			if (temp==NULL)
			{
				cout <<"Priority Queue is Full"<<endl;
			}
			else 
			{
				temp->data=c;
				temp->priority=int(c);//ASCII value 
			    temp->next=NULL;
			    if (head==NULL)
			    {
			    	head=temp;
					tail=temp;
				}
				else 
				{
					tail->next=temp;
					tail=temp;
				}
			}
		}
		 
		 int queue (node *head)
	  {
	  	int b = 0;
	  	while(head!=NULL)
	  	{
	  		if (b < head->priority)
	  		b = head->priority;
	  		head = head->next;
		  }
		  return b;
	  }   
      void pop (){
      	node *p,*q;
      	char a;
      	if (head==NULL)
      	{
      		cout <<endl<< "Queue Is Empty";
		  }
		else {
			p=head;
			q=head;
			int x=queue(head);
			while (q!=NULL)
			{
				if (head->priority==x)
				{
					a=head->data;
					head=head->next;
					cout <<"Popped Element of highest priority: "<<a<<endl;
					break;
				}
				p=q;
				q=q->next;
				if (q->priority==x)
				{
					a=q->data;
					p->next=q->next;
					cout << "Popped Element of highest priority: "<<a<<endl;
					break;
				}
			}
		}
	  }
		void display (node *current)
		{
			cout <<"Priority according to ASCII values"<<endl;
			while (current!=NULL)
			{
				cout <<" "<< current->data << " " << current->priority<<" "<<endl;
				current=current->next;
			}
			}
};
int main ()
{
	
	int n;
	char c;
	priority_queue obj;
	while (1)
	{
	
	cout << "1.Insertion\n2.Pop\n3.Exit\n4.Display"<<endl;
	cin >> n;
	if(n==1)
		{
				cout << "Enter element to be inserted\n";
			cin >> c;
			obj.push(c);
		}
	if(n==2)
		{
				obj.pop();
				}
	if(n==3)
			{
			exit(0);
		}
	if(n==4)
		    {
			  obj.display(head);
			  }
	if(n>4)
		{
		cout <<"Wrong Input"<<endl;
		exit(0);
	}
	}
}

