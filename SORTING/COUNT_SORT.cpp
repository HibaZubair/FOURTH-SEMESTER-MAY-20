//COUNT SORT 
#include<iostream>
using namespace std;
class count_sort
{
//	void max(int *arr,int n)
//	{
//		max element k liye alag sey funtion bana dou
//	}
	public:
		//for ease yahan 16 size ki array ley rhy hain range 0 to 15
		// ley rhy hain
		void countsort(int *arr, int n)
		{
			int max;
			max=15;//yahan max=findMax(arr,n) bhi ley sktey thay
			int *count; // doosri array to store occurences
			count=new int[max+1];
			
			//initilising count as 0
			for(int i=0;i<max+1;i++)
			{
				count[i]=0;
			}
			
			//yeh occurences k liye incrment wala loop
			for(int i=0;i<n;i++)
			{
				count[arr[i]]++; //iss original arr ki element
				//count ka index banay ga
			}
			
			//copying element
			int i=0;
			int j=0;
			while(i<max+1)
			{
				if(count[i]>0)
				{
					arr[j++]=i;
					count[i]--;
				}
				else
				{
					i++;
				}
			}
		}
	
};
int main()
{
	count_sort sort;
	int *arr,n;
	cout<<"Enter number of elements of array"<<endl;
	cin>>n;
	arr=new int[n];
	cout<<endl<<"Enter elements of array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort.countsort(arr,n);
	cout<<endl<<"After count sort"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
