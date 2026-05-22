#include<iostream>
using namespace std;

int main(){
//write a c++ program to calculate the total amount and VAT for a given unit price and quanity of items sold. note unit price VAT exclusive and VAT rate is 16.5%.

	const double VAT = 0.165;
	double price , totalAmount, quantity, totalVat, totalPay;

	cout<< "enter the unit price: ";
	cin>> price;
	cout<< "enter the quantity: ";
	cin>> quantity;

	totalAmount = price * quantity;
	totalVat = totalAmount * VAT;
	totalPay = totalVat + totalAmount;
	cout<<"your VAT is: "<< totalVat<< endl;
	cout<<"your total amount before VAT: " << totalAmount<<endl;
	cout << "your total amount after VAT: "<< totalPay<<endl;


	return 0;


}
