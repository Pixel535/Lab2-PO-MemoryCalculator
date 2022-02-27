#include "Kalkulator.h"
#include <cmath>
#include <iostream>

using namespace std;

double Kalkulator::dodawanie(double a, double b)
{
    a = a + b;
    cout << "\nwynik: " << a << endl;
    return a;
}

double Kalkulator::odejmowanie(double a, double b)
{
    a = a - b;
    cout << "\nwynik: " << a << endl;
    return a;
}

double Kalkulator::mnozenie(double a, double b)
{
    a = a * b;
    cout << "\nwynik: " << a << endl;
    return a;
}

double Kalkulator::dzielenie(double a, double b)
{
    if (b == 0)
    {
        cout << "\nNie dziel przez zero!!! Wpisz poprawna wartosc" << endl;
        return a;
    }
    else
    {
        a = a / b;
        cout << "\nwynik: " << a << endl;
        return a;
    }
}

double Kalkulator::modulo(double a, double b)
{
    a = std::fmod(a, b);
    cout << "\nwynik: " << a << endl;
    return a;
}

double Kalkulator::pierwiastek(double a, double b)
{
    a = sqrt(a);
    cout << "\nwynik: " << a << endl;
    return a;
}
