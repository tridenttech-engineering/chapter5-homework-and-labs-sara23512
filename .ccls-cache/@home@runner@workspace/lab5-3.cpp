//lab5-3.cpp - displays the total amount due
//Created/revised by <Sarah Yaser Navarrete> on <2/10/25>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{// declaring variables
	const double shippingFee1 = 0.99;
	const double shippingFee2 = 4.99;
	const double premierDiscRate = .10;
	const double regDiscRate = 0.05;
	double purchaseAmount = 0.0;
	double totalAmount = 0.0;
	char PremierCard = ' ';

	// Getting values from user
	cout << "Enter the purchase amount: ";
		cin >> purchaseAmount;
	cout << " Are you a  Premier card member? (Y/N): ";
		cin >> PremierCard;

	// Calculations
	if (purchaseAmount >= 100.00 && toupper(PremierCard) == 'Y') {
		purchaseAmount = purchaseAmount - (purchaseAmount * premierDiscRate);
		totalAmount = purchaseAmount  + shippingFee1;
	}
	else if (purchaseAmount >= 100.00 && toupper(PremierCard) == 'N') {
		purchaseAmount = purchaseAmount - (purchaseAmount * regDiscRate);
		totalAmount = purchaseAmount + shippingFee1;
	}
	else if (purchaseAmount < 100.00 && toupper(PremierCard) == 'Y') {
		purchaseAmount = purchaseAmount - (purchaseAmount * premierDiscRate);
		totalAmount = purchaseAmount + shippingFee2;
	}
	else if (purchaseAmount < 100.00 && toupper(PremierCard) == 'N') {
		purchaseAmount = purchaseAmount - (purchaseAmount * regDiscRate);
		totalAmount = purchaseAmount + shippingFee2;
	}

	// displaying total amount 
	cout << " Total amount: $" << fixed << setprecision(2) << totalAmount << endl;

	return 0;
}	//end of main function