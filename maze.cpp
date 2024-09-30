#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
void printmaze();
void moveplayer(int x,int y);
main()
{
 int x=4, y=4;
system("cls");
printmaze();
while(true){
moveplayer(x,y);
x=x+1;
if(x==21)
{x=4;}
}
}
void moveplayer(int x,int y)
{
  gotoxy(x,y);
  cout<<"p";
  Sleep(50);
  gotoxy(x,y);
  cout<<" ";
  gotoxy(15,15);

}
void printmaze()
{

cout<<"######################"<<endl;
cout<<"#                     #"<<endl;
cout<<"#                     #"<<endl;
cout<<"#                     #"<<endl;
cout<<"#                     #"<<endl;
cout<<"#                     #"<<endl;
cout<<"#                     #"<<endl;
cout<<"#                     #"<<endl;
cout<<"#                     #"<<endl;
cout<<"#######################"<<endl;
}
void gotoxy(int x, int y)
{

COORD cordinates;
cordinates.X=x;
cordinates.Y=y;SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cordinates);
}