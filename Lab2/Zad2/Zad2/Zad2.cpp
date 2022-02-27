// Zad2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.

using namespace std;
#include <iostream>
#include "Kalkulator.h"
#include <string>
#include "SwitchF.h"
#include "Kalkulator_roz.h"

int main()
{
    string op, b;
    double a, bb;
    double pamiec = 0;
    SwitchF swi;
    cout << "--------------------------------" << endl;
    cout << "Kalkulator" << endl;
    cout << "--------------------------------" << endl;

    cout << "Aby wyjsc z programu wpisz: [E]" << endl;
    cout << "Aby zresetowac wynik wpisz: [C]" << endl;
    cout << "\nPodaj jeden z Operatorow aby stworzyc dzialanie: [+] [-] [*] [/] [%] [s]\n" << endl;
    cout << "\nPodaj jeden z Operatorow aby stworzyc dzialanie na pamieci: [M+] [M-] [M*] [M/] [M%] [Ms]\n" << endl;
    cout << "Aby wypisac pamiec wpisz: [MR]" << endl;
    cout << "Aby zresetowac pamiec wpisz: [MC]" << endl;
    bb = 0;

    cout << "\nPodaj a: " << endl;
    cin >> a;
    
    cout << "\nPodaj Operator: [+] [-] [*] [/] [%] [s]\n" << endl;
    cin >> op;
    
    swi.przypadki(op, a, bb, b, pamiec);
        

}

