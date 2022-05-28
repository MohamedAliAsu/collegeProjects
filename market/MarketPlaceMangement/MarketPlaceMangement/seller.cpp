#include "Seller.h"
#include"values.h"
long long Seller::Sid_counter = 1;

Seller::Seller( string name, string email)
{
	this->seller_iD = Sid_counter;
	this->email = email;
	this->name = name;
	Sid_counter++;

}

void Seller::Seller_Reg(Seller s, string p)
{
	s.setPassword(p);
	values::AllSellers.push_back(s);
	values::currentS = values::AllSellers.size()-1;
}

bool Seller::login(string email,string password)
{
	for (int i = 0; i < values::AllSellers.size(); i++)
	{
		if (email == values::AllSellers[i].email&&
			password==values::AllSellers[i].password) {
			values::currentS = i;
			return true;
		}
	}
	return false;
	
}


void Seller::add_product(product p)
{


	values::AllProducts.push_back(p);


}

string Seller::getEmail()
{
	return email;
}

string Seller::getName()
{
	return name;
}

string Seller::getPassword()
{
	return password;
}

void Seller::setPassword(string password)
{
	this->password = password;
}

long long Seller::getSID()
{
	return seller_iD;
}
