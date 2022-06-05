#include "DiscondIO.h"

void DemoProduct()
{
	const int productsCount = 4;
	Product* products = new Product[productsCount];
	products[0] = Product("TV LG49N000", "TV", 40000);
	products[1] = Product("Micromax Q1", "TV", 2000);
	products[2] = Product("Pantum M650", "Phone", 8000);
	products[3] = Product("HP LasetJet", "Phone", 11000);
	DiscountBase* discount = new PercentDiscount("TV", 25);
	ShowCheckWithDiscount(discount, products, productsCount);

	delete[] products;
	delete discount;
}