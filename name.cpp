#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y)
{
COORD cordinates;
cordinates.X=x;
cordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cordinates);

}
main()
{
system("cls");

gotoxy(55,15);
cout<<"Zeeshan";


}