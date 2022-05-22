#pragma once
#include <stdio.h>
#include <string>

using namespace std;
using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;

class Padre {
protected:
	int x, y;
	int dx, dy;
	int ancho, alto;
	int indX, indY;
	char* imagen;
	bool visibilidad;

public:
	Padre() {
		indX = indY = 0;
		imagen = new char[50];
		visibilidad = true;
	}
	~Padre() { }

	int getX() { return x; }
	int getY() { return y; }
	int getDx() { return dx; }
	int getDy() { return dy; }
	int getAncho() { return ancho; }
	int getAlto() { return alto; }
	int getIndX() { return indX; }
	int getIndY() { return indY; }
	bool getVisibilidad() { return visibilidad; }

	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }
	void setIndX(int indX) { this->indX = indX; }
	void setIndY(int indY) { this->indY = indY; }
	void setVisibilidad(bool visibilidad) { this->visibilidad = visibilidad; }

	void Mostrar(BufferedGraphics^ g, Bitmap^ bmp) {
		Rectangle areasprite = Rectangle(indX * ancho, indY * alto, ancho, alto);
		Rectangle zoom = Rectangle(x, y, ancho*0.5, alto*0.5);//escala de basura
		g->Graphics->DrawImage(bmp, zoom, areasprite, GraphicsUnit::Pixel);
	}

	Rectangle getRectangle() { return Rectangle(x, y, ancho, alto); }

	bool Colision(Rectangle rec2) { return this->getRectangle().IntersectsWith(rec2); }
};