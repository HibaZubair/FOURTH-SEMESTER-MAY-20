#include<iostream>
using namespace std;
 static int ans = 0; 
   static int a = 1;
int recurr(int num) 
{ 

if(num > 0) 
{ 
    recurr(num/10); 
    ans =ans+(num%10)*a; 
    a=a*10; 
} 
return ans; 
} 
  

int main() 
{ 
int n,fans;
   
   cout<<"Enter number you wish to reverse: ";
   cin>>n;
   fans=recurr(n);
  cout<<endl<<endl<<"Revrsed number is: "<<fans;
  
} 
  
