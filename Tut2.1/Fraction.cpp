#include"Fraction.h"


Fraction::Fraction()
{
	den = 0;
	nume = 0;
}

Fraction::~Fraction()
{
	den = 0;
	nume = 0;
}


int Fraction::getDen()
{
	return den;
};

int Fraction::getNume()
{
	return nume;
};

void Fraction::setDen(int a)
{
	den = a;
}

void Fraction::setNume(int b)
{
	nume = b;
}



Fraction Fraction:: operator+(Fraction &a)

{
	Fraction p;

	p.nume = nume*a.den + den*a.nume;
	p.den = den*a.den;

	return p;

};

Fraction Fraction:: operator-(Fraction &a)

{
	Fraction p;

	p.nume = nume*a.den - den*a.nume;
	p.den = den*a.den;

	return p;

};

Fraction Fraction:: operator*(Fraction &a)

{
	Fraction p;

	p.nume = nume*a.nume;
	p.den = den*a.den;

	return p;

};

Fraction Fraction::operator/(Fraction &a)

{
	Fraction p;

	p.nume = nume*a.den;
	p.den = den*a.nume;

	return p;

};


