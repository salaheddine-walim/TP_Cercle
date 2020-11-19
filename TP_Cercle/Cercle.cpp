#define _USE_MATH_DEFINES
#include "Cercle.h"
#include "point.h"
#include <iostream>
#include <cmath>

using namespace std;
Cercle::Cercle()
{
	this->rayon = 0.0;
	this->p = Point(0.0, 0.0);
}

Cercle::Cercle(double r, Point p)
{
	this->rayon = r;
	this->p = p;
}

void Cercle::Afficher()
{
	cout << " Cercle : (" << this->rayon << ", (" << this->p.getX() << "," << this->p.getY() << ")" << endl;
}

void Cercle::chang_rayon(double r)
{
	this->rayon = r;
}

void Cercle::trans_centre()
{
}

double Cercle::calcul_surface()
{
	return pow(this->rayon,2)* M_PI;
}

double Cercle::calcul_perimetre()
{
	return this->rayon * 2 * M_PI;
}
