#include "values.h"
vector <product> values::AllProducts = {product("Mo Salah Kit",250,"Sports Fashion",14,1),
										product("Washing Machine",2500,"Home And Kitchen",5,1),
										product("Scott bicycle",420,"Bikes",15,1),
										product("Fresh Mango",12.3,"Groceries",30,2),
										product("Nestle Milk",14,"Groceries",30,4),
										product("Refrigerator",3200,"Home And Kitchen",5,1),
										product("Napoli Jersey",180,"Sports Fashion",10,4) };
vector <customer> values::AllCustomers = {};
vector <Seller> values::AllSellers = {};
int values::currentC = 0;
int values::currentS = 0;
int values::currentp = 0;
