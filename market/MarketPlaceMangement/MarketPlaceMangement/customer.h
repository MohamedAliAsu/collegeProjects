#pragma once
#include <iostream>
#include<string>
#include<map>
#include<vector>
#include"product.h"
#include"cart.h"
using namespace std;
class customer
{
public :
	static int id_counter;
private:
	long long customer_id;
	string customer_name, customer_address, customer_email,password;
	string phone_number;
	cart CustomerCart;

public:
	customer(string customer_address,string customer_email,string customer_name,string phone_number);
	static bool login(string customer_email, string password);
	static vector<product> browse_name(string ntobrowse);
	static vector<product> browse_category(string ctobrowse);
	bool C_add_product(product ,double);
	void confirm_buying();
	static void Cust_Reg(customer,string);
	cart GetCustomerCart();
	string getPassword();
	void setPassword(string password);
	long long getCustomer_id();
	string getCustomer_name();
	string getAddress();
	string getEmail();
	string getPhone();
	void deloadCart();

};

