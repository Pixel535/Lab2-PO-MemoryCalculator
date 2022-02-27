#include "SwitchF.h"
#include <iostream>
#include <string>


double SwitchF::przypadki(std::string op, double a, double bb, std::string b, double pamiec)
{
    if(op[0] > 47 && op[0] < 58)
    {
        a = std::stod(op);
        std::cin >> op;
        przypadki(op, a, bb, b, pamiec);
    }
    switch (op[0])
    {
    case 'C':
        a = 0;
        std::cout << "Liczba a zostala wyzerowana, podaj operator:"<< std::endl;
        std::cin >> op;
        przypadki(op, a, bb, b, pamiec);
    case 'E':
        std::cout << "Koniec dzialania\n";
        return 0;
    case 'M':
        switch (op[1])
        {
        case '+':
            pamiec = kal.dodawanieM(pamiec, a);
            break;
        case '-':
            pamiec = kal.odejmowanieM(pamiec, a);
            break;
        case '*':
            pamiec = kal.mnozenieM(pamiec, a);
            break;
        case '/':
            pamiec = kal.dzielenieM(pamiec, a);
            break;
        case '%':
            pamiec = kal.moduloM(pamiec, a);
            break;
        case 's':
            pamiec = kal.pierwiastekM(pamiec, a);
            break;
        case 'R':
            pamiec = kal.wypisz(pamiec);
            break;
        case 'C':
            pamiec = 0;
            std::cout << "Wyzerowano pamiec!" << std::endl;
            break;
        }
    std::cin >> op;
    przypadki(op, a, bb, b, pamiec);
    case '+':
        std::cin >> b;
        if (b[0] > 47 && b[0] < 58)
        {
            bb = std::stod(b);
            a = kal.dodawanie(a, bb);
            std::cin >> op;
            przypadki(op, a, bb, b, pamiec);
        }
        else
        {
            op = b;
            przypadki(op, a, bb, b, pamiec);
        }
    case '-':
        std::cin >> b;
        if (b[0] > 47 && b[0] < 58)
        {
            bb = stod(b);
            a = kal.odejmowanie(a, bb);
            std::cin >> op;
            przypadki(op, a, bb, b, pamiec);
        }
        else
        {
            op = b;
            przypadki(op, a, bb, b, pamiec);
        }
    case '*':
        std::cin >> b;
        if (b[0] > 47 && b[0] < 58)
        {
            bb = stod(b);
            a = kal.mnozenie(a, bb);
            std::cin >> op;
            przypadki(op, a, bb, b, pamiec);
        }
        else
        {
            op = b;
            przypadki(op, a, bb, b, pamiec);
        }
    case '/':
        std::cin >> b;
        if (b[0] > 47 && b[0] < 58)
        {
            bb = stod(b);
            a = kal.dzielenie(a, bb);
            std::cin >> op;
            przypadki(op, a, bb, b, pamiec);
        }
        else
        {
            op = b;
            przypadki(op, a, bb, b, pamiec);
        }
    case '%':
        std::cin >> b;
        if (b[0] > 47 && b[0] < 58)
        {
            bb = stod(b);
            a = kal.modulo(a, bb);
            std::cin >> op;
            przypadki(op, a, bb, b, pamiec);
        }
        else
        {
            op = b;
            przypadki(op, a, bb, b, pamiec);
        }
    case 's':
        std::cin >> b;
        if (b[0] > 47 && b[0] < 58)
        {
            bb = stod(b);
            a = kal.pierwiastek(a, bb);
            std::cin >> op;
            przypadki(op, a, bb, b, pamiec);
        }
        else
        {
            op = b;
            przypadki(op, a, bb, b, pamiec);
        }
    default:
        std::cout << "Error! Brak takiego operatora! Podaj poprawny operator: \n";
        std::cin >> op;
        przypadki(op, a, bb, b, pamiec);
    }
}