#pragma once
#include "People.h"
#include "Services.h"
#include "Product.h"
#include <string>
class Check  {
public:
	Check(int numberCheck, int quantity, Product product, Color color, People people) {
		numberCheck_ = numberCheck;
		quantity_ = quantity;
		product_ = product;
		color_ = color;
		people_ = people;
	}
	void setNumberCheck(int numberCheck) {
		numberCheck_ = numberCheck;
	}

	int getNumberCheck() {
		return numberCheck_;
	}

	void setQuantity(int quantity) {
		quantity_ = quantity;
	}

	int getQuantity() {
		return quantity_;
	}

	void setProduct(Product product) {
		product_ = product;
	}

	void setColor(Color color) {
		color_ = color;
	}

	void setPeople(People people) {
		people_ = people;
	}
private:
	int numberCheck_;
	int quantity_;
	Product product_;
	Color color_;
	People people_;
};

