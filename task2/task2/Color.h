#pragma once
#include "Design.h"
#include <string>

class Color : public Design {
public:
	Color(std::string color) {
		if (color == "RED") {
			this->color = color;
		} else if (color == "BLUE") {
			this->color = "BLUE";
		} else if (color == "GREEN") {
			this->color= "GREEN";
		} else {
			this->color = "UNDEFINED";
		}
	}

	std::string toString() {
		return "Color is " + color + "\n";
	}

protected:
	std::string color;
};