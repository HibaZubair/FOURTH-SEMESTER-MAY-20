//QUICK SORT 
#include<iostream>

//Function declaration
int* quicksort_first(int arr[],int start,int end);
int* quicksort_last(int arr[],int start,int end);
int* quicksort_middle(int arr[],int start,int end);
int* quicksort_random(int arr[],int start,int end);
int partition_with_first_element(int arr[],int start,int end);
int partition_with_middle_element(int arr[],int start,int end);
int partition_with_random_element(int arr[],int start,int end);
int partition_with_last_element(int arr[],int start,int end);

using namespace std;

//main function
int main()
{
	int arr[8]={10,11,1,9,6,5,22,11},choice;
	cout<<"Write 1-first element as pivot 2-last element as pivot 3-random element as pivot 4-median element as element";
	cout<<endl;
	cin>>choice;
	if(choice==1)
	{
		cout<<"Without sorted: ";
	 for(int i=0;i<8;i++)
	 {
		cout<<arr[i]<<" ";
	 }
	 quicksort_first(arr,0,7);
		cout<<endl<<"Sorted: ";
	 for(int i=0;i<8;i++)
	 {
		cout<<arr[i]<<" ";
	 }
	}
	else if(choice==2)
	{
	 cout<<"Without sorted: ";
	 for(int i=0;i<8;i++)
	 {
		cout<<arr[i]<<" ";
	 }
	 quicksort_last(arr,0,7);
		cout<<endl<<"Sorted: ";
	 for(int i=0;i<8;i++)
	 {
		cout<<arr[i]<<" ";
	 }
    }
    else if(choice==3)
    {
    	cout<<"Without sorted: ";
	 for(int i=0;i<8;i++)
	 {
		cout<<arr[i]<<" ";
	 }
	 quicksort_random(arr,0,8);
		cout<<endl<<"Sorted: ";
	 for(int i=0;i<8;i++)
	 {
		cout<<arr[i]<<" ";
	 }
	}
    else 
    {
    	cout<<"Without sorted: ";
	 for(int i=0;i<8;i++)
	 {
		cout<<arr[i]<<" ";
	 }
	 quicksort_middle(arr,0,8);
		cout<<endl<<"Sorted: ";
	 for(int i=0;i<8;i++)
	 {
		cout<<arr[i]<<" ";
	 }
    }
	
}
    

//////////SORTING RECURSIVE FUNCTION////////////////////////

//When first element is pivot
int* quicksort_first(int arr[],int start,int end)
{
	if(start<end)
	{
		int partitionindex=partition_with_first_element(arr,start,end);
		quicksort_last(arr,start,partitionindex-1);
		quicksort_last(arr,partitionindex+1,end);
	}
	else
	{
		return arr;
	}
}

//When last element is pivot 
int* quicksort_last(int arr[],int start,int end)
{
	if(start<end)
	{
		int partitionindex=partition_with_last_element(arr,start,end);
		quicksort_last(arr,start,partitionindex-1);
		quicksort_last(arr,partitionindex+1,end);
	}
	else
	{
		return arr;
	}
}

//When pivot is randomly selected
int* quicksort_random(int arr[],int start,int end)
{
	if(start<end)
	{
		int partitionindex=partition_with_random_element(arr,start,end);
		quicksort_last(arr,start,partitionindex-1);
		quicksort_last(arr,partitionindex+1,end);
	}
	else
	{
		return arr;
	}
}

//When pivot is middle element
int* quicksort_middle(int arr[],int start,int end)
{
	if(start<end)
	{
		int partitionindex=partition_with_middle_element(arr,start,end);
		quicksort_last(arr,start,partitionindex-1);
		quicksort_last(arr,partitionindex+1,end);
	}
	else
	{
		return arr;
	}
}

///////////////////PARTITION FUNCTIONS////////////////////////////////

//When first eleemnt is pivot
int partition_with_first_element(int arr[],int start,int end)
{
	int pivot=arr[start];

	int partitionindex=end;
		
	for (int i=end;i<=start+1;i--)
	{
		if(arr[i]>=pivot)
		{
			swap(arr[i],arr[partitionindex]);
			++partitionindex;
		}
		
	}
	swap(arr[partitionindex],arr[start]);
	cout<<endl<<"Sorted: ";
	 for(int i=0;i<8;i++)
	 {
		cout<<arr[i]<<" ";
	 }
	return partitionindex;
}

//When last element is pivot
int partition_with_last_element(int arr[],int start,int end)
{
	int pivot=arr[end];

	int partitionindex=start;
		
	for (int i=start;i<=end-1;i++)
	{
		if(arr[i]<=pivot)
		{
			swap(arr[i],arr[partitionindex]);
			++partitionindex;
		}
		
	}
	swap(arr[partitionindex],arr[end]);
	cout<<endl<<"Sorted: ";
	 for(int i=0;i<8;i++)
	 {
		cout<<arr[i]<<" ";
	 }
	return partitionindex;
}

//When middle value
int partition_with_middle_element(int arr[],int start,int end)
{
	int middle=end/2;
	int pivot=arr[middle];

	int partitionindex=start;
		
	for (int i=start;i<=end;i++)
	{
		if(i==middle)
		{
			i=i+1;
		}
		if(arr[i]<=pivot)
		{
			swap(arr[i],arr[partitionindex]);
			++partitionindex;
		}
		
	}
	swap(arr[partitionindex],arr[end]);
	cout<<endl<<"Sorted: ";
	 for(int i=0;i<8;i++)
	 {
		cout<<arr[i]<<" ";
	 }
	return partitionindex;
}

//when pivot is random
int partition_with_random_element(int arr[],int start,int end)
{
	int random;
	cout<<"Enter any random pivot index you want to select: ";
	cin>>random;
	if(random <0 || random >end)
	{
		cout<<"Incorrect input index";
	}
	else
	{
	int pivot=arr[random],middle=end/2;
    if(random==start)
    {
    	partition_with_first_element(arr,start,end);	
	}
	else if(random==end)
	{
    	partition_with_last_element(arr,start,end);	
	}
	else if(random==middle)
	{
		partition_with_middle_element(arr,start,end);	
	}
	else
	{	int partitionindex=start;
		
	for (int i=start;i<=end-1;i++)
	{
		if(arr[i]<=pivot)
		{
			swap(arr[i],arr[partitionindex]);
			++partitionindex;
		}
		
	}
	swap(arr[partitionindex],arr[end]);
	cout<<endl<<"Sorted: ";
	 for(int i=0;i<8;i++)
	 {
		cout<<arr[i]<<" ";
	 }
	return partitionindex;
	} 
   }
}


