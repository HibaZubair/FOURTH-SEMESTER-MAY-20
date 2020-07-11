#include<iostream>
using namespace std;
static b=0; 
int recurr(int num,int a,int ans) 
{ 

if(num > 0) 
{ 
a=num%10;
ans=ans+a;
num=num/10;
recurr(num,a,ans); 
num=0;   
}

return ans; 
} 
  

int main() 
{ 
int n,fans,a=0,ans=0;
   
   cout<<"Enter number you wish to find digital root: ";
   cin>>n;
   fans=recurr(n);
  cout<<endl<<endl<<"Root is: "<<fans;
  
} 
  
