/*********************************************************************
** Author: Giovanni Rosati
** Date: 2015-11-18
** Description: Function definitions for Item class

*********************************************************************/
//Item.cpp

#include "Item.hpp"
#include <iostream>
using namespace std;

//default constructor
Item::Item()
{
	name = "";
	price = 0.0;
	quantity = 0;
};

//constructor w/parameters
Item::Item(string nameIn, double priceIn, int quantityIn)
{
	setName(nameIn);
	setPrice(priceIn);
	setQuantity(quantityIn);
};

//deconstructor
Item::~Item()
{
	//cout << "Deconstructor has run" << endl;
	//system("pause");
};

//setters
void Item::setName(string nameIn)
{
	name = nameIn;
};

void Item::setPrice(double priceIn)
{
	price = priceIn;
};

void Item::setQuantity(int quantityIn)
{
	quantity = quantityIn;
};

//getters
string Item::getName()
{
	return name;
};

double Item::getPrice()
{
	return price;
};

int Item::getQuantity()
{
	return quantity;
};