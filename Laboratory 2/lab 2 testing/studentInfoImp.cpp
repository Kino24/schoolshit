#include "studentInfo.h"
#include <iostream>


void Node::print_student(Node * n)
{
    std::cout <<"Student Name: "<<n->studentName << std::endl;
    n = n->next;
    std::cout <<"Student ID: "<<n->studentId << std::endl;
    n = n->next;
    std::cout <<"Grade: "<<n->grade << std::endl;
}

void Node::setStudentInfo(std::string name, int ID, float grade)
{
    Node * head = NULL;
    Node * second = NULL;
    Node * third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->studentName = name;
    head->next = second;

    second->studentId = ID;
    second->next = third;

    third->grade = grade;
    third->next = NULL;

    Node::print_student(head);
}