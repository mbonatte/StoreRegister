//	Mauricio Sampaio Bonatte
//  msnbb@mail.umkc.edu
//	CS 201
//	Fall 2014
//	Program 5

#include "Register.h"
using namespace std;

Register::Register() //the default constructor
{
	manyProducts = 0;	
}

Register::~Register() // the destructor
{
	for (int i = 0; i < manyProducts; i++)
	delete stuff[i];
}

void Register::printReceipt(ofstream &fout) // this will print the Receipt
{
	double total = 0;
	int itens = 0;
	fout << "****************************************" << endl;
	fout << "*   CS 201 Super Selling Stuff Store   *" << endl;
	fout << "****************************************" << endl << endl;
	fout << "Qty Description                 Total" << endl;
	fout << "--- --------------------------- --------" << endl;
	for (int i = 0; i < manyProducts; i++)
	{
		stuff[i] -> print(fout); //this will print the products
		total += stuff[i]->calculateTotal(); // this will get the total value
		itens += stuff[i]->getter();		//this will get the total itens
	}		
	fout << endl << "Grand total: $" << total << endl;	
	fout << "Items sold : " << itens << endl << endl;
	fout << "* Thank you for shopping at our store! *";
}

void Register::addProduct(ifstream &fin) // this will add the product on the object Product array
{
	string type="";
	string description = "";
	double weight = 0;
	int quantity = 0;
	double price = 0.00;

	getline(fin, type);

	if (type == "SHIRT")
	{
		string size = "";
		getline(fin, description);
		getline(fin, size);
		fin >> quantity;
		fin >> price;
		Shirts *shirt = new Shirts;
		shirt->Setter(description, quantity, price);
		shirt->setSize(size);
		stuff[manyProducts] = shirt;
		manyProducts++;
	}
	else if (type == "BULKFOOD")
	{
		getline(fin, description);
		fin >> quantity;
		fin >> weight;
		fin >> price;
		BulkFood *bulkFood = new BulkFood;
		bulkFood->Setter(description, quantity, price);
		bulkFood->setWeight(weight);
		stuff[manyProducts] = bulkFood;
		manyProducts++;
	}
	else if (type == "SUPPLIES")
	{
		string count = "";
		getline(fin, description);
		getline(fin, count);
		fin >> quantity;
		fin >> price;
		OfficeSupplies *supply=new OfficeSupplies;
		supply->Setter(description, quantity, price);
		supply->setCount(count);
		stuff[manyProducts] = supply;
		manyProducts++;
	}
	
}