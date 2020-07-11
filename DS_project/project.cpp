// K180121 K180220 K181361
#include"functions.h"
using namespace std;
int main()
{
	// Inserts the tree of symptoms
	inserting();
	double pcredits;
	cout << "Enter 'Y' for Yes and 'N' for No" << endl; 
	// User enter his answer according to which the tree is traversed
	pcredits=l.traverse(l.root);
	// The credits are converted to percentage
	pcredits=percentage(pcredits);
	
	// Creating 25K data to run the program on
	ofstream write;
	ifstream read;
	string fname;
	srand(time(NULL));
	int x=rand()%93 +1;
	read.open("FirstName.txt");
	if(read)
	{
		int i;
		for(i=0;i<x;i++)
		{
			read >> fname;
		}
	}
	read.close();
	x=rand()%111+1;
	read.open("SecondName.txt");
	string sname;
	if(read)
	{
		int i;
		for(i=0;i<x;i++)
		{
			read >> sname;
		}
	}
	read.close();
	// Data is saved in a file
	write.open ("masterFile.txt",ios::app);
	write<<fname<<"   "<<sname<< "  "<<pcredits << endl;
	write.close();
	// Percentage is compared to 50
	// If less than 50, patient is less likely to have Covid-19
	if(pcredits<50)
	{
		int choice;
		// User is asked if he wants to know the nearest hospital to his location
		cout << endl << "You do not need a COVID-19 Test\n1.Check for the nearest hospital anyway\n2.End here\n		COVID-19 TEST KITS ARE VERY FEW. SAVE THEM!" << endl;
//		cin >> choice;
//		choice=rand()%2+1;
		choice=1; // choice is set to one so the code runs and does not ends here
		switch(choice)
		{
			case 1:
				{
					checkafford();
					break;
				}
			case 2:
				{
					exit(1);
				}
		}
	}
	// If percentage is between 50 and 70, patient can be a Covid-19 patient
	else if(tcredits >=50 && tcredits< 70)
	{
		cout << endl << "You have mild symptoms. Better to get a test!" << endl;
		checkafford();
	}
	// If its above 70 then most likely the patient has Covid-19
	else
	{
		cout << endl << "You must get a COVID-19 test done quickly!" << endl;
		checkafford();
	}
	// Nearest hospital is searched
	area();
}
