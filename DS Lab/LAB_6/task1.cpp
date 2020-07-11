//Question 1:print prime factors of positive integer in descending order
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
	int i,num,j,count=0;
	cout<<"NUMBER FOR PRIME FACTOR: ";
	cin>>num;
	
	for(i=2; i<num; i++)
	{
		if(num%i==0)
		{
			for(j=2;j<i;j++)
			{
				if(i%j==0)
				{
					break;
				}
			}
			if(j==i)
			{
				++count;
				obj.push(i);
			}
		}
	}
	cout<<endl<<"PRIME FACTORS ARE: ";
	for(i=0;i<count;i++)
	{
		cout<<obj.pop()<<" ";
	}
	
}
