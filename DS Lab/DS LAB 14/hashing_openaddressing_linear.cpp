//open addressing:(1)linear
#include<iostream>
using namespace std;
class hashtable{
	int arr[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	public:
		
		hashtable()
		{
			
		}
	void insertion(int key)
	{
		int i=1,index=key%10;
		if(arr[index]==-1)
		{
			arr[index]=key;
		}
		else
		{
			while(arr[index]!=-1)
			{
				index=(key+i)%10;
				i++;
			}
		
			arr[index]=key;
			
		}
	}
	void display()
	{
		for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
	}
};
int main()
{
	hashtable obj;
	int size,n,i,a;
	cout<<"Enter number of keys you want to insert"<<endl;
	cin>>size;
	int arr[size];
	cout<<"Enter keys"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>n;
		arr[i]=n;
	}
	cout<<endl;
	for(int i=0;i<size;i++)
	{
		a=arr[i];
		obj.insertion(a);
	}
	obj.display();
}
