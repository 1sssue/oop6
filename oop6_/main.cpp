#include <iostream>
#include "Complex.h"
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Complex a, b, c;

	a.Read();
	b.Read2();
	cout << endl;
	cout << "���������: ";
	c = a.Add(b);
	c.Display();
	cout << endl;
	cout << "³�������: ";
	c = a.Sub(b);
	c.Display();
	cout << endl;
	cout << "��������: ";
	c = a.Mul(b);
	c.Display();
	cout << endl;
	cout << "ĳ�����: ";
	c = a.Div(b);
	c.Display();
	cout << endl;
	cout << "���������: ";
	if (a.Equ(b)) {
		std::cout << "����� ���";
	}
	else {
		std::cout << "����� �� ���";
	}
	cout << endl;
	cout << "��������� �����: ";
	c = a.Conj(a);
	c.Display();
	cout << endl;
}