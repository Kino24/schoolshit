#include <iostream>
#include <string>
#include <algorithm>

const std::string whiteSpace=" \n\r\t\f\v";

class stringTrim
{
    public:
        std::string leadingTrim(const std::string &string)
        {
            size_t start= string.find_first_not_of(whiteSpace);
            return (start == std::string::npos) ? "" : string.substr(start);
        }
        std::string trailingTrim(const std::string &string)
        {
            size_t end= string.find_last_not_of(whiteSpace);
            return (end == std::string::npos) ? "" : string.substr(0,end+1);
        }
        std::string Trimming(const std::string &string)
        {
            return stringTrim::trailingTrim(stringTrim::leadingTrim(string));
        }
};

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