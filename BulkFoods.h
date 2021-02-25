//	Mauricio Sampaio Bonatte
//	CS 201
//	Fall 2014
//	Program 5



#ifndef BULKFOODS_H
#define BULKFOODS_H


#include <iostream>
#include <string>
#include <fstream>
#include "Products.h"

using namespace std;

class BulkFood : public Products	
{
public:
	BulkFood();
	void setWeight(double setWight);
	void print(ofstream &foutOutput); // print the product
	double calculateTotal(); //get the total price
protected:
	double weight;
};
#endif 