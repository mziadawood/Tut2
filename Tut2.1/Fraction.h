
#pragma once
#ifndef FRACTION_H
#define FRACTION_H
class Fraction
{
private:
	int den;
	int nume;
public:
	Fraction();
	~Fraction();

	int getDen();
	int getNume();
	void setDen(int);
	void setNume(int);
	Fraction operator+(Fraction&);
	Fraction operator-(Fraction&);
	Fraction operator*(Fraction&);
	Fraction operator/(Fraction&);





};
#endif