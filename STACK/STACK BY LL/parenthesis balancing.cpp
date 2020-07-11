//paranthesis balancing code
#include<iostream>
using namespace std;
struct node{
	char data;//character type ka hou ga data kyoun k brackets push kerwanay hain
	node *next;
};node *top;
class list
{
	public:
	list()
	{
		top=NULL;
		
	}
	void push(char n)//push mein bhi character ley ga phir bracket pushkerwayein gae
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
	char pop()//pop should retrun a character
	{
		char x=-1;//yahan bhi character hou ga
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
	

		int isbalanced(char *exp)
		{
			int i;
			for(i=0;exp[i]!='\0';i++)
			{
				if(exp[i]=='(')
				{
					push(exp[i]);//if a opening push it on the stack
				}
				else if(exp[i]==')')
				{
					if(top==NULL)
					{
						return 0;//false nothing in stack no opening one for the closing
					}
					else
					{
						pop();
					}
				}
			}
			if(top==NULL)
			return 1;//nothing in the stack, stack is balanced
			else
			return 0;//there is something in the stack not balanced
		}
};
int main()
{
	//character string 
	char *exp="((a+b)+(b-d))";
	list obj;
    cout<<obj.isbalanced(exp);
}
