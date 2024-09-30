#include<iostream>
using namespace std;
void check(int ,int);
main()
{
int x,y;
cout<<"enter the first number:";
cin>>x;
cout<<"enter the second number:";
cin>>y;
check(x,y);
}
void check(int x,int y)
{
if(x==y)
{
cout<<"true";
}
else{cout<<"false";}
}