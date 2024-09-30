#include<iostream>
using namespace std;
void country(string);

main()
{
string name;

cout<<"enter the country name:";
cin>>name;

country(name);

}
void country(string name)
{
  int total,dollar;
cout<<"enter the price in dollars:";
cin>>dollar;
  if (name=="pakistan")
   {
      
     total=dollar*0.95;
     cout<<total;
    }
   else if(name=="ireland"){
   total=dollar*0.90;
   cout<<total; 
}
   else if(name=="india")
{
total=dollar*0.80;
cout<<total;
}
  else if(name=="england")
{
total=dollar*.70;
cout<<total;

}
else if(name=="canada"){
total=dollar*0.55;
cout<<total;
}   
}



