#include<iostream>
using namespace std;

int main(){
// write a program to calculate sum, difference, product, divion of two given numbers from user.
     
	int num1,num2,sum,product,difference,division;

	cout<< "enter fist value: ";
	cin >> num1;
	cout<< "enter second value: ";
	cin>> num2;

	sum = num1 + num2;
	product = num1 * num2;
	difference = num1 - num2;
	division = num1 / num2;

	cout<<"sum: "<< sum << endl;


	cout<<"product: "<< product << endl;
	cout<<"difference: "<< difference << endl;
	
	cout<<"division: "<< division << endl;


	return 0;
}
