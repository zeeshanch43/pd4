#include <iostream>
using namespace std;
void cat(int,int,int,int);
main()
{
int holidays,totalDays,norm,difference,hours,minutes;
cout << "Holidays: ";
cin >> holidays;    
totalDays = 365;
int workingDays = totalDays-holidays;
int playTime = (workingDays * 63) + (holidays * 127);    
norm = 30000;
difference = norm - playTime;
hours=(difference) / 60;
minutes=(difference) % 60;
cat(playTime,norm,minutes,hours);
}
void cat(int playTime,int norm,int minutes,int hours)
{
if (playTime > norm) {
cout << "Tom will run away" << endl;
cout << hours << " hours and " << minutes << " minutes for play" << endl;
} else {    cout << "Tom sleeps well" << endl;
cout << hours << " hours and " << minutes << " minutes less for play" << endl;
}}
