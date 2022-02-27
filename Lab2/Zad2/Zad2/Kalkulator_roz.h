#pragma once
#include "Kalkulator.h"
class Kalkulator_roz :public Kalkulator 
{
public:
	double dodawanieM(double pamiec, double b);
	double odejmowanieM(double pamiec, double b);
	double mnozenieM(double pamiec, double b);
	double dzielenieM(double pamiec, double b);
	double moduloM(double pamiec, double b);
	double pierwiastekM(double pamiec, double b);
	double wypisz(double pamiec);
};

