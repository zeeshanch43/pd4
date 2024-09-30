#include<iostream>
using namespace std;
void flower(float,float,float);
main()
{
float red,white,tulips;
cout<<"red roses:";
cin>>red;
cout<<"white roses:";
cin>>white;
cout<<"tulips:";
cin>>tulips;
flower(red,white,tulips);
}
void flower(float red,float white,float tulips)
{
  float amount,discount;
  amount=(red*2)+(white*4.10)+(tulips*2.50);
   if(amount>=200)
   {
    discount=amount*0.80;
    cout<<"total price:"<<amount<<endl;
    cout<<"price after discount:"<<discount;
   }
   else
   {
      cout<<amount<<endl;
      cout<<"no discount applied";
   } 


}