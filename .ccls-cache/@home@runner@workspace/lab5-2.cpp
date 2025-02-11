//lab5-2.cpp - displays the total amount due
//Created/revised by <Sarah Yaser Navarrete> on <2/10/25>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

// declaring variables
const double shippingFee1 = 0.99;
const double shippingFee2 = 4.99;
const double clubDiscRate = .10;
double purchaseAmount = 0.0;
double totalAmount = 0.0;
char clubCard = ' ';
	
// Getting values from user
cout << "Enter the purchase amount: ";
	cin >> purchaseAmount;
cout << " Are you a clubcard member? (Y/N): ";
	cin >> clubCard;

// Calculations
if (purchaseAmount >= 100.00 && toupper(clubCard) == 'Y') {
	purchaseAmount = purchaseAmount - (purchaseAmount * clubDiscRate);
	totalAmount = purchaseAmount  + shippingFee1;
}
else if (purchaseAmount >= 100.00 && toupper(clubCard) == 'N') {
	totalAmount = purchaseAmount + shippingFee1;
}
else if (purchaseAmount < 100.00 && toupper(clubCard) == 'Y') {
	purchaseAmount = purchaseAmount - (purchaseAmount * clubDiscRate);
	totalAmount = purchaseAmount + shippingFee2;
}
else if (purchaseAmount < 100.00 && toupper(clubCard) == 'N') {
	totalAmount = purchaseAmount + shippingFee2;
}

// displaying total amount 
cout << " Total amount: $" << fixed << setprecision(2) << totalAmount << endl;
	return 0;
}	//end of main function