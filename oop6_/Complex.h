#pragma once
#include <string>
#include <iostream>
#include <string.h>

class Complex
{
	double real;
	double infin;
public:
	Complex(); // ����������� �� �������������
	Complex Init(double r, double i); // ����������� � �����������
	Complex(const Complex& m); // ����������� ���������

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
