//MINIMUM HEAP INSERTION + BUILD HEAP
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
	void build_min_heap(int *arr,int n)
	{
		//insertion in normal heaps we do it upward from leaf
		//to ancestors till root
		int i=n,parent=1;
	for(int j=2;j<=n;j++)	
	{
		i=j;
		cout<<"j: "<<j<<" ";
		do	
		{
			cout<<"i: "<<i<<" ";
			parent=i/2;
			cout<<"parent: "<<parent<<endl;
			  if(arr[parent-1]>arr[i-1])
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
	max_heap insert;
	int *arr,n;
	cout<<"Enter number of elements to be inserted"<<endl;
	cin>>n;
	arr=new int[n];
	cout<<endl<<"Insert elements"<<endl;
	for(int i;i<n;i++)
	{
		cin>>arr[i];
	}
	insert.build_min_heap(arr,n);
	//agar insert kerwana hai tou ek kam pre declared array ley lou
	//value lou user sey array k akhri waley mein dalo aur 
	//bhej dou array kou buil min heap mein
	insert.display(arr,n);
}