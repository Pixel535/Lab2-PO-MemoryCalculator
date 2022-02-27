#include "Kalkulator_roz.h"
#include <cmath>
#include <iostream>

using namespace std;

double Kalkulator_roz::dodawanieM(double pamiec, double a)
{
    pamiec = pamiec + a;
    cout << "\nZmieniono pamiec!" << endl;
    return pamiec;
}

double Kalkulator_roz::odejmowanieM(double pamiec, double a)
{
    pamiec = pamiec - a;
    cout << "\nZmieniono pamiec!" << endl;
    return pamiec;
}

double Kalkulator_roz::mnozenieM(double pamiec, double a)
{
    pamiec = pamiec * a;
    cout << "\nZmieniono pamiec!" << endl;
    return pamiec;
}

double Kalkulator_roz::dzielenieM(double pamiec, double a)
{
    if (a == 0)
    {
        cout << "\nNie dziel przez zero!!! Wpisz poprawna wartosc" << endl;
        return pamiec;
    }
    else
    {
        pamiec = pamiec / a;
        cout << "\nZmieniono pamiec!" << endl;
        return pamiec;
    }
}

double Kalkulator_roz::moduloM(double pamiec, double a)
{
    pamiec = std::fmod(pamiec, a);
    cout << "\nZmieniono pamiec!" << endl;
    return pamiec;
}

double Kalkulator_roz::pierwiastekM(double pamiec, double a)
{
    pamiec = sqrt(pamiec);
    cout << "\nZmieniono pamiec!" << endl;
    return pamiec;
}

double Kalkulator_roz::wypisz(double pamiec)
{
    cout << "\nAktualna pamiec to: " << pamiec << endl;
    return pamiec;
}