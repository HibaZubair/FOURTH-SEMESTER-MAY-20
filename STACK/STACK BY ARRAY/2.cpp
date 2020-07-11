//stack by linked list
#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};node *top;
class list
{
	public:
	list()
	{
		top=NULL;
		
	}
	void push(int n)
	{
		node *t=new node;
		if(t==NULL)
		{
			cout<<endl<<"stack overflow";
			return ;
		}
		else
		{
			t->data=n;
			t->next=top;
			top=t;
		}
	}
	int pop()
	{
		int x=-1;
		if(top==NULL)
		{
			cout<<endl<<"Stack underflow";
		}
		else
		{
			node *t;
			t=top;
			x=t->data;
			top=top->next;
			delete t;
		}
		return x;
	}
	void peek(int index)
	{
		int i,j=0;
		node *t=top, *a=top;
		while(a!=NULL)
		{
			++j;
			
			a=a->next;
			
		}
	
		if(index>=j)
		{
			cout<<endl<<"Incorrect index";
		}
		else
		{
			for(i=0;i<index;i++)
			{
				t=t->next;
			}
			cout<<endl<<"peek value: "<<t->data;
		}
		 
	}
		void display()
		{
			node *current;
			cout<<endl<<"Display stack: ";
			current=top;
			while(current!=NULL)
			{
				cout<<current->data;
				current=current->next;
			}
		}
};
int main()
{
	list obj;
	obj.push(1);
	obj.push(2);
	obj.push(3);
	obj.push(4);
	obj.push(5);
	obj.pop();
	obj.pop();
	obj.peek(3);
	obj.display();
}
