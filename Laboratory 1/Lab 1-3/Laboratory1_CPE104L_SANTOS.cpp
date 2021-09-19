#include <iostream>

class getAmount
{
    public:
        double compute(double *price,double *quantity,double *amount,int size)
        {
            for(int i=0; i<size;i++)
                *(amount+i)=*(price+i) * *(quantity+i);
            return(*amount);
        } 
};

int main()
{
    getAmount drill1_pe3;
    double price[10]={10.62,14.89,13.21,16.55,18.62,19.47,7.59,10.10,16.38,9.69},
            quantity[10]={6.00,7.00,19.00,13.00,12.00,11.00,7.00,12.00,12.00,19.00},
            amount[10]={0};

    int size=sizeof(amount)/sizeof(amount[0]);
    drill1_pe3.compute(price,quantity,amount,size);
    std::cout<<"Amount:"<<std::endl;
    for(int i=0;i<size;i++)
        std::cout<<"["<<i+1<<"] "<<*(amount+i)<<std::endl;
}