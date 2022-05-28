#pragma once
#include <vector >
#include"customer.h"
#include"product.h"
#include "seller.h"
class values
{
public:
	static vector<product> AllProducts;
	static vector<Seller> AllSellers;
	static vector<customer> AllCustomers;
	
	
public:
	static int currentC;
	static int currentS;
	static int currentp;

	
};

