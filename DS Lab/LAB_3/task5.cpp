#include<iostream>
using namespace std;
int main()
{
	int i,j,m,n,ans;
    cout<<"Size of matrix(nxn)= ";
    cin>>m;
    cin>>n;
    int arr[m][n];
    //To input elements into matrix of size m x n
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		cin>>arr[i][j];
		}
	}
	system("cls");
	//To display elements of matrix of size m x n
	cout<<"Matrix: "<<endl;
	for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	if(m!=n)
	{
		cout<<"Diagonal sums are not possible.Incorrect input";
		exit(0);
	}
	else
	{
	//right diagonal
		for(i=0;i<m;i++)
    {
    	ans=ans+arr[i][i];
	}
	cout<<endl<<"Sum of right diagonal: "<<ans;	
	}
	//left diagonal
		for(i=0;i<m;i++)
    {
           n=n-1;
	   for(j=0;j<n ;j++)
            {
              if (j==n) 
                {
                  ans= ans+arr[i][j];
                }
              
            }
	 }
	
	cout<<endl<<"Sum of left diagonal: "<<ans;	
	}

