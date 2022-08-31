#pragma once
#include <string>
namespace model {
	class Position {
	public:
		Position() {
			_productType = "type_default";
			_quantity = 0;
			_implementationPeriod = 0;
			_priceInput = 0;
		}
		Position(std::string productType, int quantity,
			int implementationPeriod, int priceInput) {
			_productType = productType;
			_quantity = quantity;
			_implementationPeriod = implementationPeriod;
			_productType = productType;
		}

		void setProductType(std::string productType) {
			_productType = productType;
		}

		std::string getPorductType() {
			return _productType;
		}

		void setQuantity(int quantity) {
			_quantity = quantity;
		}

		int getQuantity() {
			return _quantity;
		}

		void setImplementationPeriod(int implementationPeriod) {
			_implementationPeriod = implementationPeriod;
		}

		int getImplementationPeriod() {
			return _implementationPeriod;
		}

		void  setPriceInput(int priceInput) {
			_priceInput = priceInput;
		}

		int getPriceInput() {
			return _priceInput;
		}

		

	private:
		std::string _productType;
		int _quantity;
		int _implementationPeriod;
		int _priceInput;
	};
}
