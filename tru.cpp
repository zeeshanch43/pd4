#include<iostream>
using namespace std;
void tru(string);
main()
{
  string check;
  cout<<"enter 'true' or 'false':";
  cin>>check;
  tru(check);
  }
  void tru(string check){

  if(check=="true")
   {
     cout<<"false";
   }
  else if(check=="false")
   {
   cout<<"true";
    }

}
