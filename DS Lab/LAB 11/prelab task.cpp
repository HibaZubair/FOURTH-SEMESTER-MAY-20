//Pre-Lab Using circular array implementing queue
#include<iostream>
using namespace std;
#define size 7
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
	if(arr[front]==0)
	{
		++front;
		return;
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
			if(arr[front]==10)
			{
				cout<<endl<<"For avast and ccommand line to come in execution line it will take: "<<arr[front]<<" sec.";
		        cout<<endl<<"For avast to be executed it will take: "<<arr[front]+4<<" sec";
		        cout<<endl<<"For command line to be executed it will take: "<<arr[front]+8<<" sec";
		        cout<<endl;
			}
			for(int i=0;i<size;i++)
			{
				arr[i]=arr[i]-2;
			}
			dequeue();
		}
	}
}

void display_queue()
{
	string arr1[size]={"Google Chrome","VScode","VLC","MS-Word","PDF","Jupyter","Pycharm"};
	if(isempty())
	{
		cout<<endl<<"Queue is empty";
	}
	else
	{
		for(int i=0;i<=rear;i++)
		{
			cout<<arr1[i]<<":  "<<arr[i]<<"s  ";
		}
		
		
			cout<<endl<<endl;
			if(arr[3]<0)
			{
				arr[3]=arr[3]/-1;
			}
			cout<<"MS-Word will take "<<arr[3]<<" extra seconds in order to be executed.";
		
	}
}
int main()
{
	int val,n;
	cout<<"Elements you wish to enqueue(in this case seconds of execution): ";
	cout<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>n;
		enqueue(n);
	}
	cout<<endl;
	dequeue();
	cout<<endl;
	display_queue();
    
	return 0;
}


