#pragma once
#include <string>
class Color {
public:
	Color() {

	}
	Color(std::string nameColor) {
		nameColor_ = nameColor;
	}

	void setNameColor (std::string nameColor) {
		nameColor_ = nameColor;
	};

	std::string getNameColor() {
		return nameColor_;
	}
private:
	std::string nameColor_ = " ";
};

