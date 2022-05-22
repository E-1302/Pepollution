#pragma once
#include <stdio.h>
#include "Padre.h"

using namespace std;
using namespace System;
using namespace System::Drawing;

class Ctanque : public Padre {

private:
	bool bono;

public:
	Ctanque() {
		srand(time(NULL));
		bono = false;
		y = 5;
		x = 20 + rand() % 940 - 20;
		dx = 0;
		dy = 4;
		ancho = 129;
		alto = 108;
	}
	~Ctanque() {}

	void setbono(int bono) { this->bono = bono; }
	bool getbono() { return bono; }

	void dibuja_tanque(BufferedGraphics^ g, Bitmap^ bmp) {
		Rectangle areasprite = Rectangle(indX * ancho, indY * alto, ancho, alto);
		Rectangle zoom = Rectangle(x, y, (int)(ancho * 0.5), (int)(alto * 0.5));
		g->Graphics->DrawImage(bmp, zoom, areasprite, GraphicsUnit::Pixel);
	}

	void mov_tanque(BufferedGraphics^ g, Bitmap^ bmp) {
		y += dy;
		dibuja_tanque(g, bmp);
	}

	Rectangle getRectangulo() { return Rectangle(x, y, (int)(ancho * 0.5), (int)(alto * 0.5)); }

};