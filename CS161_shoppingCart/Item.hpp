/*********************************************************************
** Author: Giovanni Rosati
** Date: 2015-11-18
** Description: Item class definition

*********************************************************************/
//Item.hpp

#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>
using namespace std;

//declare the Item class
class Item
{
private:
	string name;
	double price;
	int quantity;

public:
	//default constructor
	Item();

	//constructor w/parameters
	Item(string, double, int);

	//deconstructor
	~Item();

	//setters
	void setName(string);
	void setPrice(double);
	void setQuantity(int);

	//getters
	string getName();
	double getPrice();
	int getQuantity();
};
#endif