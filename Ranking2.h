#pragma once
#include "Padre.h"

class Ranking2 {
private:
	string apodo;
	int puntaje;
public:
	Ranking2(string apodo, int puntaje) {
		this->apodo = apodo;
		this->puntaje = puntaje;
	}
	~Ranking2() {}

	void setApodo(string apodo) { this->apodo = apodo; }
	void setPuntaje(int puntaje) { this->puntaje = puntaje; }

	string getApodo() { return apodo; }
	int getPuntaje() { return puntaje; }
};