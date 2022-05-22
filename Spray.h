#pragma once
#include <stdio.h>
#include "Basura.h"

using namespace std;
using namespace System;
using namespace System::Drawing;

class Spray : public Basura {
public:
	Spray(int _x, int _y) {
		ancho = 65;
		alto = 113;
		x = _x;
		y = _y;
	}
	~Spray() {

	}


	Rectangle getRectangulo() { return Rectangle(x, y, (int)(ancho * 0.5), (int)(alto * 0.5)); }
};