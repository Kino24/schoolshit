#include <iostream>
using namespace std;
template <class stackADT>
class Stacks_ex1
{
public:
Stacks_ex1<stackADT>(int size) //Post-condition: The array is initialized to size if there exists a value 
{ // passed to the constructor, and initialized to 100 if incorrect size is
if (size <=0) //provided
{ cout<<"Size must be array must be positive! "
<<"Creating an array of size 100.";
maxsize = 100;
}
else
maxsize = size;
stackTop = 0;
list = new stackADT[maxsize];
}
void InitializeStack() //Post-condition: The top of stack is set to
{ //a value equal to 0.
stackTop = 0;
}
bool isEmptyStack() const //Post-condition: Return a value if top of stack
{ //is at its initial value. This denotes that the stack
return (stackTop == 0); //is empty
}
bool isFullStack() //Post-condition: Returns a value if top of stack
{ //reaches the assigned maximum stack size. This
return (stackTop == maxsize); //denotes that the stack is full
}
void push(stackADT newItem) //Post-condition: Performs the push operation
{
if (!isFullStack()) {
list[stackTop] = newItem;
stackTop++; }
else
cout<<"Cannot add to a full stack";
}
void pop() //Post-condition: Performs the pop operation
{
if(!isEmptyStack())
stackTop--;
else
cout<<"Cannot remove from an empty stack!\n ";
}
stackADT top() //Post-condition: Returns the value of the element
{ //at the top of the stack. Note that to use assert()
assert(stackTop!=0); //function, include the cassert library.
return list[stackTop - 1];
}
private:
int stackTop; //the top of stack
int maxsize; //the maximum size of stack
stackADT *list; //the list to be transformed into a stack
};