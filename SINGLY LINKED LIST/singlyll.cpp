#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
int main()
{
	node *n;
    node *t;
    node *h;
    n=new node;
    n->data=1;
    t=n;
    h=n;
     
    n=new node;
    n->data=2;
    t->next=n;
    t=t->next;
    
    n=new node;
    n->data=3;
    t->next=n;
    t=t->next;
    n->next=NULL;
    
    node * current;

	current = h;

	while (current != NULL)
	{
		cout << current->data << endl;
		current = current->next;
	}
	
}
