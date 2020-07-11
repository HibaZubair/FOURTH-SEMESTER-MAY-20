#include<iostream>
char *fun(char arr1[3], char arr2[3]);
using namespace std;
int main()
{
	char arr1[3],arr2[3],arr[6],i,j=0,l=0;
	char *x;
	cout<<"Enter first list\n";
	for(i=0;i<3;i++)
	{
		cin>>arr1[i];
	}
	cout<<"\nEnter second list\n";
		for(i=0;i<3;i++)
	{
		cin>>arr2[i];
	}
	cout<<endl;
	x=fun(arr1,arr2);
	for(i=0;i<6;i++)
	{
		cout<<*(x+i);
	}
}
char *fun(char arr1[3],char arr2[3])
{
	char arr[6];
	int i,j=0,l=0;
	
	for(i=0;i<6;i++)
	{

		if(i%2!=0)
		{
		arr[i]=arr2[j];
		j=j+1;
	    }
	    if(i%2==0)
	   {
		arr[i]=arr1[j];
    	l=l+1;
      }
	
	}

	return arr;


}

