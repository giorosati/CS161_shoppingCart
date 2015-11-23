/*********************************************************************
** Author: Giovanni Rosati
** Date: 2015-11-18
** Description: <Main function for testing only

*********************************************************************/
//cartMain.cpp

#include "ShoppingCart.hpp"
#include <iostream>
using namespace std;

int main()
{
	//create some items
	Item a("affidavit", 179.99, 12);
	Item b("Bildungsroman", 0.7, 20);
	Item c("capybara", 4.5, 6);
	Item d("dirigble", 0.05, 16);

	//create a shopping cart
	ShoppingCart sc1;

	//add some items to the shopping cart
	sc1.addItem(&a);
	sc1.addItem(&b);
	sc1.addItem(&c);
	sc1.addItem(&d);

	//calculate and return the total price for items in the cart
	double diff = sc1.totalPrice();
	cout << "The total is: " << diff << endl;
	//system("pause");

	return 0;
}