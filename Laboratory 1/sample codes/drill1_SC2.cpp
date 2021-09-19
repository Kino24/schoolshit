#include <iostream>
#include "drill1_SC2.h"
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
    int *p, *q, *r;
    int s=5;
    p=new int; q =new int; r =new int;
    *p = 15;
    r = &s;
    drill2_SC2 mem(p,q,r);
    return 0;
}