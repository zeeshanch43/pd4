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
cout<<"test";
gotoxy(15,15);
cout<<"my name is zeeshan";


}