/*********************************************************************
** Author: Giovanni Rosati
** Date: 2015-11-18
** Description: ShoppingCart class definition

*********************************************************************/
//ShoppingCart.hpp

#ifndef SHOPPINGCART_HPP
#define SHOPPINGCART_HPP

#include <string>
#include "Item.hpp"
using namespace std;

//declare the Item class
class ShoppingCart
{
private:
	Item* arrayOfItems[100];   //an array of pointers to Items
	int arrayEnd;

public:
	//default constructor
	ShoppingCart();

	//deconstructor
	~ShoppingCart();

	//function to add an item to a shopping cart
	void addItem(Item*);

	//function to return total price of items in cart
	double totalPrice();
};
#endif