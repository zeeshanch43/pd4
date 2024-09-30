#include<iostream>
using namespace std;
void covid(int,int);
main()
{
int tp,person,sheet;
cout<<"enter the number of persons:";
cin>>person;
cout<<"enter the number of rolls:";
cin>>tp;
sheet=tp*500;
covid(person,sheet);
}
void covid(int person,int sheet)
{
 int dayuse,final;
 dayuse=person*57;
 final=sheet/dayuse;
 if(final<=14)
    {
     cout<<"your tp will last "<<final<<" days,buy more!";
    }
    else if(final>14)  
     {   
      cout<<"your tp will last "<<final<<" dyas,no need to panic";
    }

}