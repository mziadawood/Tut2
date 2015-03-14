#include"Fraction.h"
#include<iostream>
#include "stdafx.h"
#include<string>


using namespace std;



int main()
{
	Fraction a, b, c;

	int temp1, temp2;

	cout << "enter number one :";
	cin >> temp1;

	cout << "enter number two";
	cin >> temp2;

	



	c = a + b;

	cout << "The addition of the fractions is :" << c;

	c = a - b;

	cout << "The subtraction of the fractions is :" << c;

	c = a * b;

	cout << "The multiplication of the fractions is :" << c;

	c = a / b;

	cout << "The division of the fractions is :" << c;


	system("pause");

};