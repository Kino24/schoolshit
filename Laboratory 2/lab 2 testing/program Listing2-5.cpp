// Name:
// Group No./Members:
// Course & Section:
// Filename: STL02.cpp
// Description:
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
int main()
{
int counter=0;
string str; stringstream ss;
const int NUM_HERO = 3;
vector <string> hero;
vector <int> heroAgility;
cout<<"\nEnter hero's name:\n";
for(int x=0; x<NUM_HERO; ++x) {
cout<<" >> ";
getline(cin,str);
ss<<str;
hero.push_back(str); //ss.str("");
}
//using sort algorithm to sort the vector items
sort(hero.begin(), hero.end());
cout<<"\n\nHero's name - sorted\n";
cout<<"-----------------\n";
//declare a constant iterator
vector<string>::const_iterator constIntIterator;
int x=1;
for(constIntIterator = hero.begin();
constIntIterator != hero.end(); constIntIterator++) {
cout<<"Hero "<<x<<": "<<*constIntIterator<<"\n";
x++; }
system("pause");
return 0;
}