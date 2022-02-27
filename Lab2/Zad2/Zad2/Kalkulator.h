#pragma once
class Kalkulator
{
public:

	double dodawanie(double a, double b);
	double odejmowanie(double a, double b);
	double mnozenie(double a, double b);
	double dzielenie(double a, double b);
	double modulo(double a, double b);
	double pierwiastek(double a, double b);
	friend class Kalkulator_roz;
	friend int main();
};

