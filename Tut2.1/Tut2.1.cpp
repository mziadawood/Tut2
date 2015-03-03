#include"Fraction.h"
#include<iostream>

using namespace std;



int main()
{
	Fraction a, b, c;

	int temp1, temp2, temp3, temp4;

	cout << "enter numerator 1 :";
	cin >> temp1;

	cout << "enter denominator 1 :";
	cin >> temp2;

	cout << "enter numerator 2 :";
	cin >> temp3;

	cout << "enter denominator 2 :";
	cin >> temp4;

	a.setNume(temp1);
	a.setDen(temp2);
	b.setNume(temp3);
	b.setDen(temp4);



	c = a + b;

	cout << "The addition of the fractions is :" << c.getNume() << "/" << c.getDen() << "\n";

	c = a - b;

	cout << "The subtraction of the fractions is :" << c.getNume() << "/" << c.getDen() << "\n";

	c = a * b;

	cout << "The multiplication of the fractions is :" << c.getNume() << "/" << c.getDen() << "\n";

	c = a / b;

	cout << "The division of the fractions is :" << c.getNume() << "/" << c.getDen() << "\n";


	system("pause");

};