#include <iostream>
#include "removeBlanks.h"

int main()
{
    stringTrim trim;
    std::string message="\n\n\n\tHello World!    \r\n\n\n";
    std::cout<<"Before Trimming: "<<"\nSTART::"<<message<<"::END"<<std::endl<<std::endl
            <<"Leading Trim:"<<"\n\nSTART::"<<trim.leadingTrim(message)<<"::END"
            <<"\n\nTrailing Trim"<<"\n\nSTART::"<<trim.trailingTrim(message)<<"::END"
            <<"\n\nBoth:"<<"\n\nSTART::"<<trim.Trimming(message)<<"::END";
    return 0;
}