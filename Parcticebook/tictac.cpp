#include <iostream>
#include <conio.h>
using namespace std;

void board(char a[])
{
    cout<<a[7]<<"  "<<"|"<<"  "<<a[8]<<"  "<<"|"<<"  "<<a[9]<<endl;
    cout<<"--------------"<<endl;
    cout<<a[4]<<"  "<<"|"<<"  "<<a[5]<<"  "<<"|"<<"  "<<a[6]<<endl;
    cout<<"--------------"<<endl;
    cout<<a[1]<<"  "<<"|"<<"  "<<a[2]<<"  "<<"|"<<"  "<<a[3]<<endl;
}

void position1(char a[],char x)
{
    int p;
    cout<<"\nP1 Enter position: ";
    cin>>p;
    if(a[p] != ' ')
    {
        cout<<"\nWrong input!!!!!";
        position1(a,x);
        return ;
    }
    a[p] = x;
}

void position2(char a[],char y,int s)
{
    int p;
    cout<<"\nP2 Enter position: ";
    cin>>p;
    if(a[p] != ' ')
    {
        cout<<"\nWrong input!!!!!";
        if (s == 0)
        {
            return;
        }
        
        position2(a,y,s);
        return ;
    }
    a[p] = y;
}

void nullboard(char a[])
{
    for (int i = 0; i < 10; i++)
    {
        a[i] = ' ';
    }
}

int result(char a[],char x,char y)
{
    if(a[1] == x && a[2] == x && a[3] == x)
    {
        cout<<"\n***********P1 won the match***********";
        return 0;
    }
    else if(a[4] == x && a[5] == x && a[6] == x)
    {
        cout<<"\n***********P1 won the match***********";
        return 0;
    }
    else if(a[7] == x && a[8] == x && a[9] == x)
    {
        cout<<"\n***********P1 won the match***********";
        return 0;
    }
    else if(a[1] == x && a[4] == x && a[7] == x)
    {
        cout<<"\n***********P1 won the match***********";
        return 0;
    }
    else if(a[2] == x && a[5] == x && a[8] == x)
    {
        cout<<"\n***********P1 won the match***********";
        return 0;
    }
    else if(a[9] == x && a[6] == x && a[3] == x)
    {
        cout<<"\n***********P1 won the match***********";
        return 0;
    }
    else if(a[9] == x && a[5] == x && a[1] == x)
    {
        cout<<"\n***********P1 won the match***********";
        return 0;
    }
    else if(a[7] == x && a[5] == x && a[3] == x)
    {
        cout<<"\n***********P1 won the match***********";
        return 0;
    }
    else if(a[1] == y && a[2] == y && a[3] == y)
    {
        cout<<"\n***********P2 won the match***********";
        return 0;
    }
    else if(a[4] == y && a[5] == y && a[6] == y)
    {
        cout<<"\n***********P2 won the match***********";
        return 0;
    }
    else if(a[7] == y && a[8] == y && a[9] == y)
    {
        cout<<"\n***********P2 won the match***********";
        return 0;
    }
    else if(a[7] == y && a[4] == y && a[1] == y)
    {
        cout<<"\n***********P2 won the match***********";
        return 0;
    }
    else if(a[8] == y && a[5] == y && a[2] == y)
    {
        cout<<"\n***********P2 won the match***********";
        return 0;
    }
    else if(a[9] == y && a[6] == y && a[3] == y)
    {
        cout<<"\n***********P2 won the match***********";
        return 0;
    }
    else if(a[9] == y && a[5] == y && a[5] == y)
    {
        cout<<"\n***********P2 won the match***********";
        return 0;
    }
    else if(a[3] == y && a[5] == y && a[7] == y)
    {
        cout<<"\n***********P2 won the match***********";
        return 0;
    }
    else if (a[1] != ' ' && a[2] != ' ' && a[3] != ' ' && a[4] != ' ' && a[5] != ' ' && a[6] != ' ' && a[7] != ' ' && a[8] != ' ' && a[9] != ' ')
    {
        return 0;
    }
    
    return 1;
}

void play(char a[],char x,char y,int s)
{
    cout<<"\nPlayer Chooce from X or O: ";
    cin>>x;
    if (x == 'O')
    {
        y = 'X';
    }
    else
    {
        y = 'O';
    }
    while(s == 1)
    { 
        position1(a,x);
        board(a);
        s = result(a,x,y);
        if(s == 0)
        {
            cout<<"\n     GAME  ENDED     ";
            nullboard(a);
            break;
        }
        position2(a,y,s);
        board(a);
        s = result(a,x,y);
        if(s == 0)
        {
            cout<<"\n     GAME  ENDED     ";
            nullboard(a);
        }
    }
}

int main()
{
    char a[10],y,x,r;
    int s = 1;
    nullboard(a);
    board(a);
    r: play(a,x,y,s);
    cout<<"\nTo RESTART enter 1: ";
    cin>>s;
    if(s == 1)
        goto r;
    getch();
    return 0;
}