#include<iostream>
using namespace std;
int main()
{
	int arr[6]={1,2,3,4,5,6},i,n,j=0,temp=0,tempp,a;
	cout<<"How many times you want to rotate: ";
	cin>>n;

	for(i=0;i<6;i++)
	{
		a=(i+n)%6;
		cout<<arr[a]<<"\n";
	
	}
}
