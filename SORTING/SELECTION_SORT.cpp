//SELECTION SORT
#include<iostream>
using namespace std;
class selection_sort
{
	public:
		void selectionsort(int *arr, int n)
		{
		   int i,k,j;
		   //for passes
			for (i=0;i<n-1;i++)
			{
				//for scanning through elements
			    for(k=j=i;j<n;j++)
				{
					if(arr[j]<arr[k])
					{
						k=j;
					}
				}
				//end of this loop j will be at end of list
				//k will be pointing at smallest element
				swap(arr[i],arr[k]);	
			}
		}
};
int main()
{
	selection_sort sort;
	int *arr,n;
	cout<<"Enter number of elements of array"<<endl;
	cin>>n;
	arr=new int[n];
	cout<<endl<<"Enter elements of array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort.selectionsort(arr,n);
	cout<<endl<<"After selection sort"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
