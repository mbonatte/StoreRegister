//	Mauricio Sampaio Bonatte
//	CS 201
//	Fall 2014
//	Program 5



#ifndef OFFICESUPPLIES_H
#define OFFICESUPPLIES_H


#include <iostream>
#include <string>
#include "Products.h"

using namespace std;

class OfficeSupplies : public Products
{
public:
	OfficeSupplies();
	void setCount(string setCount);
	void print(ofstream &foutOutput); // print the product
protected:
	string count;
};
#endif 