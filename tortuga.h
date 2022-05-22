#pragma once
#include <stdio.h>
#include "pez.h"

using namespace std;
using namespace System;
using namespace System::Drawing;

class tortuga : public Cpez {


public:
	tortuga(int _x, int _y) {
		ancho = 123;
		alto = 67;
		x = _x;
		y = _y;
	}

	~tortuga() {}

	void mov_tor(BufferedGraphics^ g, Bitmap^ bmp) {
		if (indX >= 0 && indX < 3) { indX++; }
		else indX = 0;

		x -= dx;
		dibuja_pez(g, bmp);
	}

	Rectangle getRectangulo() { return Rectangle(x, y, ancho, alto); }
};