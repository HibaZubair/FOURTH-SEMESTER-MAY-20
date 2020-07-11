//SHELL SORT
#include<iostream>
#define size 10
int* shellsort(int arr[],int gap);
using namespace std;
int main()
{
	int arr[size]={8,4,1,56,3,-44,23,-6,28,0},gap=size/2;
	cout<<"Unsorted Array: ";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	shellsort(arr,gap);	
	cout<<endl<<"Sorted Array: ";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int* shellsort(int arr[],int gap)
{
	int i,j,temp,tindex;
	while(gap!=0)
	{
		j=gap;
		for(i=0;j<size;i++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
	
			    tindex=i-4;
				if(tindex>0 || tindex==0)
				{
					if(arr[tindex]>arr[i])
			        {
				      temp=arr[tindex];
				      arr[tindex]=arr[i];
				      arr[i]=temp;
			        }
			        else
			        {}
		       }
			}
			else
			{}
			++j;
		}
		gap=gap/2;
}
	return arr;
}
