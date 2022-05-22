#pragma once
#include <vector>
#include <iostream>
#include <fstream>
#include "Tanque.h"
#include "tortuga.h"
#include "pezverde.h"
#include "pezrojo.h"
#include "Jugador.h"
#include "lata2.h"
#include "lata1.h"
#include "Bidon.h"
#include "Gasolina.h"
#include "Jugo.h"
#include "Spray.h"
#include "Ranking1.h"
#include "Ranking2.h"


class Controladora {

private:

	Jugador* buzo;
	vector<Ctanque*> Arrtanque;
	vector<pezrojo*> Arrpezrojo;
	vector <pezverde*> Arrpezverde;
	vector<tortuga*> Arrtortuga;
	vector<Lata1*> Arrlata1;
	vector<Lata2*> Arrlata2;
	vector<Spray*> Arrspray;
	vector<Bidon*> Arrbidon;
	vector<Gasolina*> Arrgasolina;
	vector<Jugo*> Arrjugo;


	int nivel;
	ofstream write_info;
	ifstream get_info;

	vector<Ranking1*> rk1;
	vector<Ranking2*> rk2;

	bool tempextra;
	bool Ganastenivel1, Ganastenivel2;
	clock_t crono;
	

public:
	Controladora() {
		//Personaje principal
		buzo = new Jugador();
		tempextra = false;
		Ganastenivel1 = Ganastenivel2 = false;
		crono = clock();
	}
	~Controladora() { }

	/*void Terminar_Partida(string apodo) {
		if (Ganastenivel1 == false) {
			rk1.push_back(new Ranking1(apodo, buzo->getPuntos()));
			Ranking1* auxiliar;
			if (rk1.size() > 1) {
				for (int i = 0; i < rk1.size(); i++) {
					for (int j = i + 1; j < rk1.size(); j++) {
						if (rk1.at(i)->getPuntaje() < rk1.at(j)->getPuntaje()) {
							auxiliar = rk1.at(i);
							rk1.at(i) = rk1.at(j);
							rk1.at(j) = auxiliar;
						}
					}
				}
			}
			write_info.open("Ranking_1.txt", ios::out | ios::trunc);
			write_info.close();
			write_info.open("Ranking_1.txt", ios::out);
			string espacio = "  ";
			if (write_info.is_open()) {
				for (int i = 0; i < rk1.size(); i++) {
					write_info << rk1.at(i)->getApodo() << espacio << rk1.at(i)->getPuntaje() << "\n";
				}
				write_info.close();
			}
		}

		if (Ganastenivel2 == false) {
			rk2.push_back(new Ranking2(apodo, buzo->getPuntos()));
			Ranking2* auxiliar;
			if (rk2.size() > 1) {
				for (int i = 0; i < rk2.size(); i++) {
					for (int j = i + 1; j < rk2.size(); j++) {
						if (rk2.at(i)->getPuntaje() < rk2.at(j)->getPuntaje()) {
							auxiliar = rk2.at(i);
							rk2.at(i) = rk2.at(j);
							rk2.at(j) = auxiliar;
						}
					}
				}
			}
			write_info.open("Ranking_2.txt", ios::out | ios::trunc);
			write_info.close();
			write_info.open("Ranking_2.txt", ios::out);
			string espacio = "  ";
			if (write_info.is_open()) {
				for (int i = 0; i < rk2.size(); i++) {
					write_info << rk2.at(i)->getApodo() << espacio << rk2.at(i)->getPuntaje() << "\n";
				}
				write_info.close();
			}
		}
	}*/

	//string getRanking(int r) {
	//	string intro = "\n";
	//	string linea;
	//	if (r == 1) {
	//		get_info.open("Ranking1.txt", ios::in);
	//		if (get_info.is_open()) {
	//			if (rk1.size() > 0) {
	//				while (!get_info.eof()) {
	//					getline(get_info, linea);
	//					intro += linea + "\n";
	//				}
	//			}
	//			else intro += "No se jugaron partidas";
	//			get_info.close();
	//		}
	//	}

	//	if (r == 2) {
	//		//Recogemos datos de txt
	//		get_info.open("Ranking2.txt", ios::in);
	//		if (get_info.is_open()) {
	//			if (rk2.size() > 0) {
	//				while (!get_info.eof()) {
	//					getline(get_info, linea);
	//					intro += linea + "\n";
	//				}
	//			}
	//			else intro += "No se jugaron partidas";
	//			get_info.close();
	//		}
	//	}
	//	return intro;
	//}

	clock_t getcrono() {
		return ((clock() - crono) / CLOCKS_PER_SEC);
	}

	void Agregarpezrojo() {
		pezrojo* p = new pezrojo(950, 20 + rand() % 450 - 20); //posicion random
		Arrpezrojo.push_back(p);
	}

	void Agregarpezverde() {
		pezverde* p = new pezverde(950, 20 + rand() % 450 - 20); //posicion random
		Arrpezverde.push_back(p);
	}

	void Agregartortuga() {
		tortuga* p = new tortuga(950, 20 + rand() % 450 - 20); //posicion random
		Arrtortuga.push_back(p);
	}

	void Agregartanque() {
		Ctanque* p = new Ctanque(); // su posicion ya esta definida dentro de su clase
		Arrtanque.push_back(p);
	}

	void Agregarlata1() {
		Lata1* p = new Lata1(20 + rand() % 940 - 20, 20); //posicion random
		Arrlata1.push_back(p);
	}

	void Agregarlata2() {
		Lata2* p = new Lata2(20 + rand() % 940 - 20, 20); //posicion random
		Arrlata2.push_back(p);
	}

	void Agregargasolina() {
		Gasolina* p = new Gasolina(20 + rand() % 940 - 20, 20); //posicion random
		Arrgasolina.push_back(p);
	}

	void Agregarspray() {
		Spray* p = new Spray(20 + rand() % 940 - 20, 20); //posicion random
		Arrspray.push_back(p);
	}

	void Agregarbidon() {
		Bidon* p = new Bidon(20 + rand() % 940 - 20, 20); //posicion random
		Arrbidon.push_back(p);
	}

	void Agregarjugo() {
		Jugo* p = new Jugo(20 + rand() % 940 - 20,20); //posicion random
		Arrjugo.push_back(p);
	}


	void colision_tanque() {
		for (unsigned int i = 0; i < Arrtanque.size(); i++) {
			if (Arrtanque[i]->getRectangulo().IntersectsWith(buzo->getRectangulo())) {
				Arrtanque.erase(Arrtanque.begin() + i);
				tempextra = true;
			}
		}
	}

	void MoverTodo(BufferedGraphics^ buffer, Bitmap^ bmppr, Bitmap^ bmppv, Bitmap^ bmpto, Bitmap^ bmpta, Bitmap^ bmpbuzo) {
		
		buzo->mover(buffer, bmpbuzo);
		
		for (int i = 0; i < Arrpezrojo.size(); i++) {
			Arrpezrojo[i]->mov_pezrojo(buffer, bmppr);
		}
		for (int i = 0; i < Arrpezverde.size(); i++) {
			Arrpezverde[i]->mov_pezverde(buffer, bmppv);
		}
		for (int i = 0; i < Arrtortuga.size(); i++) {
		    Arrtortuga[i]-> mov_tor(buffer, bmpto);
	    }
		for (int i = 0; i < Arrtanque.size(); i++) {
			Arrtanque[i]-> mov_tanque(buffer, bmpta);
		}
		
	}

	void moverbasura(BufferedGraphics^ buffer, Bitmap^ bmpb, Bitmap^ bmpl1, Bitmap^ bmpl2, Bitmap^ bmpg, Bitmap^ bmpsp, Bitmap^ bmpj) {
		for (int i = 0; i < Arrbidon.size(); i++) {
			Arrbidon[i]->Mover(buffer, bmpb);
		}
		for (int i = 0; i < Arrjugo.size(); i++) {
			Arrjugo[i]->Mover(buffer, bmpj);
		}
		for (int i = 0; i < Arrlata1.size(); i++) {
			Arrlata1[i]->Mover(buffer, bmpl1);
		}
		for (int i = 0; i < Arrlata2.size(); i++) {
			Arrlata2[i]->Mover(buffer, bmpl2);
		}
		for (int i = 0; i < Arrgasolina.size(); i++) {
			Arrgasolina[i]->Mover(buffer, bmpg);
		}
		for (int i = 0; i < Arrspray.size(); i++) {
			Arrspray[i]->Mover(buffer, bmpsp);
		}
	}


	void Colisionconform() {
		for (int i = 0; i < Arrpezrojo.size(); i++) {
			if (Arrpezrojo[i]->getX() <=5) Arrpezrojo.erase(Arrpezrojo.begin() + i);
		}
		for (int i = 0; i < Arrpezverde.size(); i++) {
			if (Arrpezverde[i]->getX() <= 5) Arrpezverde.erase(Arrpezverde.begin() + i);
		}
		for (int i = 0; i < Arrtortuga.size(); i++) {
			if (Arrtortuga[i]->getX() <= 5) Arrtortuga.erase(Arrtortuga.begin() + i);
		}
		for (int i = 0; i < Arrtanque.size(); i++) {
			if (Arrtanque[i]->getY() >= 595) Arrtanque.erase(Arrtanque.begin() + i);
		}
		for (int i = 0; i < Arrbidon.size(); i++) {
			if (Arrbidon[i]->getY() >= 595) Arrbidon.erase(Arrbidon.begin() + i);
		}
		for (int i = 0; i < Arrspray.size(); i++) {
			if (Arrspray[i]->getY() >= 595) Arrspray.erase(Arrspray.begin() + i);
		}
		for (int i = 0; i < Arrjugo.size(); i++) {
			if (Arrjugo[i]->getY() >= 595) Arrjugo.erase(Arrjugo.begin() + i);
		}
		for (int i = 0; i < Arrlata1.size(); i++) {
			if (Arrlata1[i]->getY() >= 595) Arrlata1.erase(Arrlata1.begin() + i);
		}
		for (int i = 0; i < Arrlata2.size(); i++) {
			if (Arrlata2[i]->getY() >= 595) Arrlata2.erase(Arrlata2.begin() + i);
		}
		for (int i = 0; i < Arrgasolina.size(); i++) {
			if (Arrgasolina[i]->getY() >= 595) Arrgasolina.erase(Arrgasolina.begin() + i);
		}
	}



	void Colisionconbuzo() {

		for (unsigned int i = 0; i < Arrpezverde.size(); i++) {
			if (Arrpezverde[i]->getRectangulo().IntersectsWith(buzo->getRectangulo())) {
				Arrpezverde.erase(Arrpezverde.begin() + i);
				buzo->anadirPuntosP();
			}
		}
		for (unsigned int i = 0; i < Arrpezrojo.size(); i++) {
			if (Arrpezrojo[i]->getRectangulo().IntersectsWith(buzo->getRectangulo())) {
				Arrpezrojo.erase(Arrpezrojo.begin() + i);
				buzo->anadirPuntosP();
			}
		}
		for (unsigned int i = 0; i < Arrtortuga.size(); i++) {
			if (Arrtortuga[i]->getRectangulo().IntersectsWith(buzo->getRectangulo())) {
				Arrtortuga.erase(Arrtortuga.begin() + i);
				buzo->anadirPuntosP();
			}
		}
		for (unsigned int i = 0; i < Arrbidon.size(); i++) {
			if (Arrbidon[i]->getRectangulo().IntersectsWith(buzo->getRectangulo())) {
				Arrbidon.erase(Arrbidon.begin() + i);
				buzo->anadirPuntosB();
			}
		}
		for (unsigned int i = 0; i < Arrjugo.size(); i++) {
			if (Arrjugo[i]->getRectangulo().IntersectsWith(buzo->getRectangulo())) {
				Arrjugo.erase(Arrjugo.begin() + i);
				buzo->anadirPuntosB();
			}
		}
		for (unsigned int i = 0; i < Arrspray.size(); i++) {
			if (Arrspray[i]->getRectangulo().IntersectsWith(buzo->getRectangulo())) {
				Arrspray.erase(Arrspray.begin() + i);
				buzo->anadirPuntosB();
			}
		}
		for (unsigned int i = 0; i < Arrlata1.size(); i++) {
			if (Arrlata1[i]->getRectangulo().IntersectsWith(buzo->getRectangulo())) {
				Arrlata1.erase(Arrlata1.begin() + i);
				buzo->anadirPuntosB();
			}
		}
		for (unsigned int i = 0; i < Arrlata2.size(); i++) {
			if (Arrlata2[i]->getRectangulo().IntersectsWith(buzo->getRectangulo())) {
				Arrlata2.erase(Arrlata2.begin() + i);
				buzo->anadirPuntosB();
			}
		}
		for (unsigned int i = 0; i < Arrgasolina.size(); i++) {
			if (Arrgasolina[i]->getRectangulo().IntersectsWith(buzo->getRectangulo())) {
				Arrgasolina.erase(Arrgasolina.begin() + i);
				buzo->anadirPuntosB();
			}
		}
		
	}

	bool ganar_nivel1() {
		//aqui se modifica la cantidad de puntos necesarios para ganar
		if (buzo->getPuntos() >= 300) return Ganastenivel1 = true;
		else return Ganastenivel1 = false;
	}

	bool ganar_nivel2() {
		if (buzo->getPuntos() >= 600) return Ganastenivel2 = true;
		else return Ganastenivel2 = false;
	}
	
	Jugador* getbuzo() { return buzo; }

	void settempextra(bool _tempextra) { tempextra = _tempextra; }
	bool gettempextra() { return tempextra; }
};