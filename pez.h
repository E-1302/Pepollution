#pragma once
#include <stdio.h>
#include "Padre.h"

using namespace std;
using namespace System;
using namespace System::Drawing;


class Cpez : public Padre {

public:

	Cpez() {
		dx = 8;
		dy = 0;
	}
	~Cpez() {}

	void dibuja_pez(BufferedGraphics^ g, Bitmap^ bmp) {
		Rectangle areasprite = Rectangle(indX * ancho, indY * alto, ancho, alto);
		Rectangle zoom = Rectangle(x, y, ancho, alto);
		g->Graphics->DrawImage(bmp, zoom, areasprite, GraphicsUnit::Pixel);
	}

};