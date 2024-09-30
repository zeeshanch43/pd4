#include<iostream>
using namespace std;
void timee(int ,int);
main()
{
 int min,sec;
 cout<<"enter the time in seconds:";
 cin>>sec;
 cout<<"enter the time in minutes:";
 cin>>min;
 timee(min,sec);
}
 void timee(int min ,int sec)
{
 int t;
 t=min*60;
 if(t>sec)
 {cout<<min;}
  else
  {cout<<sec;}

}