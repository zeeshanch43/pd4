#include<iostream>
#include<windows.h>
using namespace std;
void printh();
void printa();
void prints();
void printw();
void printx();
void printn();

void gotoxy(int x,int y)
{
    COORD cordinates;
    cordinates.X=x;
    cordinates.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cordinates);
}

int main()
{
    int x,y;
    system("cls");
    printh();
    printa();
    prints();
    printw();
    printx();
    printn();
    gotoxy(x,y); 
}
void printh()
{
    gotoxy(15,14);
    cout<<"**   **";
    gotoxy(15,15);
    cout<<"**   **";
    gotoxy(15,16);
    cout<<"*******";
    gotoxy(15,17);
    cout<<"**   **";
    gotoxy(15,18);
    cout<<"**   **";
    gotoxy(15,19);
}

void printa()
{
    gotoxy(15,20);
    cout<<"********";
    gotoxy(15,21);
    cout<<"**    **";
    gotoxy(15,22);
    cout<<"********";
    gotoxy(15,23);
    cout<<"**    **";
    gotoxy(15,24); 
    cout<<"**    **";
    gotoxy(15,25);
}

void prints()
{
    gotoxy(15,26); 
    cout<<"*******";
gotoxy(15,27); 
    cout<<"**      ";
    gotoxy(15,28);
    cout<<" ***** ";
    gotoxy(15,29); 
    cout<<"     **";
    gotoxy(15,30);
    cout<<" ***";
    gotoxy(15,31);
    cout<<"*******";
    gotoxy(15,32);
}

void printw()
{
    gotoxy(15,33); 
    cout<<"*******";
    gotoxy(15,34);
    cout<<"**      ";
    gotoxy(15,35);  
    cout<<" ***** ";
    gotoxy(15,36);
    cout<<"     **";
    gotoxy(15,37);
    cout<<"*******";
    gotoxy(15,38);
}

void printx()
{
    gotoxy(15,39);
    cout<<"*******";
    gotoxy(15,40);
  cout<<"**   **";
 gotoxy(15,41);
  cout<<"*******";
  gotoxy(15,42); 
  cout<<"**   **";
  gotoxy(15,43);
  cout<<"**   **";
  gotoxy(15,44);

}

void printn()
{
  
  gotoxy(15,45); 
  
  cout<<"* *  **"; 
 gotoxy(15,46);

  cout<<"*  ** *"; 
 gotoxy(15,47); 
  
  cout<<"*   **"; 
gotoxy(15,48); 
cout <<"**   **"; 
gotoxy(15,49); 
cout <<"*   **"; 
gotoxy(15,50);

}