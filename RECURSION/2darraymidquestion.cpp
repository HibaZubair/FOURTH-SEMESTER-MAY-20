#include<iostream>
using namespace std;
int fun(int arr[3][3], int i, int j );
int fun(int arr[3][3],int i,int j)
{
	static int count=0;
	
	if(i<=2 && j<=2)
	{
		cout<<endl<<"i: "<<i;
		if(arr[i][j]==1)
		{
			count=count+1;
			cout<<endl<<"count: "<<count;
		    ++j;
		return fun(arr,i,j);
		}
		else
		{
			++j;
		return fun(arr,i,j);}
	}
	if(i<3 && j!=2)
	{
		++i;
		j=0;
		return fun(arr,i,j);
	}
	if(i>2) 
	{
	   return count;
	}
}
int main()
{
	int ans=0,arr[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
	i=0;j=0;
	ans=fun(arr,i,j);
	cout<<endl<<endl<<"final count: "<<ans;
}
