#include "customer.h"
#include"product.h"
#include<map>
#include<vector>
#include"cart.h"
#include "values.h"

using namespace std;
int customer::id_counter = 1;
customer::customer( string customer_address, string customer_email, string customer_name, string phone_number)
{
	this->customer_id = id_counter;
	this->customer_address = customer_address;
	this->customer_email = customer_email;
	this->customer_name = customer_name;
	this->phone_number = phone_number;
	id_counter++;
}


bool customer::login(string customer_email, string password)
{
	for (int i = 0; i < values::AllCustomers.size(); i++)
	{
		if (customer_email == values::AllCustomers[i].customer_email&&
			password==values::AllCustomers[i].password)
		{
			values::AllCustomers[values::currentC] = values::AllCustomers[i];
			return true;
		}
	}
	return false;
	
}

vector<product> customer::browse_name(string ntobrowse)
{
	vector<product> toreturn;
	for (int i = 0; i < values::AllProducts.size(); i++)
	{
		if (values::AllProducts[i].name().find(ntobrowse)!=string::npos) {
			toreturn.push_back(values::AllProducts[i]);
		}
	}
	return toreturn;
}

vector<product> customer::browse_category(string ctobrowse)
{
	vector<product> toreturn;
	for (int i = 0; i < values::AllProducts.size(); i++)
	{
		if (values::AllProducts[i].category()._Equal(ctobrowse)) {
			toreturn.push_back(values::AllProducts[i]);
		}
	}
	return toreturn;
}

bool customer::C_add_product(product p,double amount)
{ 
	if (amount <= p.quantity()&&amount>0) {
		product ptoadd = p;
		ptoadd.setQuantity(amount);
		CustomerCart.add(ptoadd);
		return true;
	}
	else {
		return false;
	}
	
	
}

void customer::confirm_buying()
{
	CustomerCart.calculateTotal();
	
	

}

void customer::Cust_Reg(customer c,string s)
{
	c.setPassword(s);
	values::AllCustomers.push_back(c);
	values::currentC = values::AllCustomers.size()-1;
}

cart customer::GetCustomerCart()
{
	return CustomerCart;
}

string customer::getPassword()
{
	return password;
}

void customer::setPassword(string password)
{
	this->password = password;
}

long long customer::getCustomer_id()
{
	return customer_id;
}

string customer::getCustomer_name()
{
	return customer_name;
}

string customer::getAddress()
{
	return customer_address;
}

string customer::getEmail()
{
	return customer_email;
}

string customer::getPhone()
{
	return phone_number;

}

void customer::deloadCart()
{
	CustomerCart.emptyCart();
}

