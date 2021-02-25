//	Mauricio Sampaio Bonatte
//  msnbb@mail.umkc.edu
//	CS 201
//	Fall 2014
//	Program 5



#ifndef REGISTER_H
#define REGISTER_H

#include <string>
#include "Products.h"
#include "BulkFoods.h"
#include "Shirts.h"
#include "OfficeSupplies.h"

using namespace std;

class Register
{
public:
	Register();
	void addProduct(ifstream &fin);
	void printReceipt(ofstream &fout);
	~Register();
protected:
	int manyProducts;
	Products *stuff[50];
};
#endif 