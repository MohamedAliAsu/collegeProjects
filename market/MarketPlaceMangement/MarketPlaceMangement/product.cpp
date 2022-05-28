#include "product.h"
#include<iostream>
#include <string >
#include "values.h"
#include<algorithm>
using namespace std;
long long product::Pid_counter = 1;

product::product()
{

}

product::product(string product_name, double product_price, string product_category, double product_quantity,long long SID)
{
	 Product_id  = Pid_counter  ;
	  Name = product_name;
	  Price = product_price;
	  Category = product_category;
	 Quantity = product_quantity;
	  Seller_id_p = SID;
	  Pid_counter++;
	  
}

long long product::product_id()
{
	return Product_id;
}

string product::name()
{
	return Name;
}

double product::price()
{
	return Price;
}

string product::category()
{
	return Category;
}

double product::quantity()
{
	return Quantity;
}

long long product::seller_id_p()
{
	return Seller_id_p;
}

void product::decrementQuantity(double am)
{
	Quantity-=am;
}
void product::setQuantity(double q)
{
	Quantity = q;
}

void product::updateRating(int rate,int customerId)
{
	if ((find(CustomersRated.begin(), CustomersRated.end(), customerId)==CustomersRated.end())) {
		numberOfRatings++;
		totalRating = (totalRating + rate) / numberOfRatings;
		CustomersRated.push_back(customerId);
	}
	
}



