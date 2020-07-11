//delete any node with data
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
		//deleting that specific node
		void deletenode(int n)
		{
			node *temp, *p=NULL;
			temp=head;
			
			if(n==head->data)
				{
			        head=head->next;
			        delete temp;
				}
			else if(n==tail->data)
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
			else
			{
			
			while(temp->data!=n)
			{
				p=temp;
				temp=temp->next;
				
			}
		
		    p->next=temp->next;
		    
		    delete temp;
		   }
		}
		//delete one after that specific node
		void deleteafternode(int n)
		{
			node *temp, *p=NULL;
			temp=head;
			
			if(n==head->data)
				{
					temp=temp->next;
			        head->next=temp->next;
			        delete temp;
				}
			else if(n==tail->data)
			{
				cout<<"the node is a tail node hence no node after that can be deleted";
			}
			
			else
			{
				while(temp->data!=n)
			{
				
				temp=temp->next;
				p=temp;
				
			}
		
		    temp=temp->next;
		    p->next=temp->next;
		    
		    delete temp;
		      
		    }
		}
		void deleteodd()
		{
			node *temp, *p;
			temp=head;
			p=temp;
			while(temp!=NULL)
			{
				
				if(temp->data%2!=0)
				{
					temp=temp->next;
				    p=temp->next;
					delete temp;
					if(p->next!=NULL)
					{
						node *temp, *p;
			            temp=head;
			            p=temp;
					}	
					else
					{
						cout<<p->data;
					}
				}
				else
				{
					p=temp;
					temp=temp->next;
				}
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
	char choice;
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
	cout<<endl<<"Which value you want to delete: ";
	cin>>n;
	obj.deleteodd();
	cout<<endl<<"Want to delete a specific node ?";
	cin>>choice;
	if(choice=='y')
    {
	obj.deletenode(n);
    }
    else
    obj.deleteafternode(n);

	obj.display();
	
}
