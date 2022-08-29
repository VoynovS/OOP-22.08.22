#pragma once
#include "Color.h"
#include <string>
#include <iostream>
namespace model {

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

		void setNameProduct(std::string nameProduct) {
			nameProduct_ = nameProduct;
		}

		std::string getNameProduct() {
			return nameProduct_;
		}

		std::ostream& operator<<(std::ostream& os) {
			return os << Product::getNameProduct() << std::endl;
		}


	private:

		Color color_;
		int id_ = 0;
		std::string nameProduct_ = " ";
		int price_ = 0;

	};
}
