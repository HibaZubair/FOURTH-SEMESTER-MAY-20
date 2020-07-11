#include<iostream>
using namespace std;
#define size 5

class stacks{
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
		// overloading the equality operator
		 bool operator== (const stacks& obj)
{
    for (int i = 0 ;i<size;i++)
    {
    	if(arr[i] != obj.arr[i])
    	{
    		return false;
		}
	}
        
    return true;
}
};



int main()
{
	int i,val;
	stacks s1,s2;
	cout<<"STACK 1: "<<endl;
	cout<<endl<<"Enter values for stack to push"<<endl;
	for(i=0;i<size;i++)
	{
		cin>>val;
	    s1.push(val);
    }
    val=0;
    
    cout<<endl<<"STACK 2: "<<endl;
    cout<<endl<<"Enter values for stack to push"<<endl;
    	for(i=0;i<size;i++)
	{
		cin>>val;
	    s2.push(val);
    }
    
    //check kero bool ki value sey and print k equal ya nhi
    if (s1 == s2)
        cout << "\n\tBoth the stacks are equal";
    else
        cout << "\n\tBoth the stacks are not equal";
}
