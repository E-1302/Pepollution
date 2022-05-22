#pragma once
#include <stdio.h>
#include "Basura.h"

using namespace std;
using namespace System;
using namespace System::Drawing;

class Bidon : public Basura {
public:
	Bidon(int _x, int _y) {
		ancho = 118;
		alto = 163;
		x = _x;
		y = _y;
	}
	~Bidon() {}



	Rectangle getRectangulo() { return Rectangle(x, y, (int)(ancho * 0.5), (int)(alto * 0.5)); }
};
