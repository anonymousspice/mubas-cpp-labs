#include<iostream>
using namespace std;

int main(){
//write a c++ program that prompts the user for the distace between two cities and in what speed you intend to drive. the program should display the time for the trip

	int distance,speed,time;

	cout<< "enter the distance in (km): ";
	cin >> distance;
	cout <<"enter the speed in (km/h): ";
	cin >> speed;
	
	time = distance / speed;

	cout << "the trip will take "<< time<<" hours" << endl;


	return 0;

}
