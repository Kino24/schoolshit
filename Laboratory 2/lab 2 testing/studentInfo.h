#ifndef studentInfo_H
#define studentInfo_H

#include <iostream>

class Node {
    public:
        std::string studentName;
        float grade;
        int studentId;
    Node * next;
    void print_student(Node * n);
    void setStudentInfo(std::string,int,float);
};

#endif