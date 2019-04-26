#pragma once
#include <math.h>
class Complex
{
public:
	double real_part;
	double fake_part;
	double modul;
	double argument;

	double complex_modul()
	{
		modul = sqrt(pow(real_part, 2) + pow(fake_part, 2));

		return (modul);
	}

	double complex_argument()
	{
		argument = atan(fake_part / real_part) * (180/3.14);

		return (argument);
	}


	Complex(){}
	Complex(double real_part, double fake_part) : real_part(real_part), fake_part(fake_part){}
	Complex(const Complex &complex) : real_part(complex.real_part), fake_part(complex.fake_part){}
	~Complex(){}
};