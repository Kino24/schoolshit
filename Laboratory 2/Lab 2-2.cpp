#include <iostream>
using namespace std;
struct nodeType
{
char info;
nodeType* link;
};
int main()
{
    //variable declaration & initialization
    nodeType* head = NULL;
    nodeType* newNode;
    nodeType* p;
    //declare the space for first node
    newNode = new nodeType;
    //fill first node info with 'A' and point its link to NULL
    newNode->info = 'A';
    newNode->link = NULL;
    head = newNode; //point head pointer to the first node
    //add a second node to the list and
    //declare new space for newNode
    newNode = new nodeType;
    //fill second node info with 'B' and point its link to NULL
    newNode->info = 'B';
    newNode ->link = NULL;
    // insert second node at the end of the list
    // p points to the previous node (first node)
    // and is linked to the current node (second node)
    p = head;
    p->link = newNode;
    /*********************
    * Display nodes
    *********************/
    nodeType *temp; // declare pointer to a nodeType space
    int counter = 1 ; // declare node counter and initialize to 1
    temp= head; // point temp to the first node.
    while(temp != NULL)
    {
        cout<<"Node "<<counter<<": ";
        cout<<"Info: "<<temp->info<<"\n";
        cout<<"---------\n";
        temp = temp->link;
        ++counter;
    }
    system("pause");
    return 0;
}