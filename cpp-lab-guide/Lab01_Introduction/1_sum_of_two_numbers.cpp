#include<iostream>
using namespace std;


int main(){
//write a c++ program that calculates the sum of two numbers provided by the user.

	int num1 , num2 , sum;

	cout<< "enter the value of first number. ";
	cin>>num1;
	cout<< "enter the value of second number: ";
	cin>>num2;

	sum = num1 + num2;
	cout<< "the sum of the values is:" << sum << endl;

	return 0;
}
