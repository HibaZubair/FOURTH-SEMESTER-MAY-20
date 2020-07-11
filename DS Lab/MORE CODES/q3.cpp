#include<iostream>
using namespace std;
int main()
{
	int arr[3],i,j,temp;
	cout<<"Enter 3 elements\n";
	for(i=0;i<3;i++)
	{
		cin>>arr[i];
		cout<<"\n";
	}
	for(i=0;i<3;i++)
	{
		for(j=i;j<3;j++)
		{
			if(arr[i]>arr[j])
			{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		    }
		    else
			{
				arr[i]=arr[i];
			}
		} 
	}
	cout<<"\nLargest element: ";
	cout<<arr[2];
}
