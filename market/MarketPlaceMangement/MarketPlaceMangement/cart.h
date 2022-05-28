#pragma once
#include <iostream>
#include<vector>
#include"product.h"
using namespace std;
class cart
{
private:
	vector<product> CartProducts;
	double total_price=0.0;

public:
	cart();
	void emptyCart();
	double calculateTotal();
	void add(product);
	double getTotal_price();
	vector<product> getCartProducts();
};

