//	Mauricio Sampaio Bonatte
//	CS 201
//	Fall 2014
//	Program 5


#include <iostream>
#include <string>
#include "OfficeSupplies.h"
using namespace std;



OfficeSupplies::OfficeSupplies() // the default constructor 
{
	count = "";
}

void OfficeSupplies::setCount(string setCount) // will store the sets of supply
{
	count = setCount;
}

void OfficeSupplies::print(ofstream &foutOutput) // will print the product
{
	foutOutput.width(3);
	foutOutput << right << quantity << " ";
	foutOutput.width(28);
	foutOutput << left << description + " (" + count + " count)";
	foutOutput << "$";
	foutOutput.width(7);
	foutOutput.precision(2);
	foutOutput << right << fixed << calculateTotal() << endl;

}

