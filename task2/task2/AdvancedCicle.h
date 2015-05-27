#pragma once
#include "Style.h"
#include "Color.h"
#include "Cicle.h"
#include <string>
#include <sstream>

using namespace std;

class AdvancedCicle : public Color, public Style, public Cicle {
public:
	AdvancedCicle(string color, string style, float radius) : Color(color), Style(style), Cicle(radius)
	{

	}

	string toString() {
        stringstream s;
        s << "Cicle is "
		  << style << " "
		  << color << " "
		  << " with " << area << " area." << endl;
        return s.str();
	}

};