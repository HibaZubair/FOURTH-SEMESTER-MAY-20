#include<iostream>
using namespace std;
int main()
{
	int arr[3][3],i,j,count=0,temp=0;
	cout<<"Enter the matrix\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
			for(j=0;j<3;j++)
		{
		if(i==j)
			{
			if(arr[i][i]==1)
	     	{
			 count=count+1;
		    }
		    else
		    {
			count=0;
	    	}
		    }
		else if(i!=j)
		    {
		    	if(arr[i][j]==0)
		    	{
		    		temp=temp+1;
				}
				else
				{
					temp=0;
				}
			}
	
		}
	
	}
	if(count>0)
	{
		if(temp>0)
		{
			cout<<"\nThe matrix is an identity matrix";
		}
		else
		{
			cout<<"\nThe matrix is not an identity matrix";
		}
	}
	else
	{
		cout<<"\nThe matrix is not an identity matrix";
	}
}
