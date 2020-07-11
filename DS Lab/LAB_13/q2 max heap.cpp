//question 2:Max_Heap on 70,50,60,9,10,39,16,35,45,40

#include<iostream>
using namespace std;

void heapify(int arr[], int n, int i) 
{
	int largest=i;
	int left=(2*i),right=(2*i)+1;//to find left and right child index

	if(left<=n && arr[left]>arr[largest])
	{
		largest=left;
	}
	if(right<=n && arr[right]>arr[largest])
	{
		largest=right;
	}
	if(largest!=i)
	{
		swap(arr[largest],arr[i]);
		heapify(arr,n,largest);
	}
  
}
void heapsorting(int arr[],int n)
{
	int i;
	for(i=n/2;i>=1;i--)
	{
	   heapify(arr,n,i);
	}
	for(i=n;i>=1;i--)
	{
		swap(arr[1],arr[i]);
		heapify(arr,i-1,1);
	}
}
int main() 
{
   int n, i;
   cout<<"Enter number of elements of array"<<endl;
   cin>>n;
   int arr[n];
   for (i = 0; i <n; i++)
    {
      cout<<"Element "<<i<<": "<<endl;
      cin>>arr[i];
   }
   
    
   heapsorting(arr,n);
   
   cout<<endl<<"Sorting after heap sort algorithm"<<endl;
   for (i = 1; i < n; i++) 
   {
   	cout<<arr[i]<<" ";
   }
   cout<<arr[0];
}
