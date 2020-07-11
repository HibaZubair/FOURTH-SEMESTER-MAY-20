//stack by array

#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
#define size 5
class stacks
{	
	
	int top;
    public:
    	
    	int arr[size];
		stacks()
		{
		
			top=-1;
	     
		}
		void push(int val)
		{
			if(top==size-1)
			{
				
				cout<<endl<<"Stack overflow";
			}
			else
			{
				++top;
				arr[top]=val;
			}
		}
		int pop()
		{
			int x=-1;
			if(top==-1)
			{
				cout<<"Stack underflow"<<endl;
			}
			else
			{
				x=arr[top];
				--top;
				
			}
			return x;}
		int peek(int index)
		{
			int x=-1;
			if(index<top-index+1)
			{
				cout<<endl<<"Invalid position";
			}
			else
			{
				x=arr[top-index+1];
			}
			return x;
		}
		void stacktop()
		{
			if(top==-1)
			{
				cout<<"\nStack underflow";
			}
			else
			{
				cout<<"\n"<<arr[top];
			}
		}
		void isEmpty()
		{
			if(top==-1)
			{
				cout<<"\nEmpty";
			}
			else
			{
				
				cout<<"\nnot empty";
			
			}
		}
		void isFull()
		{
			if(top==size-1)
			
			{
			cout<<"\nStack is full";
			
			}
			else
			{
				cout<<endl<<"not full";
			}
		}
};

int main()
{
	int i,val;
	cout<<"STACK BY ARRAY"<<endl;

	stacks obj;
	cout<<endl<<"Enter values for stack to push"<<endl;
	for(i=0;i<size;i++)
	{
		cin>>val;
	    obj.push(val);
    }
    
    cout<<endl<<obj.pop();
    cout<<endl<<obj.peek(2);
    obj.stacktop();
    obj.isEmpty();
    obj.isFull();
}
