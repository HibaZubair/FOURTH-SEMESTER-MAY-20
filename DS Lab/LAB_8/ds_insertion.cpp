#include<stdio.h>
#define N 6
int main(){
	int arr[N]={22,66,12,87,45,7},i;
	for(i=1;i<N;i++){
		int j=i-1;
		int temp=arr[i];
		while(j>=0 && arr[j]>temp){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	for(i=0;i<N;i++)
	printf("%d ",arr[i]);	
}
//best O(N)
//worst O(N2)

