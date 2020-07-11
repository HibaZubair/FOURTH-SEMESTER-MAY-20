#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
int main()
{
	int num;
	node *n, *t, *h=NULL;
    cin>>num;
	while(num != -1)
	{
		
		if(h==NULL)
		{
			n=new node;
			n->data=num;
			t=n;
			h=n;
		}
		else
		{
			n=new node;
			n->data=num;
			t->next=n;
			t=t->next;
			
		}
		cin>>num;
	}
	n->next=NULL;
	node * current;

	current = h;
    cout<<"Output of the list\n";
	while (current != NULL)
	{
		cout << current->data << endl;
		current = current->next;
	}
}
