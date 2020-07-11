#include<iostream>
using namespace std;
struct node_t {
	int info;
	node_t * next;
};


int main()
{
	node_t *p,*head,*next,*current,*tail;
   int num;
   cin >> num;
   while (num!=-1)
   {
   	if (head==NULL)
   	{
   		p->info=num;
   		p->next=NULL;
   		head->next=p;
	   }
	else{
		p =new node_t;
		p->info=num;
		p->next=NULL;
		head->next=p;
		
	}   
	   }	
}
