#include<iostream>
#include<cmath>
using namespace std;

int main(){
//write a c++ program to compute the volume of a sphere using radiu.

	double radius,volume;
	const double PIE = 3.14159;

	cout<< "enter the sphre radius: ";
	cin>> radius;

	volume = (4.0/3.0) * PIE * pow(radius,3);

	cout << "volume of the sphere: "<< volume<<endl;


	return 0;


}
