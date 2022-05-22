#pragma once
#include "Padre.h"

class Basura : public Padre {
private:
	int numero;
public:
	Basura() :Padre() {
		dx = 0;
		dy = 10;
	}
	~Basura() { }

	void Mover(BufferedGraphics^ g, Bitmap^ bmp) {
		indX = 0;
		y += dy;
		Mostrar(g, bmp);
	}
};