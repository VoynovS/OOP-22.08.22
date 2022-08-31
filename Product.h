#pragma once
#include <string>
#include <iostream>
namespace model {

	class Product {
	public:
		Product() {
			_color = "color_default";
			_nameProduct = "name_default";
			_priceOutput = 0;
			_size = 0;
		}
		Product(std::string nameProduct, std::string color, int size, int priceOutput) {			
			_nameProduct = nameProduct;			
			_priceOutput = priceOutput;
			_color = color;
			_size = size;
		}

		void setNameProduct(std::string nameProduct) {
			_nameProduct = nameProduct;
		}

		std::string getNameProduct() {
			return _nameProduct;
		}

		void setPriceOutput(int priceOutput) {
			_priceOutput = priceOutput;
		}

		int getPriceOutput() {
			return _priceOutput;
		}

		void setColor(std::string color) {
			_color = color;
		}

		std::string getColor() {
			return _color;
		}

		void setSize(int size) {
			_size = size;
		}

		int getSize() {
			return _size;
		}

		


	private:
		std::string _color;		
		std::string _nameProduct;
		int _priceOutput;
		int _size;
	};
}
