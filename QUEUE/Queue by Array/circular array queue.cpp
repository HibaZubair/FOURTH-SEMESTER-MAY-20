//Queue by circular array
#include<iostream>

using namespace std;

#define size 5
int arr[size];
int front=-1;
int rear=-1;

bool isempty()
{
	if(front==-1 && rear==-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void enqueue(int n)
{
	if ((rear+1)%size==front)
	{
		cout<<endl<<"Queue is full";
	}
	else
	{
		if(front==-1)
		{
		++front;
		rear=(rear+1)%size;
		arr[rear]=n;
	    }
	    else
		{
		rear=(rear+1)%size;
		arr[rear]=n;
     	}
		
	}
}

void dequeue()
{
	if(isempty())
	{
		cout<<endl<<"Queue is empty";
	}
	else
	{
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
		    ++front;
		}
	}
}

void showfront()
{
	if(isempty())
	{
		cout<<endl<<"Queue is empty";
	}
	else
	{
		cout<<"Element at the front is: "<<arr[front];
	}
}

void display_queue()
{
	if(isempty())
	{
		cout<<endl<<"Queue is empty";
	}
	else
	{
		for(int i=0;i<size;i++)
		{
			cout<<arr[i]<<" ";
		}
	}
}
int main()
{
	int val,n;
	cout<<"Elements you wish to enqueue: "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>n;
		enqueue(n);
	}
	cout<<endl;
	dequeue();
	cin>>n;
	cout<<endl;
	enqueue(n);
	showfront();
	cout<<endl;
	display_queue();
	return 0;
}


