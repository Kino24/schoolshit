// Name:
// Group No./Members:
// Course & Section:
// Filename: STL01.cpp
// Description:
#include <iostream>
#include <vector>
using namespace std;
int main()
{
cout<<"*****Simple STL demo*****\n";
cout<<"*************************\n";
//declare vector of floating-point numbers
vector<int> number;
//populate number with values
number.push_back(125);
number.push_back(34);
number.push_back(200);
//display number items - using a counter variable
cout<<"\nUsing a counter variable\n";
cout<<"-------------------------\n";
for(int x=0; x<3; ++x) {
cout<<"Vector item "<<x+1<<": "<<number[x]<<"\n";
}
cout<<"\n\nUsing an iterator\n";
cout<<"-----------------\n";
//declare an iterator
vector<int>::iterator intIterator;
 int x=1;
for(intIterator = number.begin(); intIterator != number.end();
intIterator++) {
cout<<"Vector Item "<<x<<": "<<*intIterator<<"\n";
x++; }
cout<<"\n\nUsing a constant iterator\n";
cout<<"-----------------\n";
//declare an iterator
vector<int>::const_iterator constIntIterator;
for(constIntIterator = number.begin();
constIntIterator != number.end(); constIntIterator++)
{
int x=1;
cout<<"Vector Item "<<x<<": "<<*constIntIterator<<"\n";
x++;
}
system("pause");
return 0;
}
