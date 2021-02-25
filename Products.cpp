//	Mauricio Sampaio Bonatte
//	CS 201
//	Fall 2014
//	Program 5


#include <iostream>
#include <string>
#include "Products.h"
using namespace std;

Products::Products() // the default constructor
{
	price = 0;
	quantity = 0;
	description = "";
}

void Products::Setter(string descriptionTemp, int quantityTemp, double priceTemp) // will set the Description, Quantity, and Price
{
	description = descriptionTemp;
	quantity = quantityTemp;
	price = priceTemp;
}

void Products::print(ofstream &foutOutput) // A pure virtual function
{
	
}

double Products::calculateTotal() //A virtual function called calculateTotal that will get the total price
{
	
	return (quantity * price);
}

int Products::getter() // will get the quantity
{
	return quantity;
}