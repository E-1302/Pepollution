#pragma once
#include <stdio.h>
#include "Basura.h"

using namespace std;
using namespace System;
using namespace System::Drawing;

class Lata2 : public Basura {
public:
	Lata2(int _x, int _y) {
		ancho = 175;
		alto = 163;
		x = _x;
		y = _y;
	}
	~Lata2() {

	}



	Rectangle getRectangulo() { return Rectangle(x, y, (int)(ancho * 0.5), (int)(alto * 0.5)); }
};