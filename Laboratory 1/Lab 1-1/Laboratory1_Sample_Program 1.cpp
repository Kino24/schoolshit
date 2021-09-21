#include <iostream>

class labExercise1
{
    public:
        void displayMessage(std::string *strng)
        {
            for(int i=0;i<sizeof(strng);i++)
            {
                std::cout<<*(strng+i)<<" ";
            }
        }
};


int main()
{
    labExercise1 exercise;
    std::string message[3]={"I'm","so","great!"};
    exercise.displayMessage(message);
    return 0;
}