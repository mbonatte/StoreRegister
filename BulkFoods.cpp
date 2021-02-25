//	Mauricio Sampaio Bonatte
//	CS 201
//	Fall 2014
//	Program 5


#include <iostream>
#include <string>
#include "BulkFoods.h"
using namespace std;

BulkFood::BulkFood() //the default constructor
{
	weight = 0.00;
}

void BulkFood::setWeight(double setWight) // will set the Weight
{
	weight = setWight;
}


void BulkFood::print(ofstream &foutOutput) // will print the product
{
	foutOutput.width(3);
	foutOutput << right << quantity << " ";
	foutOutput.width(28);
	foutOutput << left << description;
	foutOutput << "$";
	foutOutput.width(7);
	foutOutput.precision(2);
	foutOutput << right << fixed << calculateTotal() << endl;
}

double BulkFood::calculateTotal() // get the total price
{
	
	return weight*quantity*price;
}