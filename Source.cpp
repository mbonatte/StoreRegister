//	Mauricio Sampaio Bonatte
//  msnbb@mail.umkc.edu
//	CS 201
//	Fall 2014
//	Program 5
//
// For this program, we will be working with a cash register
//
// 1 - read the products
// 2 - calculate the total price 
// 3 - print a receipt

#include <fstream>

#include "Register.h" //The Cash Register

using namespace std;

int main()
{
		
	ifstream fin("products.txt"); // This will contain all of the data needed to read in products bought.
	ofstream fout("receipt.txt.");  // this will contain the receipt

	Register stuff; // this object will store our datas
	
	while (fin.good())
	{
		stuff.addProduct(fin);	//this will add the new products
	}
	
	stuff.printReceipt(fout); //this will print our Receipt

	// Close our files to ensure we save our data
	fin.close();
	fout.close();

	return 0;
}