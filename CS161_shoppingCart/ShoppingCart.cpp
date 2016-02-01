/*********************************************************************
** Author: Giovanni Rosati
** Date: 2015-11-18
** Description: Function definitions for ShoppingCart class

*********************************************************************/
//ShoppingCart.cpp

#include "ShoppingCart.hpp"
#include "Item.hpp"
#include <iostream>
using namespace std;

//default constructor
//initializes all array items to NULL and arrayEnd to zero
ShoppingCart::ShoppingCart()
{
	arrayEnd = 0;
	for (int counter = 0; counter < 100; counter++)
	{
		arrayOfItems[counter] = NULL;
	}
}

//deconstructor
ShoppingCart::~ShoppingCart()
{
	//cout << "Deconstructor has run" << endl;
	//system("pause");
};

//function to add an item to the array of items
void ShoppingCart::addItem(Item *itemToAdd)
{
	//add an item's memory position to the array using arrayEnd for the correct position in the array
	arrayOfItems[arrayEnd] = itemToAdd;
	arrayEnd++;
	cout << "The address just stored to the arrayOfItems is: " << itemToAdd << endl;
	system("pause");
}

//function to return the total cost of all items in the cart
double ShoppingCart::totalPrice()
{
	double total = 0.0;
	for (int i = 0; i < arrayEnd; i++)
	{
		double LineItemTotal = 0.0;
		Item currentLineItem = *arrayOfItems[i];
		LineItemTotal = currentLineItem.getPrice() * currentLineItem.getQuantity();
		total = total + LineItemTotal;

		cout << "Line Item Total is: " << LineItemTotal << endl;
		cout << "Running Total is: " << total << endl;
	}
	return total;
}