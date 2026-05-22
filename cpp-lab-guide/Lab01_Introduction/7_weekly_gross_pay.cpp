#include<iostream>
using namespace std;

int main(){
//write a c++ program that calculates the wekly gross pay for a worker, based on the total number of hours worked and hours pay rate.

	int hoursWorked,hoursPayRate,pay;

	cout<<"enter the number of hours worked: ";
	cin>>hoursWorked;
	cout<< "enter the hourly pay rate: ";
	cin>> hoursPayRate;

	pay = hoursWorked * hoursPayRate;

	cout<< "the weekly gross pay is: " << pay << endl;


	return 0;


}
