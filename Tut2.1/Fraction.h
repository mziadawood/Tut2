
#pragma once
#ifndef FRACTION_H
#define FRACTION_H

using namespace std;

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
	friend ostream& operator<<(ostream&, const Fraction &);
	friend istream& operator>>(istream&, Fraction &);
};
#endif