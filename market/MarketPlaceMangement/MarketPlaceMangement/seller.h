#pragma once
#include <iostream>
#include"product.h"
#include<string>

using namespace std;
class Seller
{
private:
	
	long long seller_iD;
	string name;
	string email;
	string password;
	//list<product> s_product;


public:
	static long long Sid_counter;
	Seller( string name, string email);
	static void Seller_Reg(Seller s,string);
	static bool login(string email, string password);
	void add_product(product p);
	string getEmail();
	string getName();
	string getPassword();
	void setPassword(string password);
	long long getSID();



};
