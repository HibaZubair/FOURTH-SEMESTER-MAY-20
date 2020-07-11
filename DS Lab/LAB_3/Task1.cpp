#include<iostream>
using namespace std;
int main()
{
	int i,j,*ptr=new int[10], arr[10],temp;
	ptr=arr;
	int *ptr1=new int[10];
	ptr1=arr;
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<10;i++)
	{
		for(j=i;j<10;j++)
		{
			if(ptr[i]>ptr[j])
			{
			temp=ptr[i];
			ptr[i]=ptr[j];
			ptr[j]=temp;
		    }
		    else
			{
				ptr[i]=ptr[i];
			}
		}
	}
	cout<<endl<<endl;
	cout<<"Asscending Order: ";
	for(i=0;i<10;i++)
	{
		cout<<ptr[i]<<" ";
	}
	for(i=0;i<10;i++)
	{
		for(j=i;j<10;j++)
		{
			if(ptr1[i]<ptr1[j])
			{
			temp=ptr1[i];
			ptr1[i]=ptr1[j];
			ptr1[j]=temp;
		    }
		    else
			{
				ptr1[i]=ptr1[i];
			}
		}
	}
	cout<<endl<<endl;
	cout<<"Descending Order: ";
	for(i=0;i<10;i++)
	{
		cout<<ptr1[i]<<" ";
	}
}
