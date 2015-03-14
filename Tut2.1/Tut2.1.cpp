#include"Fraction.h"
#include<iostream>
#include "stdafx.h"
#include<string>


using namespace std;



int main()
{
	Fraction a, b, c;

	

	cout << "enter number one :";
	cin >>a;

	cout << "enter number two :";
	cin >> b;

	



	c = a + b;

	cout << "The addition of the fractions is :" << c << endl;

	c = a - b;

	cout << "The subtraction of the fractions is :" << c << endl;

	c = a * b;

	cout << "The multiplication of the fractions is :" << c << endl;

	c = a / b;

	cout << "The division of the fractions is :" << c << endl;


	system("pause");

};