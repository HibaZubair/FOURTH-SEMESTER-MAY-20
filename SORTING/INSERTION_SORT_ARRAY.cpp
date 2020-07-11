//INSERTION SORT: by array ,dll,dll sey bhi hou skta hai
#include<iostream>
using namespace std;
class insertion_sort
{
	public:
		void insertionsort(int *arr, int n)
		{
		   int x,i,j;
			for (i=1;i<n;i++)
			{
				j=i-1;
			    x=arr[i];
			    while(j>-1 && arr[j]>x)
			    {
			    	arr[j+1]=arr[j];
			    	j--;
				}
				arr[j+1]=x;
			}
		}
};
int main()
{
	insertion_sort sort;
	int *arr,n;
	cout<<"Enter number of elements of array"<<endl;
	cin>>n;
	arr=new int[n];
	cout<<endl<<"Enter elements of array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort.insertionsort(arr,n);
	cout<<endl<<"After insertion sort"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
