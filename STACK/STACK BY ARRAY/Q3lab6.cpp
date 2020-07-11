#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

class stack{
    node* top,*top1;                  //head==top

    public:
    stack()
    {
        top=NULL;
        top1=NULL;
    }
    int push(int data)
    {
        node* temp=new node();
        temp->data=data;
        if(top==NULL)
        {
            temp->next=NULL;
            top=temp;
            cout<<data<< " pushed to stack\n";
        }
        else
        {
            temp->next=top;
            top=temp;
            cout<<data<< " pushed to stack\n";
        }
    }
    int is_empty()
    {
        if(top==NULL)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int pop()
    {
        if(!is_empty())
        {
            node *temp=top;
            int x=temp->data;
            cout<<x<<" popped from the stack\n";
            
            top=top->next;
            free(temp);
            return x;
        }
        else
        {
            cout<<"stack is empty yet";
        }
    }
    int pop1()
    {
        if(!is_empty())
        {
            node *temp=top;
            int x=temp->data;
            //cout<<x<<" popped from the stack\n";
            top=top->next;
            free(temp);
            return x;
        }
        else
        {
            cout<<"stack is empty yet";
        }
    }
    void reverse_stack(stack &other_stack)
    {
        int x;
        node* temp=top;
        while(!is_empty())
        {
            x=pop1();
            other_stack.push(x);
        }
    }
};
int main()
{
    stack s1,s2;
    cout<<"\nPUSHING ELEMENT\n";
    s1.push(2);
    s1.push(5);
    s1.push(36);
    cout<<endl;
    s1.pop();
    s1.push(9);
    cout<<endl;
    cout<<"IN REVERSE ORDER STACK IS: \n";
    s1.reverse_stack(s2);
}