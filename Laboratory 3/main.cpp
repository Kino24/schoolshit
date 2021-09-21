#include "Stacks_ex1.h"
#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
	Stacks_ex1 <string> ex1(100);
	double GPA, highestGPA;
	string name;
	ifstream infile;
	infile.open("C:\\HighestGPAData.txt");
	if (!infile)
	{
		cout << "The input file does not exist. "
			<< "Program Terminates!" << endl;
		_getch();
		return 0;
	}
	cout << fixed << showpoint;
	cout << setprecision(2);
	infile >> GPA >> name;
	highestGPA = GPA;
	while (infile)
	{
		if (GPA > highestGPA)
		{
			ex1.InitializeStack();
			if (!ex1.isFullStack())
			{
				ex1.push(name);
			}
			highestGPA = GPA;
		}
		else if (GPA == highestGPA)
		{
			if (!ex1.isFullStack())
			{
				ex1.push(name);
			}
			else
			{
				cout << "Stack Overflows. "
					<< "Program terminates!" << endl;
				_getch();
				return 0;
			}
		}
		infile >> GPA >> name;
	}
	cout << "Highest GPA = " << highestGPA << endl;
	cout << "The students holding the highest GPA are: ";
	while (!ex1.isEmptyStack())
	{
		cout << ex1.top() << endl;
		ex1.pop();
	}
	_getch();
}