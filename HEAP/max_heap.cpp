//MAXIMUM HEAP INSERTION + BUILD HEAP
//THIS IS NOT HEAPIFY NORMAL ADJUSTING FROM LEAF TO ROOT
#include<iostream>
#include <cmath>
using namespace std;
class max_heap
{
	public:
	//INFO: if a node is at index i then;
	//left child:2*i
	//right child:2*i+1
	//parent node i/2 consider floor value
	void build_max_heap(int *arr,int n)
	{
		//insertion in normal heaps we do it upward from leaf
		//to ancestors till root
		int i=n,parent=1;
	for(int j=2;j<=n;j++)	
	{
		i=j;
		//cout<<"j: "<<j<<" ";
		do	
		{
			//cout<<"i: "<<i<<" ";
			parent=i/2;
		//	cout<<"parent: "<<parent<<endl;
			  if(arr[parent-1]<arr[i-1])
			{
				swap(arr[parent-1],arr[i-1]);
			}
			else
			{
				
			}
		    i=i/2;
		}while(i>1);
}

}
     void build_max_heap_root_to_leaf(int *arr,int n)
     {
     	//left child:2*i
	//right child:2*i+1
	//parent node i/2 consider floor value
int a,b;
     	for(int i=1;i<n;i++)
     	{
     		a=2*i;
     		b=2*i;
     		b=b+1;
     		cout<<"a: "<<a<<" b: "<<b<<" i: "<<i<<endl;
     		//if left child greater 
     		if(arr[a-1]>arr[b-1]&& b<=n &&a<=n)
     		{
     			if(arr[i-1]<arr[a-1])
     			{
     				swap(arr[i-1],arr[a-1]);
				 }
				 else
				 {
				 	
				 }
			 }
			 //if right child greater
			else if(arr[a-1]<arr[b-1]&&b<=n&&a<=n)
			{
				if(arr[i-1]<arr[b-1])
     			{
     				swap(arr[i-1],arr[b-1]);
				 }
				 else
				 {
				 	
				 }
			 }
			 
			}
		
	 }
    void delete_max_heap(int *arr,int n)
    {
    	int i=0;
    	int j=n;
    	for(int a=0;a<n;a++)
    	{
    	--j;
    	swap(arr[i],arr[j]);
    	build_max_heap_root_to_leaf(arr,j);
    }
//    	cout<<"hello"<<arr[i]<<"  "<<arr[j]<<endl;
//    	n=n-1;
//    	build_max_heap(arr,j); ek yeh logic hai 
// doosra yeh k adjust kernay k liye cause after deletion
//possible hai max heap na rhy root sey leaf tak jatey hain
        
	}
	void display(int *arr,int n)
	{
		cout<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
	}
	
};
int main()
{
	max_heap heap;
	int *arr,n;
	cout<<"Enter number of elements to be inserted"<<endl;
	cin>>n;
	arr=new int[n];
	cout<<endl<<"Insert elements"<<endl;
	for(int i;i<n;i++)
	{
		cin>>arr[i];
	}
	//heap.build_max_heap(arr,n);
	heap.build_max_heap_root_to_leaf(arr,n);
	//agar insert kerwana hai tou ek kam pre declared array ley lou
	//value lou user sey array k akhri waley mein dalo aur 
	//bhej dou array kou buil max heap mein
//	heap.delete_max_heap(arr,n);
	heap.display(arr,n);
}
