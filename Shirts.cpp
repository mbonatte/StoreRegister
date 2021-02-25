//	Mauricio Sampaio Bonatte
//	CS 201
//	Fall 2014
//	Program 5


#include <iostream>
#include <string>
#include "Shirts.h"
using namespace std;


Shirts::Shirts() // the default constructor
{
	size = "";	
}

void Shirts::setSize(string setSize) //this sets the Size
{
	size = setSize;
}

void Shirts::print(ofstream &foutOutput) // this will print the product
{
	foutOutput.width(3);
	foutOutput << right << quantity << " ";
	foutOutput.width(28);
	foutOutput << left << size + " " + description;
	foutOutput << "$";
	foutOutput.width(7);
	foutOutput.precision(2);
	foutOutput << right << fixed << calculateTotal() << endl;

}

double Shirts::calculateTotal() // get the total price
{
	
	if (size == "2XL" || size == "3XL")
	{
		
		return quantity * (price + 1);
	}
	else
	{
		
		return (quantity *  price);
	}
}