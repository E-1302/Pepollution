#pragma once
#include <stdio.h>
#include "pez.h"

using namespace std;
using namespace System;
using namespace System::Drawing;

class pezverde : public Cpez {

public:
	pezverde(int _x, int _y) {
		ancho = 92;
		alto = 100;
		x = _x;
		y = _y;
	}
	~pezverde() {}

	void mov_pezverde(BufferedGraphics^ g, Bitmap^ bmp) {
		if (indX >= 0 && indX < 3) { indX++; }
		else indX = 0;

		x -= dx;
		dibuja_pez(g, bmp);
	}

	Rectangle getRectangulo() { return Rectangle(x, y, ancho, alto); }
};