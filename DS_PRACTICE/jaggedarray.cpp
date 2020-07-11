#include<iostream>
using namespace std;
int main()
{
	int i,n,days=7,k=0,j;
	int **node=new int*[days];
	cout<<"Enter size of each day"<<endl;
	for(i=0;i<days;i++)
	{
		cin>>n;
		node[i]=new int[n];
		node[i][0]=n;
	}	
  	cout<<"Enter numbers: "<<endl;
	for(i=0;i<days;i++)
	{
		cout<<endl<<"for row "<<i+1<<endl;
		k=node[i][0];
		for(j=0;j<k;j++)
		{
			cin>>node[i][j];	
		}
	}
	k=0;
	cout<<endl<<endl<<"jagged array is: "<<endl;
	for(i=0;i<days;i++)
	{
		cout<<endl<<"for row "<<i+1<<endl;
		k=node[i][0];
	    for(j=0;j<k;j++)
		{
			cout<<node[i][j]<<" ";
		}
	}
}
