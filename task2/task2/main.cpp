//Создать базовый класс фигура и производные от него классы "Точка", "Квадрат", "Круг".
//Создать базовый класс "Оформление" и производные от него классы "Цвет" и "Стиль".
//На основе этих классов создать набор различных классов с использолванием множественного наследования

#include <iostream>
#include "Dot.h"
#include "Square.h"
#include "Cicle.h"
#include "Color.h"
#include "Style.h"
#include "AdvancedSquare.h"
#include "AdvancedCicle.h"

using namespace std;

int main() {
	Dot* dot = new Dot();
	Square* square = new Square(10);
	Cicle* cicle = new Cicle(5);
	cout << dot->getArea() << endl;
	cout << square->getArea() << endl;
	cout << cicle->getArea() << endl;

	Color* color1 = new Color("RED");
	Color* color2 = new Color("BLUE");
	cout << color1->toString();
	cout << color2->toString();

	Style* style1 = new Style("LIGHT");
	Style* style2 = new Style("DARK");
	cout << style1->toString();
	cout << style2->toString();

	AdvancedSquare* asquare = new AdvancedSquare("RED", "DARK", 10);
	cout << asquare->toString();

	AdvancedCicle* acicle1 = new AdvancedCicle("sdf", "dsf", 5);
	cout << acicle1->toString();
	
	AdvancedCicle* acicle2 = new AdvancedCicle("BLUE", "LIGHT", 5);
	cout << acicle2->toString();


	return 0;
}