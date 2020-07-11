#include<iostream>
using namespace std;
int main()
{
	int arr[5]={11,34,61,20,35},i,temp=0,n=5,j;
	for (i=0; i <n-1;i++)
  {
    
    for(j=i+1;j<n;j++)
    {
    	if(arr[i]>arr[j])
    	{
    		temp=arr[j];
    		arr[j]=arr[i];
    		arr[i]=temp;
    		
		}
	}
  }
	for(j=0;j<n;j++)
    {
    	cout<<arr[j]<<" ";
	}
	
}
