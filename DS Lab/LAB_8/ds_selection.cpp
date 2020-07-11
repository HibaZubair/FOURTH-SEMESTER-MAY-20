#include<stdio.h>
#define N 6
int main(){
	int a[N]={22,66,12,87,45,7},i,min=0,j;
	for(i=0;i<N-1;i++){
		min=i;
		for(j=i+1;j<N;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		if(i!=min){
			int temp;
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	for(i=0;i<N;i++)
	printf("%d ",a[i]);
}
//best worst O(N2)
