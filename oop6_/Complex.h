#pragma once
#include <string>
#include <iostream>
#include <string.h>

class Complex
{
	double real;
	double infin;
public:
	Complex(); // Конструктор за замовчуванням
	Complex Init(double r, double i); // Конструктор з параметрами
	Complex(const Complex& m); // Конструктор копіювання

	void Read();
	void Read2();
	void Display();
	Complex Add(Complex m);
	Complex Sub(Complex m);
	Complex Mul(Complex m);
	Complex Div(Complex m);
	bool Equ(Complex m);
	Complex Conj(Complex m);
};
