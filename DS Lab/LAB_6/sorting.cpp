#include<iostream>
using namespace std;
int main()
{
	int arr[5]={7,8,5,3,11},i,n=5,temp=0;
	int j
	
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		for(j=i-1;j>=0;j--)
		{
			if(arr[j]>temp)
			{
				arr[j+1]=arr[j];
			}
		}
		arr[j+1]=temp;
	}
}
