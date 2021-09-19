#include <iostream>
#include <iomanip>
#include <Windows.h>

class calculateNewArray
{
    public:
        void displayNewArray(int *testArray,int *newArray,int num,int size)
{
    std::cout<<"Old Array"<<std::setw(20)<<"New Array"<<std::setw(30)<<"User Input(Multiplier)"<<std::endl;
    for(int i=0;i<size;i++)
        if(i%2==0&&i<(size-1))
            std::cout<<*(testArray+i)<<" ";
        else if(i==(size-1)&&i%2==0)
            std::cout<<*(testArray+i);

    std::cout<<std::setw(11);
    for(int i=0;i<size;i++)
        if(i%2==0&&i<(size-1))
            std::cout<<*(newArray+i)<<" ";
        else if(i==(size-1)&&i%2==0)
            std::cout<<*(newArray+i);

    std::cout<<std::setw(15)<<num;
    std::cout<<std::endl;

    for(int i=0;i<size;i++)
        if(i%2!=0&&i<(size-1))
            std::cout<<*(testArray+i)<<" ";
        else if(1%2!=0&&i==(size-1))
            std::cout<<*(testArray+i);
    std::cout<<std::setw(12);

    for(int i=0;i<size;i++)
        if(i%2!=0&&i<(size-1))
            std::cout<<*(newArray+i)<<" ";
        else if(1%2!=0&&i==(size-1))
            std::cout<<*(newArray+i);
}
        int compute(int *testArray, int *newArray,int num,int size)
        {
            for(int i=0;i<size;i++)
                *(newArray+i)=*(testArray+i) * num;
            return(*newArray);
        }
};


int main()
{
    calculateNewArray array;
    int testArray[5][2]={{1,2},{3,4},{5,6},{7,8},{9,3}}, num=0, newArray[5][2]={0}, size=sizeof(testArray)/sizeof(testArray[0][0]);;
    std::cout<<"Multiply an array by an integer."<<"\nEnter an integer: ";
    std::cin>>num;
    array.compute(*testArray,*newArray,num,size);
    array.displayNewArray(*testArray,*newArray,num,size);
    return 0;
}