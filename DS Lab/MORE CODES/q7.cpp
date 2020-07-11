#include<iostream>
void fibonacci(int n);
using namespace std;
int main()
{
	int number;
	cout<<"How many number series you want ? ";
	cin>>number;
	cout<<endl<<endl;
	fibonacci(number);
}
void fibonacci(int n)
{
	int i,a=0,ans,b=1;
 cout<<a<<" ";

	for(i=0;i<n;i++)
	{
		
		ans=a+b;
		cout<<ans<<" ";
		a=b;
		b=ans;
	}
}
