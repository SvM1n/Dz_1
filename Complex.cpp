#include "Complex.h"
#include <math.h>
//struct complex {
//	double re=0;
//	double im=0;
//};

double complex::modul() {
	return (sqrt(pow(this->re, 2) + pow(this->im, 2)));
}

double maxmod(double z1, double z2) {
		return z1> z2;
	
}