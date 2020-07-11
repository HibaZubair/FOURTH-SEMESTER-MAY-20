#include<iostream>
using namespace std;
int main()
{
	int i,count=1,j,temp=0;
	char arr[7];
	cout<<"Enter word: ";
	for(i=0;i<7;i++)
	{
		cin>>arr[i];
		if(arr[i]=='33')
		{
			i=7;
		}
	}
	for(i=0;i<7;i++)
	{
		for(j=i;j<7;j++)
	{
			if(arr[i]==arr[j+1])
		{
			count=count+1;
			++temp;
		}
		else
		{
			if(temp==0)
			{
			count=1;
		    }
		    else
		    {
		    	
			}
		}
   }
   temp=0;
   cout<<endl<<arr[i]<<" = "<<count;
   count=0;
	}
}
