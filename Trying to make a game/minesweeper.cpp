#include <iostream>
#include <windows.h>
#include <conio.h>
#pragma comment(lib, "Winmm.lib")

using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

 HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

 int showRow(char *hideRow, int xAxis, int yAxis, int key, int size)
 {
    
    int temp=xAxis +(yAxis*5);
        system("cls");
    cout<<"CONTROLS: UP,DOWN,LEFT,RIGHT,ENTER"<<endl;
    for(int i=0;i<size;i++)
    {
        if(i%5==0&&i!=0)
            cout<<endl; 
        if(i!=temp)
            cout<<*(hideRow+i)<<" ";
        else
        {
            SetConsoleTextAttribute(hConsole, 112);
            cout<<*(hideRow+i);
            SetConsoleTextAttribute(hConsole, 7);
            cout<<" ";
        }     
    }
    /*
        for(int i=0;i<5;i++)
            if(i==xAxis&&yAxis==0)
            {
                SetConsoleTextAttribute(hConsole, 112);
                cout<<*(hideRow+i);
                SetConsoleTextAttribute(hConsole, 7);
                cout<<" ";
            }
            else
                cout<<*(hideRow+i)<<" ";
        cout<<endl;
        for(int i=0;i<5;i++)
            if(i==xAxis&&yAxis==1)
            {
                SetConsoleTextAttribute(hConsole, 112);
                cout<<*(hideRow+(i+5));
                SetConsoleTextAttribute(hConsole, 7);
                cout<<" ";
            }
            else
                cout<<*(hideRow+(i+5))<<" ";
        cout<<endl;
        for(int i=0;i<5;i++)
            if(i==xAxis&&yAxis==2)
            {
                SetConsoleTextAttribute(hConsole, 112);
                cout<<*(hideRow+(i+10));
                SetConsoleTextAttribute(hConsole, 7);
                cout<<" ";
            }
            else
                cout<<*(hideRow+(i+10))<<" ";
        cout<<endl;
        for(int i=0;i<5;i++)
            if(i==xAxis&&yAxis==3)
            {
                SetConsoleTextAttribute(hConsole, 112);
                cout<<*(hideRow+(i+15));
                SetConsoleTextAttribute(hConsole, 7);
                cout<<" ";
            }
            else
                cout<<*(hideRow+(i+15))<<" ";
        cout<<endl;
        for(int i=0;i<5;i++)
            if(i==xAxis&&yAxis==4)
            {
                SetConsoleTextAttribute(hConsole, 112);
                cout<<*(hideRow+(i+20));
                SetConsoleTextAttribute(hConsole, 7);
                cout<<" ";
            }
            else
                cout<<*(hideRow+(i+20))<<" ";
        cout<<endl;
    */
    cout<<endl;
    return(temp);
 }

char countBombs(int *row, char *hideRow,int xAxis, int yAxis, int size,int temp)
{
    int bombcount=0;
    switch(xAxis)
    {
        case 0:
            switch(yAxis)
            {
                case 0:
                    if(*(row+(temp+1))==1)
                        bombcount++;
                    if(*(row+(temp+5))==1)
                        bombcount++;
                    if(*(row+(temp+6))==1)
                        bombcount++;
                    break;
                case 1: case 2: case 3:
                    if(*(row+temp+1)==1)
                        bombcount++;
                    if(*(row+temp+5)==1)
                        bombcount++;
                    if(*(row+temp-5)==1)
                        bombcount++;
                    if(*(row+temp-4)==1)
                        bombcount++;
                    if(*(row+temp+6)==1)
                        bombcount++;
                    break;
                case 4:
                    if(*(row+(temp+1))==1)
                        bombcount++;
                    if(*(row+(temp-5))==1)
                        bombcount++;
                    if(*(row+(temp-4))==1)
                        bombcount++;
                    break;
                default:
                    break;
            }
            break;     
        case 4:
            switch(yAxis)
            {
                case 0:
                    if(*(row+(temp-1))==1)
                        bombcount++;
                    if(*(row+(temp+5))==1)
                        bombcount++;
                    if(*(row+(temp+4))==1)
                        bombcount++;
                    break;
                case 1: case 2: case 3:
                    if(*(row+temp-1)==1)
                        bombcount++;
                    if(*(row+temp+5)==1)
                        bombcount++;
                    if(*(row+temp-5)==1)
                        bombcount++;
                    if(*(row+temp+4)==1)
                        bombcount++;
                    if(*(row+temp-6)==1)
                        bombcount++;
                    break;
                case 4:
                    if(*(row+(temp-1))==1)
                        bombcount++;
                    if(*(row+(temp-5))==1)
                        bombcount++;
                    if(*(row+(temp-6))==1)
                        bombcount++;
                    break;
                default:
                    break;
            }
            break;
        default:
            if(*(row+temp-1)==1)
                bombcount++;
            if(*(row+temp+1)==1)
                bombcount++;
            if(*(row+temp+5)==1)
                bombcount++;
            if(*(row+temp-5)==1)
                bombcount++;
            if(*(row+temp+4)==1)
                bombcount++;
            if(*(row+temp-4)==1)
                bombcount++;
            if(*(row+temp+6)==1)
                bombcount++;
            if(*(row+temp-6)==1)
                bombcount++;
            break;   

    }
    *(hideRow+temp)=bombcount+48;
    return(*hideRow);
}

bool isBomb(int *row,int xAxis, int yAxis)
{
    bool bomb=false;
    int temp=xAxis+(yAxis*5);
    if(*(row+temp)==1)
        bomb=true;
    return(bomb);
}

int main()
{
    int row[5][5]={{1,1,0,1,0},
                   {0,0,1,0,1},
                   {1,1,0,0,1},
                   {0,0,1,1,0},
                   {1,0,1,1,1}};
            
    int x=0, y=0, key=0,position=0;
    char hideRow[5][5];
    bool gameOver=false;

    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            hideRow[j][i]='X';

    while(!gameOver)
    {
        do
        {
            position=showRow(*hideRow,x,y,key,25);
            key=0;
            switch(key=getch())
                {
                    case KEY_DOWN:
                        y++;
                        break;
                    case KEY_UP:
                        y--;
                        break;
                    case KEY_LEFT:
                        x--;
                        break;
                    case KEY_RIGHT:
                        x++;
                        break;
                    default:
                        break;
                }
            switch(x)
            {
                case -1:
                    x=4;
                    break;
                case 5:
                    x=0;
                    break;
                default:
                    break;
            }
            switch(y)
            {
                case -1:
                    y=4;
                    break;
                case 5:
                    y=0;
                    break;
                default:
                    break;
            }
            
        }while(key!=13);
        countBombs(*row,*hideRow,x,y,25,position);
        gameOver=isBomb(*row,x,y);
    }

    if(gameOver)
    {
        cout<<"GAME OVER!"<<endl<<"BOMB LOCATIONS:"<<endl;
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
                cout<<row[i][j]<<" ";
            cout<<endl;
        }
        PlaySound(TEXT("MineDumbass.wav"),NULL,SND_SYNC);
        system("pause");
    }
    
  
    return 0;
}