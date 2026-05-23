#include<iostream>
using namespace std;

int main(){
/*K&L soft drink company recently surveyed 12,467 of its customers and found that approximately
14 percent of those surveyed purchase one or more energy drinks per week. Of those customers
who purchase energy drinks, approximately 64 percent of them prefer citrus flavored energy
drinks. Write a C++ program that displays the following:
• The approximate number of customers in the survey who purchase one or more energy
drinks per week.
• The approximate number of customers in the survey who prefer citrus flavored energy
drinks.*/

	const int customers = 12467;
	int totalenergy , totalcirtus;

	totalenergy = customers * 0.14;
	cout<< totalenergy<< endl;
	totalcirtus = totalenergy * 0.64;
	cout<< totalcirtus<<endl;


}
