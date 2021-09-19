// Name:
// Group No./Members:
// Course & Section:
// Filename: LinkedList03.cpp
// Description:
#include <iostream>
using namespace std;
struct nodeType
{
int info;
nodeType* link; };
//variable declaration
nodeType* head = NULL;
nodeType* p = NULL;
nodeType* q = NULL;
//function prototypes
void AddNode();
void DeleteFirstNode();
void DeleteLastNode();
void DisplayNodeData();
int main()
{
    //Insert node at the end of the list
int numberOfNodes;
cout<<"Linked list program to demonstrate node deletion\n\n";
cout<<"How many nodes do you want to add? (1-10 only): ";
cin>>numberOfNodes;
while (numberOfNodes > 0) {
AddNode();
--numberOfNodes; }
//Display nodes
DisplayNodeData();
int choice = 0;
char again = 'y';
while(again=='y') {
if(head ==NULL) {
cout<<"List is empty - can't delete anymore\n\n";
break; }
else {
cout<<"\n\n1. Delete first node\n";
cout<<"2. Delete last node\n";
cout<<"Enter your choice: --> ";cin>>choice;
if(choice == 1)
DeleteFirstNode();
else if(choice==2)
DeleteLastNode();
else {
cout<<"\nYou did not delete a node";
DisplayNodeData(); }
cout<<"\nDo you want to delete more (y/n)?: ";
cin>>again; }
}
system("pause");
return 0;
}
void AddNode() {
nodeType* newNode;
//reserve space for new node
newNode = new nodeType;
//fill p with data
cout<<"Enter node's info: ";
cin>>newNode->info;
newNode->link = NULL;
//setup link for new node
if(head==NULL) {
head = newNode; }
else {
p = head;
while(p->link!=NULL) {
    p = p->link; }
p->link = newNode; }
}
void DeleteFirstNode() {
p = head; q = p;
head = p->link;
delete q;
DisplayNodeData();
}
void DeleteLastNode() {
p = head;
q = p->link;
if(p->link == NULL) {
head = NULL;
delete q; }
else {
while(p->link != NULL && q->link != NULL) {
p = p->link;
q = p->link; }
q = p->link ;
p->link = q->link;
delete q; }
DisplayNodeData();
}
void DisplayNodeData() {
nodeType *temp;
temp= head;
cout<<"\n\n=========================\n";
cout<<"Nodes remaining\n";
cout<<"=========================\n";
if(temp==NULL)
cout<<"List is empty!"<<endl;
else
while(temp != NULL) {
cout<<"Info: "<<temp->info;
cout<<"\n";
temp = temp->link;
}
}