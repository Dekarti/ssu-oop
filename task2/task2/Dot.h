#include "Figure.h"

class Dot : public Figure {
public:
	Dot() { area = 0; }
	int getArea() {
		return area;
	}
};