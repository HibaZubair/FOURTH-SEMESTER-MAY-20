//COMB SORT
#include<iostream>
using namespace std;
class comb_sort
{
	public:
		int getNextGap(int gap)
		{
			gap=gap/1.3;
			return gap;
		}
		void combsort(int *arr,int n)
		{
			int gap=n;
			bool swapped=true;
			
			//keep running while the gap is more than 1 and
			//last iteration caused a swap
			while(gap!=1 && swapped==true)
			{
				gap=getNextGap(gap);
				swapped=false;
				for(int i=0;i<n-gap;i++)
				{
					if(arr[i]>arr[i+gap])
					{
						swap(arr[i],arr[i+gap]);
						swapped=true;
					}
				}
			}
		}
};
int main()
{
	comb_sort sort;
	int *arr,n;
	cout<<"Enter number of elements of array"<<endl;
	cin>>n;
	arr=new int[n];
	cout<<endl<<"Enter elements of array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort.combsort(arr,n);
	cout<<endl<<"After comb sort"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
