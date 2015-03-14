#include"Fraction.h"
#include<string>
#include<iostream>
using namespace std;



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



istream& operator>>(istream& is, Fraction &h)
{
	int temp;
	char sp;
	char sl = 0;
	is >> temp>>sp;

	if (sp == '/')
	{
		h.nume = temp;
		is >> h.den;
	}
	else if (sp == ' ')
	{
		int n, d;
		is >> n >> sl >> d;
		h.nume = temp * d + n;
		h.den = d;
	}
	else if (sp == '\n')
	{
		h.nume = temp;
		h.den = 1;
	};
	return is;

};



ostream& operator<<(ostream& os, const Fraction &h)

{
	int n;
	n = h.nume % h.den;
	int w;
	w = h.nume / h.den;
	if (w == 0)
	{
		os << n << "/" << h.den;
	}
	else
	{
		os << w << " " << n << "/" << h.den;
	};
	return os;
};


