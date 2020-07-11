#include<iostream>
using namespace std;
int main()
{
	//access directly 
	char choice;
	int arr[5]={1,4,5,9,2},element,index,i,j,count=0,temp=0;
	cout<<"Enter index of array element you want to access: ";
	cin>>index;
	cout<<endl<<arr[index];
	
	//search
	cout<<"\nEnter element you want to search ?";
	cin>>element;
	for(i=0;i<5;i++)
	{
		if(element==arr[i])
		{
			count=i;
		}
		else
		{
		}
	}
	if(count>0)
	{
		cout<<"\nYour element was found at index "<<count;
	}
	else
	{
		cout<<"\nYour element was not found !";
	}
	//insert
	int array[6];
	cout<<"\nEnter the index you want to insert an element: ";
	cin>>index;
	cout<<"\nEnter element you want to insert: ";
	cin>>element;
	cout<<"\nDo you want to insert and replace ?";
	cin>>choice;
	if(choice=='y')
	{
		arr[index]=element;
		cout<<"New array be: ";
		for(i=0;i<5;i++)
		{
			cout<<"\n"<<arr[i];
		}
	}
	else
	{
		for(i=0;i<5;i++)
		{
			array[i]=arr[i];
		}

		for(i=index;i<5;i++)
		{
			
			array[i+1]=arr[i];
		}
		array[index]=element;
		cout<<"New array be: ";
		for(i=0;i<6;i++)
		{
			cout<<"\n"<<array[i];
		}
	}
	//update
	cout<<"\nEnter index: ";
	cin>>index;
	cout<<"\nEnter element: ";
	cin>>element;
	arr[index]=element;
	cout<<"Updated array: ";
		for(i=0;i<5;i++)
		{
			cout<<"\n"<<arr[i];
		}
	//delete
	cout<<"\nEnter index: ";
	cin>>index;
	for(i=index;i<5;i++)
		{
			
			arr[i]=arr[i+1];
		}
	arr[4]=0;
	cout<<"New array be: ";
		for(i=0;i<5;i++)
		{
			cout<<"\n"<<arr[i];
		}
	//sorting
	//ascending order
	int arr1[5]={1,4,5,9,2};
	for(i=0;i<5;i++)
	{
		
		for(j=i;j<5;j++)
		{
			if(arr1[i]>arr1[j])
			{
				temp=arr1[j];
				arr1[j]=arr1[i];
				arr1[i]=temp;
			}
			else
			{
				
				arr1[i]=arr1[i];
			}
		}
	}
	cout<<"\nsorted array: ";
		for(i=0;i<5;i++)
		{
			cout<<"\n"<<arr1[i];
		}
}
