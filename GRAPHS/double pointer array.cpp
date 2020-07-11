#include<iostream>
using namespace std;
int main()
{
	
	int **matrix,*p,a=5;
	p=&a;
	matrix= new int*[5];
	matrix[0] = new int[5];
	matrix[0][1]=*p;
	cout<<matrix[0][1];
}
