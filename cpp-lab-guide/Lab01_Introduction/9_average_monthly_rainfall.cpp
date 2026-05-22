#include<iostream>
#include<string>
using namespace std;

int main(){
//write a c++ program that calculates the average monthly rainfall for three month (november, december and january) the program should ask the user to enter the name of each month, such as january and the amount of rain (in mm) that fell that month

	string firstMonth, secondMonth, thirdMonth;
	double average, total , firstMonth_rain,secondMonth_rain, thirdMonth_rain;

	cout<< "enter the name of the first month: ";
	cin>> firstMonth;
        cout<< "\nenter the rainfall (mm) for: " << firstMonth<<" ";
        cin>> firstMonth_rain;	
	cout<< "\nenter the name of the second month: ";
	cin>> secondMonth;
	cout<< "\nenter the rainfall (mm) for: " << secondMonth<< ":  ";
	cin>> secondMonth_rain;
	cout<< "\nenter the name of the third month: ";
	cin>> thirdMonth;
	cout <<"\nenter the rainfall (mm) for: " << thirdMonth<< ": ";
	cin >> thirdMonth_rain;

	average =(firstMonth_rain + secondMonth_rain + thirdMonth_rain) / 3.0;

	cout<<"the average monthly rainfull for "<<firstMonth<< " "<<secondMonth<<" "<<thirdMonth<< ":  " << average<< endl;

return 0;


}
