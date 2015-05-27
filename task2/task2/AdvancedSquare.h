#pragma once
#include "Style.h"
#include "Color.h"
#include "Square.h"
#include <string>
#include <sstream>

using namespace std;

class AdvancedSquare : public Color, public Style, public Square {
public:
	AdvancedSquare(std::string color, std::string style, float width) : Color(color), Style(style), Square(width)
	{

	}

	string toString() {
        stringstream s;
        s << "Square is "
		  << style << " "
		  << color << " "
		  << " with " << area << " area." << endl;
        return s.str();
	}

};