#include<iostream>
using namespace std;
class arrays
{
	int size,i,count,j,temp;
	int *ptr=new int[100];
	public:
	 void declare()
	 {
	 	cout<<"\nEnter size of array: ";
	 	cin>>size;
	 	cout<<"\nEnter elements of array: ";
	 	for(i=0;i<size;i++)
	 	{
	 		cin>>ptr[i];
		}
	 	
	 }
	 void access(int element)
	 {
	 	cout<<ptr[element];
	 }
	 void search(int element)
	 {
	 	for(i=0;i<size;i++)
	 	{
	 	if(element==ptr[i])
		{
			count=i;
		}
		else
		{
		}
		}
			if(count>0)
	{
		cout<<"\nYour element was found at index "<<count;
	}
	else
	{
		cout<<"\nYour element was not found !";
	}
	 }
	 void insert(int index,int element)
	 {
	 
	 		for(i=size-1;i>=index;i--)
		{
			
			ptr[i+1]=ptr[i];
		}
		ptr[index]=element;
		cout<<"New array be: ";
		for(i=0;i<6;i++)
		{
			cout<<"\n"<<ptr[i];
		}
	}
	void update(int index, int element)
	{
		ptr[index]=element;
	cout<<"Updated array: ";
		for(i=0;i<5;i++)
		{
			cout<<"\n"<<ptr[i];
		}
	}
	void ddelete(int index)
	{
		for(i=index;i<size;i++)
		{
			
			ptr[i]=ptr[i+1];
		}
	cout<<"New array be: ";
		for(i=0;i<size-1;i++)
		{
			cout<<"\n"<<ptr[i];
		}
	}
	void sort()
	{
			for(i=0;i<size;i++)
	{
		
		for(j=i;j<size;j++)
		{
			if(ptr[i]>ptr[j])
			{
				temp=ptr[j];
				ptr[j]=ptr[i];
				ptr[i]=temp;
			}
			else
			{
				
				ptr[i]=ptr[i];
			}
		}
	}
	cout<<"\nsorted array: ";
		for(i=0;i<5;i++)
		{
			cout<<"\n"<<ptr[i];
		}
	}
	 
};
int main()
{
	arrays obj;
	int choice,element,index;
	obj.declare();
	cout<<endl<<"What operation you want to perform ?";
	cout<<endl<<"1-Direct access\n2-Search\n3-Insert\n4-Update\n5-Delete\n6-Sort\n";
	cin>>choice;
	if(choice == 1)
	{
		cout<<"Enter index of arry element you want to access: ";
		cin>>element;
		obj.access(element);
	}
	if(choice==2)
	{
		cout<<"\nEnter element you want to search: ";
		cin>>element;
		obj.search(element);
	}
	if(choice==3)
	{
		cout<<"\nEnter the index you want to insert an element: ";
    	cin>>index;
	    cout<<"\nEnter element you want to insert: ";
	    cin>>element;
	    obj.insert(index,element);
	}
	if(choice==4)
	{
		cout<<"\nnEnter index: ";
	    cin>>index;
	    cout<<"\nEnter element: ";
    	cin>>element;
    	obj.update(index,element);
	}
	if(choice==5)
	{
	    cout<<"\nEnter index: ";
	    cin>>index;	
	    obj.ddelete(index);
	}
	else
	{
		obj.sort();
	}
}
