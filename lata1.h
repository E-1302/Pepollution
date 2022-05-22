#pragma once
#include <stdio.h>
#include "Basura.h"

using namespace std;
using namespace System;
using namespace System::Drawing;

class Lata1 : public Basura {
public:
	Lata1(int _x, int _y) {
		ancho = 170;
		alto = 104;
		x = _x;
		y = _y;
	}
	~Lata1() {

	}



	Rectangle getRectangulo() { return Rectangle(x, y, (int)(ancho * 0.5), (int)(alto * 0.5)); }
};