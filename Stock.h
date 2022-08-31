#pragma once
#include "People.h"
#include "Check.h"
#include "Product.h"
#include "Position.h"
#include <vector>


namespace model {

	class Stock {
	public:
		void changeQuentity(Position& obj, int quentity) {
			obj.setQuantity(quentity);
		}

		void changeImplementationPeriod(Position& obj, int period) {
			obj.setImplementationPeriod(period);
		}
		void changePriceInput(Position& obj, int priceInput) {
			obj.setPriceInput(priceInput);
		}
	private:
		std::vector<Position> listPosition;		
	};
}
