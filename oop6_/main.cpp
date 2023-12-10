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
	cout << "Додавання: ";
	c = a.Add(b);
	c.Display();
	cout << endl;
	cout << "Віднімання: ";
	c = a.Sub(b);
	c.Display();
	cout << endl;
	cout << "Множення: ";
	c = a.Mul(b);
	c.Display();
	cout << endl;
	cout << "Ділення: ";
	c = a.Div(b);
	c.Display();
	cout << endl;
	cout << "Порівняння: ";
	if (a.Equ(b)) {
		std::cout << "Числа рівні";
	}
	else {
		std::cout << "Числа не рівні";
	}
	cout << endl;
	cout << "Сполучене число: ";
	c = a.Conj(a);
	c.Display();
	cout << endl;
}