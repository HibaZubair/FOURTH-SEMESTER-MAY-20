#include<iostream>
using namespace std;
struct node {
	int data;
	node *next;
};node *head,*tail;
class LL{
	int count=0;
	
	public :
		LL(){
			head=tail=NULL;
		}
		void addnode (int a)
		{
			node *temp=new node;
			temp->data=a;
			temp->next=NULL;
			if (head==NULL){
				head=temp;
				tail=temp;
				temp=NULL;
			}
			else
      		{	
        	tail->next=temp;
        	tail=temp;
      	}
      }
      	void swap (int k,int n)
      	{
      		int i,a,c;
      		node *p,*t;
      		p=head;
      		t=head;
      		n=n-k;
      	 
      	  	for(i=0;i<k-1;i++)
      	  	{
      	  		p=p->next;
			}
			for(i=0;i<n;i++)
			{
			    t=t->next;      	  	
			}
			a=t->data;
			t->data=p->data;
			p->data=a;
			
      	
			  
	    }
		void display ()
		{
			node * p;
				p=head;
				while (p!=NULL)
				{
					cout << p->data<<" ";
					p=p->next;
				}
		}
};

int main ()
{
	int a,n,k;
	LL obj;
	cout << "Enter Number of elements\n";
	cin >> n;
	for (int i=0;i<n;i++)
	{
		cout << "Enter element\t";
		cin >> a;
		obj.addnode(a);
	}
	obj.display();
	cout << "\nEnter kth node\n";
	cin >> k;
	obj.swap(k,n);
	cout << endl;
	obj.display();
}

