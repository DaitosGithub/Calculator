#include <iostream>
#include <string>
#include "calculate.h"

using namespace std; 

int main()
{   
    double x = 0.0;
    char oper = '+';
    double y = 0.0;
    double ergebnis = 0.0;

    cout << "Console Calculator" << endl;
    cout << "Geben sie eine Aufgabe mit einem der Folgenden Rechenoperatorn an!\na+b Fuer Addition\na-b Fuer Subtraktion\na*b Fuer Multiplikation\na/b Fuer Division\n" << endl;
    
    calculate c;
    while (true) 
    {
        cin >> x >> oper >> y;

        if (oper == '/' && y == 0)
        {
            cout << "Nich Loesbar" << endl;
            continue;
        }
        else
        {
            ergebnis = c.Calculate(x, oper, y);
        }
        cout << "Das Ergerbnis lautet: " << ergebnis << endl;
    }
} 
