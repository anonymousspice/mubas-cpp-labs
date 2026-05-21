#include<iostream>
using namespace std;

int main(){
// write a program in c++ that calculates the area of circle using constant pie.

	const double PIE = 3.14159;
	double radius,area;
	cout<< "enter the radius of the circle: ";
	cin >> radius;

	area = radius * PIE;

	cout<< "the area is: "<< area << endl;

	
	
	return 0;




}
