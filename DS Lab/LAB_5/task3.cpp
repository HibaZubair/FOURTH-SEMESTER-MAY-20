#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
node *head,*tail,*p;
class list{
	
	public:

	
		list(){
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
		void recurr(node *current)
		{
			
			if(current==NULL)
			{
				return;
			}
			p=current->next;
			recurr(p);
			cout<<current->data<<" ";	
		}	
		void display()
		{
			node *current;
			current=head;
			while(current!=NULL)
			{
				cout<<current->data<<" ";
				current=current->next;
			}
		}
		
};
int main()
{
		list obj;
	
	int i,n,val;
	cout<<"How many values you want to enter in the list: ";
	cin>>val;
	for(i=0;i<val;i++)
	{
		cin>>n;
		obj.addnode(n);
	}
    cout<<endl<<endl<<"NORMAL DISPALY"<<endl;
    obj.display();
	cout<<endl<<endl<<"REVERSED USING RECURSION"<<endl;
	obj.recurr(head);
	
}
