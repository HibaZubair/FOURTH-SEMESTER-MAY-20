// Merge Sort Algorithm
#include<iostream>
using namespace std;
void merge_sort(int arr[],int l,int r);
void merge(int arr[],int l,int m,int r);

int n;
int main()
{

	cout<<"Enter how elements you wanna Sort: "; 
	cin>>n;
	int array[n];	
	cout<<"Enter Elements: "<<endl;		
	for(int i=0;i<n;i++)	//input
	{
		cin>>array[i];
	}
	cout<<"Unsorted Array: "<<endl;
	for(int i=0;i<n;i++)	
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
	
	merge_sort(array,0,n-1);

	cout<<"Sorted Array: "<<endl;
	for(int i=0;i<n-1;i++)	
	{
		cout<<array[i]<<" ";
	}
	
}

void merge_sort(int arr[],int l,int r)
{
	cout<<"Intermediate array"<<endl;
	for(int i=0;i<n;i++)	
	{
		cout<<arr[i]<<" ";
	}
	if(l<r)		
	{
		int mid=(l+r)/2;
		merge_sort(arr,l,mid); 
		merge_sort(arr,mid+1,r); 
		merge(arr,l,mid,r);

}}

void merge(int arr[],int l,int m,int r)
{
	int i=l;	
	int j=m+1; 
	int k=l;	
	
	int temp[n];
	
	while(i<=m && j<=r)					
	{
		if(arr[i]<=arr[j])
		{
			temp[k]=arr[i];
			i++; k++;
		}
		else
		{
			temp[k]=arr[j];
			j++; k++;
		}
	}
	
	while(i<=m)	
	{
		temp[k]=arr[i];
		i++; k++;
	}
	
	while(j<=m)	
	{
		temp[k]=arr[j];
		j++; k++;
	}
	

	for(int i=l;i<=r;i++)
	{
		arr[i]=temp[i];
	}
}
























