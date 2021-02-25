//	Mauricio Sampaio Bonatte
//	CS 201
//	Fall 2014
//	Program 5



#ifndef SHIRTS_H
#define SHIRTS_H


#include <iostream>
#include <string>
#include <fstream>
#include "Products.h"

using namespace std;

class Shirts : public Products
{
public:
	Shirts();
	void setSize(string setSize);
	void print(ofstream &foutOutput); // print the product
	double calculateTotal(); //get the total price
protected:
	string size;
};
#endif 