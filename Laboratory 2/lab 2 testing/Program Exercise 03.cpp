#include <iostream>
#include <string>
#include "studentInfo.h"



int main() {
    Node Node;
    std::string studentName;
    int studentID;
    float grade;
    std::cout<<"\nEnter student name: ";
    std::getline(std::cin,studentName);
    std::cout<<"\nEnter student ID: ";std::cin>>studentID;
    std::cout<<"\nEnter student grade: ";std::cin>>grade;
    std::cout<<"\n\n";
    Node.setStudentInfo(studentName,studentID,grade);
}