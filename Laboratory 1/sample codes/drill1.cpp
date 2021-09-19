#include "drill_SC1.h"
#include "conio.h"
#include <iostream>
int main()
{
	drill_SC1 sp3;
	int* p, n = 0;
	p = new int[10];
	do
	{
		cout << "Enter input " << n + 1 << ":";
		cin >> p[n];
		n++;
	} while (n < 10);
	sp3.displayArr(p, n);
	cin.get();
	return 0;
}