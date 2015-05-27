#pragma once
#include "Figure.h"

class Square : public Figure {
public:

	Square(float width) {
		this->width = width;
		this->area = width * width;
	}

private:
	float width;
};