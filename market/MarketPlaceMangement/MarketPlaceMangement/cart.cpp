#include "cart.h"
#include"product.h"
cart::cart()
{
	total_price = 0;
}

void cart::emptyCart()
{
	CartProducts.clear();
}


double cart::calculateTotal()
{
	for (int i = 0; i < CartProducts.size(); i++)
	{
		total_price += (CartProducts[i].price())*(CartProducts[i].quantity());
	}
	return total_price;
}

void cart::add(product p)
{
	CartProducts.push_back(p);
}

double cart::getTotal_price()
{
	return total_price;
}

vector<product> cart::getCartProducts()
{
	return CartProducts;
}
void decrementQuantity() {
	
}
