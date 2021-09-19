//DRILL1 Sample Code 1
/*This sample program illustrates the use of Dynamic Array Allocation; it displays each individual elements from
the inputs stored in an array*/
//drill_SC1.h
#pragma once
#include <iostream>
using namespace std;
class drill_SC1
{
public:
	drill_SC1(void);
	void displayArr(int*, int);
};
drill_SC1::drill_SC1(void)
{
}
void drill_SC1::displayArr(int* arr, int size)
{
	int inc = 0;
	while (inc != size)
	{
		cout << arr[inc] << "\n";
		inc++;
	}
}