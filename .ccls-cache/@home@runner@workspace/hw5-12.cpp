//hw5-12.cpp - displays the total owed
//Created/revised by <Sarah Yaser Navarrete> on <2/10/25>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
//declaring variables
double price1 = 0.0;
double price2 = 0.0;
const double DiscRate = 0.50;
double total = 0.0;

//getting values from user
cout << "Enter the price of item 1: ";
	cin >> price1;
cout << "Enter the price of item 2: ";
	cin >> price2;

//calculations
if (price1 > price2) {
	price2 = price2 - (price2 * DiscRate);
	total = price1 + price2;
}
else if (price2 > price1) { 
	price1 = price1 - (price1 * DiscRate);
	total = price1 + price2;
}
else {
	price2 = price2 - (price2 * DiscRate);
	total = price1 + price2;
}

//displaying total amount
cout << "Total amount: $" << fixed << setprecision(2) << total << endl;
	
	return 0;
}	//end of main function