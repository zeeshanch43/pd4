#include<iostream>
using namespace std;
void calculateAggregate(string,float,float,float);
void printMenu();
void comparison(string,string,float,float);
 
main()
{
	string name1,name2;
	float matric_marks,inter_marks,ecat_marks;
	float matric_marks2,inter_marks2,ecat_marks2;
	printMenu();
	cout<<"enter first student name : ";
	cin>>name1;
	cout<<"enter matric marks : ";
	cin>>matric_marks;
	cout<<"enter inter marks : ";
	cin>>inter_marks;
	cout<<"enter ecat marks : ";
	cin>>ecat_marks;
	calculateAggregate(name1,matric_marks,inter_marks,ecat_marks);
	cout<<endl<<endl;


	
	cout<<"enter second student name : ";
	cin>>name2;
	cout<<"enter matric marks : ";
	cin>>matric_marks2;
	cout<<"enter inter marks : ";
	cin>>inter_marks2;
	cout<<"enter ecat marks : ";
	cin>>ecat_marks2;
	calculateAggregate(name2,matric_marks2,inter_marks2,ecat_marks2);
    comparison(name1,name2,ecat_marks, ecat_marks2);

}


void comparison(string name1,string name2,float ecat_marks,float ecat_marks2){
	if(ecat_marks>ecat_marks2){
		cout<<"the roll nmber  one is for  "<<name1;
	}
	else{
	cout<<"the roll nmber  one is for  "<<name2;
	}
}






	

void calculateAggregate(string name,float matric_marks,float inter_marks,float ecat_marks){
	float aggregate;
       aggregate=((matric_marks/1100)*30)+((inter_marks/550)*30)+((ecat_marks/400)*40);
	   cout<<"the aggregate of "<<name<<" is " <<aggregate;
	   cout<<endl<<endl;
}
void printMenu()
{
	cout<<"    ##        ##       ##########       ##########"<<endl;
	cout<<"    ##        ##       ##                  ##"<<endl;
	cout<<"    ##        ##       ##########          ##"<<endl;
	cout<<"    ##        ##       ##                  ##"<<endl;
	cout<<"     ##########        ##########          ##"<<endl;
	


	cout<<"    #          #       ##       ##       ##    ########       "<<endl;
	cout<<"    #          #     ##  ##     # #     # #    ##   "<<endl;
	cout<<"    #          #     ######     #   # #   #    ########"<<endl;
	cout<<"    #          #     ##  ##     #    #    #          ##"<<endl;
	cout<<"     ##########      ##  ##     #         #    ########     "<<endl<<endl<<endl;
}
