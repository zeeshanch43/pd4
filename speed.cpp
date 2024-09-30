#include<iostream>
using namespace std;
void car(int);
main()
{

int speed;
cout<<"speed:";
cin>>speed;
car(speed);
}
void car(int speed)
{
if(speed>100){
cout<<"Halt YOU WILL BE CHALLENGED!!!";}
else
{
cout<<"Perfect! You are going good.";}

}
