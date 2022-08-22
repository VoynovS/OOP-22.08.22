#pragma once
#include "Color.h"
#include "People.h"
#include "Services.h"
#include <string>

class Product {
public:
	Product() {

	}
	Product(int id, std::string nameProduct, Color color, int price) {
		id_ = id;
		nameProduct_ = nameProduct;
		color_ = color;
		price_ = price;
	}


private:	
	
	Color color_;
	int id_ = 0;
	std::string nameProduct_ = " ";
	int price_ = 0;

};

