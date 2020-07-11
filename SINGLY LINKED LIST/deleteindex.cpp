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
		void deletenode(int n,int val)
		{
			int i=0;
			node *temp, *p=NULL;
			temp=head;
			if(n==0)
			{
				head=temp->next;
				temp->next=NULL;
				delete temp;
			}
			
			else if(n<=val)
			{
			while(i!=n)
			{
				p=temp;
				temp=temp->next;
				++i;
			}
			p->next=temp->next;
			temp->next=NULL;
			delete temp;
		    }
			
			else
			{
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
		//delete entire list
		void deleteentire()
		{
			node *p, *current;
			p=head;
			current=p;
			while(current!=NULL)
			{
				p=current->next;
				delete current;
				current=p;
			}
			head=NULL;
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
	cout<<endl<<"Want to delete a specific node ?";
	cin>>choice;
	//if(choice=='y')
    //{
	obj.deletenode(n,val);
		obj.display();
//    }
//    else
//    obj.deleteafternode(n);
//
//	obj.display();
	//cout<<endl<<endl;
//	obj.deleteentire();
//		obj.display();
//	
}
