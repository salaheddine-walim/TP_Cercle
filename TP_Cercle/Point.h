#pragma once
class Point
{
private:
	double x;
	double y;
public :

	// Contructeurs
	Point();
	Point(double, double);

	//Accesseurs
	double getX();
	double getY();

	//Modificateurs
	void setX(double x);
	void setY(double y);



};

