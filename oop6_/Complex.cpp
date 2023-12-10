#include "Complex.h"
#include <iostream>
using namespace std;

Complex::Complex() // ����������� �� �������������
{
    real = 0.0;
    infin = 0.0;
}

Complex Complex::Init(double r, double i) // ����������� � �����������
{
    real = r;
    infin = i;
    return *this;
}

Complex::Complex(const Complex& m) // ����������� ���������
{
    real = m.real;
    infin = m.infin;
}

void Complex::Read() {
    cout << "������ ����� ������� a = ";
    cin >> real;
    cout << "������ ����� ������� c = ";
    cin >> infin;
}

void Complex::Read2() {
    cout << "������ ����� ������� b = ";
    cin >> real;
    cout << "������ ����� ������� d = ";
    cin >> infin;
}

void Complex::Display() {
    cout << "(" << real << ", " << infin << ")";
}

Complex Complex::Add(Complex m) {
    Complex temp;
    temp.real = this->real + m.real;
    temp.infin = this->infin + m.infin;
    return temp;
}

Complex Complex::Sub(Complex m) {
    Complex temp;
    temp.real = this->real - m.real;
    temp.infin = this->infin - m.infin;
    return temp;
}

Complex Complex::Mul(Complex m) {
    Complex temp;
    temp.real = this->real * m.real - this->infin * m.infin; // �� - bd 
    temp.infin = this->infin * m.real + this->real * m.infin; // dd + bc
    return temp;
}

Complex Complex::Div(Complex m) {
    Complex temp;
    double f = (this->infin * this->infin + m.infin * m.infin);
    temp.real = (this->real * m.real + this->infin * m.infin) / f;
    temp.infin = (this->infin * m.real - this->real * m.infin) / f;
    return temp;
}

bool Complex::Equ(Complex m) {
    return (m.real == this->real && m.infin == this->infin);
}

Complex Complex::Conj(Complex m) {
    Complex temp;
    temp.real = this->real;
    temp.infin = -this->infin;
    return temp;
}
