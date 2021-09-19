// Name:
// Group No./Members:
// Course & Section:
// Filename: LinkedList02.cpp
// Description:
#include <iostream>
using namespace std;
struct nodeType
{
int info;
nodeType* link;
};

//variable declaration
nodeType* head = NULL;
nodeType* current = NULL;
void AddNode();
void DisplayNodeData();
int main()
{
//Insert node at the end of the list
int numberOfNodes;
cout<<"How many nodes do you want to add? (integers only): ";
cin>>numberOfNodes;
while (numberOfNodes > 0) {
AddNode();
--numberOfNodes;
}
//Display nodes
DisplayNodeData();
system("pause");
return 0;
}
void AddNode()
{
nodeType* newNode;
//reserve space for new node
newNode = new nodeType;
//fill p with data
cout<<"Enter data: ";
cin>>newNode->info;
newNode->link = NULL;
//setup link for new node
if(head==NULL) {
head = newNode;
//current = h;
}
else {
current = head;
while(current->link!=NULL) {
current = current->link;
}
current->link = newNode;
}
}
void DisplayNodeData()
{
nodeType *temp;
temp= head;
cout<<"\n\n=========================\n";
if(temp==NULL)
cout<<"List is empty!"<<endl;
else
while(temp != NULL)
{
cout<<"Info: "<<temp->info;
cout<<"\n";
temp = temp->link;
}
}