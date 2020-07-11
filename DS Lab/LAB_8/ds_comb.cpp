#include<stdio.h> 
#define N 10
using namespace std;  
int getNextGap(int gap) 
{  
	gap = (gap*10)/13; 
	if (gap < 1) 
		return 1; 
	else
	return gap; 
} 
int main() 
{ 
	int a[] = {8, 4, 1, 56, 3, -44, 23, -6, 28, 0}; 
	int gap = N; 
	while (gap != 1 ) 
	{ 
		gap = getNextGap(gap); 
		for (int i=0; i<N-gap; i++) 
		{ 
			if (a[i] > a[i+gap]) 
			{ 
			int temp;
			temp=a[i];
			a[i]=a[i+gap];
			a[i+gap]=temp;
			} 
		} 
	} 
	printf("Sorted array: \n"); 
	for (int i=0; i<N; i++) 
		printf("%d ", a[i]); 

	return 0; 
} 

