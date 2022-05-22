#pragma once
#include <stdio.h>
#include "Basura.h"

using namespace std;
using namespace System;
using namespace System::Drawing;

class Sprite : public Basura {
public:
	Sprite(int _x, int _y) {
		ancho = 100;
		alto = 200;
		x = _x;
		y = _y;
	}
	~Sprite() {

	}


	Rectangle getRectangulo() { return Rectangle(x, y, (int)(ancho * 0.5), (int)(alto * 0.5)); }
};