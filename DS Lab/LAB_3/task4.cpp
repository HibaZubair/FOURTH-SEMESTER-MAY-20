#include<iostream>
using namespace std;
int main()
{
	int i,j,m,n,ans;
    cout<<"Size of matrix(mxn)= ";
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
	//Sum of all elements of matrix of size m x n
	for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		ans=ans+arr[i][j];
		}
		
	}
	cout<<endl<<"Sum of all elements: "<<ans;
	ans=0;
	cout<<endl<<endl;
	//To display row-wise sum of matrix of size m x n
	for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		ans=ans+arr[i][j];
   		}
   		cout<<endl<<"Sum of row "<<i<<" = "<<ans;
		ans=0;
	}
	//To display column-wise sum of matrix of size m x n
	ans=0;
	cout<<endl<<endl;
	for(i=0;i<n;i++)
    {
    	for(j=0;j<m;j++)
    	{
    		ans=ans+arr[j][i];
   		}
   		cout<<endl<<"Sum of column "<<i<<" = "<<ans;
		ans=0;
	}
	//To create transpose of matrix B of size n x m
	cout<<endl<<endl;
	cout<<"Transpose: "<<endl;
		for(i=0;i<n;i++)
    {
    	for(j=0;j<m;j++)
    	{
    		cout<<arr[j][i]<<" ";
   		}
   		cout<<endl;
	}
}
