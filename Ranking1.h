#pragma once
#include "Padre.h"

class Ranking1 {
private:
	string apodo;
	int puntaje;
public:
	Ranking1(string apodo, int puntaje) {
		this->apodo = apodo;
		this->puntaje = puntaje;
	}
	~Ranking1() {}

	void setApodo(string apodo) { this->apodo = apodo; }
	void setPuntaje(int puntaje) { this->puntaje = puntaje; }

	string getApodo() { return apodo; }
	int getPuntaje() { return puntaje; }
};