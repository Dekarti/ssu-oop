#pragma once
#include "Figure.h"

class Cicle : public Figure {
public:

	Cicle(int radius) {
		this->radius = radius;
		this->area = 2 * 3.14 * radius;
	}

private:
	float radius;
};