#include<iostream>
int sum(int n);
using namespace std;
int main()
{
	int ans;
	ans=sum(10);
	cout<<ans;
}
int sum(int n)
{
	int s;
	if(n<0 || n<-1)
	{
		return -1;
	}
	while(n!=0)
	{
		s=s+n;
		n--;
	}
	return s;
}
