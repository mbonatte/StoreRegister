//	Mauricio Sampaio Bonatte
//	CS 201
//	Fall 2014
//	Program 5



#ifndef PRODUCTS_H
#define PRODUCTS_H


#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Products 
{
public:
	Products();
	virtual void print(ofstream &foutOutput); //print the product
	void Setter(string descriptionTemp, int quantityTemp, double priceTemp);
	int getter(); // get the quantity
	virtual double calculateTotal(); // get the total price
protected:
	double price;
	int quantity;
	string description;
};
#endif 