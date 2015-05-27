#pragma once
#include "Design.h"
#include <string>

using namespace std;

class Style : public Design {
public:
	Style(std::string style) {
		if (style == "LIGHT") {
			this->style = style;
		} else if (style == "DARK") {
			this->style = style;
		} else {
			this->style = "UNDEFINED";
		}
	}

	std::string toString() {
		return "Style is " + style + "\n";
	}

protected:
	std::string style;
};