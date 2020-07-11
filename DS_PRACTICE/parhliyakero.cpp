#include<iostream>
using namespace std;
int main()
{
	int i,j, arr[11],index,element;
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	//traverse
	cout<<endl<<endl;
	cout<<"TRAVERSE"<<endl;
	
	for(i=0;i<10;i++)
	{
		cout<<arr[i];
		cout<<endl;
	}
	//insertion
	cout<<endl<<endl;
    cout<<"INSERTION"<<endl;
	cout<<"Index you want to insert the element: ";
	cin>>index;
	cout<<endl<<"Enter element you want to insert: ";
	cin>>element;
	for(i=9;i>index;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[index-1]=element;
	cout<<endl;
	for(i=0;i<10;i++)
	{
		cout<<arr[i];
		cout<<endl;
	}
	//deletion
	cout<<endl<<endl;
	int arr1[5]={1,2,3,4,5};
	cout<<"taken another array for deletion: ";
	for(i=0;i<5;i++)
	{
		cout<<arr1[i];
		cout<<endl;
	}
	cout<<"DELETION"<<endl;
	cout<<"Index you want to delete the element: ";
	cin>>index;
	for(i=index;i<5;i++)
	{
		arr1[i]=arr1[i+1];
	}
	cout<<endl;
	for(i=0;i<4;i++)
	{
		cout<<arr1[i];
		cout<<endl;
	}
	//search
	cout<<endl<<endl;
	cout<<"SEARCH"<<endl;
	int arrr[10]={1,2,3,4,5,6,7,8,9,10},c=0;
	for(i=0;i<10;i++)
	{
		cout<<arrr[i];
		cout<<endl;
	}
	cout<<"Enter element you want to search: ";
	cin>>element;
	for(i=0;i<10;i++)
	{
		if(element==arrr[i])
		{
			cout<<"Element fount";
			++c;
		}
		else
		{
		}
	}
	if(c==0)
	{
		cout<<"Element not found in the array !";
	}
	//update
	cout<<endl<<endl;
	cout<<"UPDATE"<<endl;
	int arrr[10]={1,2,3,4,5,6,7,8,9,10},c=0;
	for(i=0;i<10;i++)
	{
		cout<<arrr[i];
		cout<<endl;
	}
	cout<<endl<<"Enter index you want to update: ";
	cin>>index;
	cout<<endl<<"Enter element you want:" ;
	cin>>element;
	arrr[index]=element;
	cout<<"Updated array is: ";
	cout<<endl;
	for(i=0;i<10;i++)
	{
		cout<<arrr[i];
		cout<<endl;
	}
	return 0;
	
	
	
	
	
	
}
