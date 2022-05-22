#pragma once
#include "Padre.h"

enum Direcciones { Ninguna, Abajo, Arriba, Izquierda, Derecha };

class Jugador : public Padre {
private:
	int puntos;

	//bool reinicio;

	Direcciones ultimaTecla;
	
public:

	Direcciones direccion;

	Jugador() :Padre() {
		x = 200; //asignar valor
		y = 200; //asignar valor

		ancho = 96; //depende de la imagen
		alto = 57; //depende de la imagen

		dx = dy = 1; //movimiento
		puntos = 0;
		ultimaTecla = Abajo;
		direccion = Ninguna;
		//reinicio = false;
	}
	~Jugador() { }

	int getPuntos() { return puntos; }
	void setPuntos(int puntos) { this->puntos = puntos; }
	void anadirPuntosP() { puntos += 10; } //se suma puntos al recoger peces 
	void anadirPuntosB() { puntos += 20; } //se suma puntos al recoger basura

	void dibujar(BufferedGraphics^ buffer, Bitmap^ bmp) {
		Rectangle areaSprite = Rectangle(indX * ancho, indY * alto, ancho, alto);
		Rectangle escalarPersonaje = Rectangle(x, y, (int)(ancho *1.2 ), (int)(alto*1.2 ));
		buffer->Graphics->DrawImage(bmp, escalarPersonaje, areaSprite, GraphicsUnit::Pixel);
		x += dx;
		y += dy;
	}

	void mover(BufferedGraphics^ buffer, Bitmap^ bmp) {
		switch (direccion) {
		case Abajo:
			indY = 1;
			if (indX >= 0 && indX < 3) { indX++; }
			else indX = 0;
			dy = 10;
			dx = 0;

			ultimaTecla = Abajo;
			break;
		case Arriba:
			indY = 0;
			if (indX >= 0 && indX < 3) { indX++; }
			else indX = 0;
			dy = -10;
			dx = 0;

			ultimaTecla = Arriba;
			break;
		case Derecha:
			indY = 1;
			if (indX >= 0 && indX < 3) { indX++; }
			else indX = 0;
			dy = 0;
			dx = 10;

			ultimaTecla = Derecha;
			break;
		case Izquierda:
			indY = 0;
			if (indX >= 0 && indX < 3) { indX++; }
			else indX = 0;
			dy = 0;
			dx = -10;

			ultimaTecla = Izquierda;
			break;
		case Ninguna:
			dx = dy = 0;
			switch (ultimaTecla)
			{
			case Abajo:
				indY = 1;
				indX = 0;
				break;
			case Arriba:			
				indY = 0;
				indX = 0;
				break;
			case Izquierda:
				indY = 0;
				indX = 0;
				break;
			case Derecha:
				indY = 1;
				indX = 0;
				break;
			default:
				break;
			}

			break;
		}

		if (x + dx<0 || x + dx + ancho * 1.2>buffer->Graphics->VisibleClipBounds.Width) {
			dx *= -1;
		}
		if (y + dy<0 || y + dy + alto * 1.2>buffer->Graphics->VisibleClipBounds.Height) {
			dy *= -1;
		}


		dibujar(buffer, bmp);
	}

	Rectangle getRectangulo() { return Rectangle(x, y,(int)(ancho * 1.2), (int)(alto * 1.2));}
};