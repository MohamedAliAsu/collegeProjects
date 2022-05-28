#pragma once
#include <iostream>
#include<string>
#include <vector>
using namespace std;

class product
{
	
public:
	static long long Pid_counter;
	product();
	product(string product_name, double product_price, string product_category, double product_quantity,long long Sid);
	long long  product_id();
	string name();
	double price();
	string category();
	double quantity();
	long long  seller_id_p();
	void decrementQuantity(double);
	void setQuantity(double);
	double totalRating=0;
	int numberOfRatings=0;
	void updateRating(int rate,int CustomerId);
	vector <int>CustomersRated;

private:
	long long Product_id;
	string Name;
	double Price;
	string Category;
	double Quantity;
	long long Seller_id_p;




};

