#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string input;
	ofstream write;
	ifstream read;
	
	//checks if the file exists then it opens that
//	if(write.is_open())
//	{
//		cout<<"File is open"<<endl;
//	    
//	}
	
	//creating a file if it dosent exist
//	else
//	{
//		
//		write.open("exam.txt",ios::out|ios::app);
//		for(int i=0;i<3;i++)
//		{
			//writing 4 items of string data type in file
//			cin>>input;
//			write<<input<<" ";
//		}
//	}
//	write.close();
	//reading from file
	read.open("exam.txt");
	//will display
	string hiba="abiha";
	while(!read.eof())
	{
		read>>input;
		cout<<input;
		if(input == "hiba")
		{
			
		}
		else if(input == "taha")
		{
			write<<"";
		}
	}
}
