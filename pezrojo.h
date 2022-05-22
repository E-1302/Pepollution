#pragma once
#include <stdio.h>
#include "pez.h"

using namespace std;
using namespace System;
using namespace System::Drawing;

class pezrojo : public Cpez {


public:
	pezrojo(int _x, int _y) {
		ancho = 100;
		alto = 200;
		x = _x;
		y = _y;
	}
	~pezrojo() {}

	void mov_pezrojo(BufferedGraphics^ g, Bitmap^ bmp) {
		indY = 1;
		if (indX >= 0 && indX < 3) { indX++; }
		else indX = 0;

		x -= dx;
		dibuja_pez(g, bmp);
	}

	Rectangle getRectangulo() { return Rectangle(x, y, ancho, alto*0.8); }
};