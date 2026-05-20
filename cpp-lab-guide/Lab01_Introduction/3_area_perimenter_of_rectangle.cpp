#include<iostream>
using namespace std;

int main(){
// write a c++ program to find the area and perimeter of a rectangle. 

	int length , width;

	cout<<" enter length: ";
	cin>>length;
	cout<<"enter width: ";
	cin>> width;

	int perimeter,area;

	perimeter = length + width;
	area = length * width;

	cout<<"area is: " << area <<endl;
	cout<<"perimeter is: " << perimeter<< endl;



	return 0;





}
