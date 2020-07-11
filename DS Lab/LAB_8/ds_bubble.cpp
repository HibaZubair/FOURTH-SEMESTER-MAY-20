#include<stdio.h>
#define N 5
int main(){
int arr[N]={22,66,11,45,33},i,j;
	for(i=0;i<N-1;i++){
		for(j=0;j<N-1;j++){//N-1-i
			if(arr[j]>arr[j+1]){
			int temp;
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
}
	for(i=0;i<N;i++)
	printf("%d ",arr[i]);
}
