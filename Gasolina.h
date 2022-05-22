#pragma once
#include <stdio.h>
#include "Basura.h"

using namespace std;
using namespace System;
using namespace System::Drawing;

class Gasolina : public Basura {
public:
	Gasolina(int _x, int _y) {
		ancho = 129;
		alto = 102;
		x = _x;
		y = _y;
	}
	~Gasolina() {

	}



	Rectangle getRectangulo() { return Rectangle(x, y, (int)(ancho * 0.5), (int)(alto * 0.5)); }
};