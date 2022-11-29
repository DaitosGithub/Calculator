#include <iostream>
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
    

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
