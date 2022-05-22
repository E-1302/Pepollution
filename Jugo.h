#pragma once
#include <stdio.h>
#include "Basura.h"

using namespace std;
using namespace System;
using namespace System::Drawing;

class Jugo : public Basura {
public:
	Jugo(int _x, int _y) {
		ancho = 106;
		alto = 188;
		x = _x;
		y = _y;
	}
	~Jugo() {

	}



	Rectangle getRectangulo() { return Rectangle(x, y, (int)(ancho * 0.5), (int)(alto * 0.5)); }
};