#pragma once
#include <iostream>
#include "conio.h"
using namespace std;
class drill2_SC2
{
    public:
        drill2_SC2();
        drill2_SC2(int *, int*, int*);
        private:
        int member;
};
drill2_SC2::drill2_SC2()
{

}


drill2_SC2::drill2_SC2(int *x, int *y, int *z)
{
    y=new int [10];
    y[5]=4;
    member = (*z);
    cout<<*x<<"\t"<<y<<"\t"<<&member<<"\t"<<member;
    getch();
}