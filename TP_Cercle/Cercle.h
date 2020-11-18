#pragma once
#include "Point.h"
class Cercle
{
private :
	double rayon;
	Point p;
public :
	Cercle();
	Cercle(double, Point);
	void Afficher();
	void chang_rayon(double);
	void trans_centre();
	double calcul_surface();
	double calcul_perimetre();

};

