//SHELL SORT sahi nhi hai 
#include<iostream>
using namespace std;
class shell_sort
{
	public:
		void shellsort(int *arr, int n)
		{
		   int gap,i,j,temp;
			for (gap=n/2;gap>1;gap/=2)
			{
			    for(i=gap;i<n;i++)
			    {
			    	temp=arr[i];
			    	for(j=i;j>=gap && arr[j-gap]>temp;j-=gap)
			    	{
			    		arr[j]=arr[j-gap];
					}
					arr[j]=temp;
				}
			}
		}
};
int main()
{
	shell_sort sort;
	int *arr,n;
	cout<<"Enter number of elements of array"<<endl;
	cin>>n;
	arr=new int[n];
	cout<<endl<<"Enter elements of array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort.shellsort(arr,n);
	cout<<endl<<"After shell sort"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
