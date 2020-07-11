#include<iostream>
using namespace std;
int main()
{
int i,j,k,nu=0;
char arr[7]={'1','8','k','1','3','6','1'};

int n=0;
for(i=0;i<6;i++)
{
++nu;
	for(j=5;j>n;j--)
	{
		cout<<" ";
	}n++;
	if(i==0)
	{
	    cout<<arr[0]<<arr[1];	
	}
else
{
	for(k=0;k<1+i+nu;k++)
	{
		cout<<arr[i+1];
	}
}
	cout<<"\n";
	
}
return 0;
}
