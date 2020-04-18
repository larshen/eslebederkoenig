// eslebederkoenig.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
// https://www.programmieraufgaben.ch/aufgabe/es-lebe-der-koenig/i33bcg32

#include <iostream>

#define ZELLEN 100
using namespace std;

void zellenschliessen(bool* zellen);
void zellenschliessen2(bool* zellen);
void printZellen(bool* zellen);
void printCount(bool* zellen);

int main()
{
    bool zellen[ZELLEN];
    bool zellen2[ZELLEN];
    zellenschliessen(zellen);
    printZellen(zellen);
    
    zellenschliessen2(zellen2);
    printZellen(zellen2);

    printCount(zellen); 
    printCount(zellen2);

    std::cout << "Hello World!\n";

    return 0;
}

void zellenschliessen(bool* zellen)
{
    for (int i = 0; i < ZELLEN; i++)
    {
        zellen[i] = true;
    }
    for (int i = 2; i <= ZELLEN; i++)
    {
        for (int j = 0; j < ZELLEN; j++)
        {
            if (!((j+1) % i))
            {
                if (i % 2)
                {
                    zellen[j] = true;
                }
                else
                {
                    zellen[j] = false;
                }
            }
        }
    }
}

void zellenschliessen2(bool* zellen)
{
    for (int i = 0; i < ZELLEN; i++)
    {
        zellen[i] = true;
    }
    for (int i = 2; i <= ZELLEN; i++)
    {
        for (int j = 0; j < ZELLEN; j++)
        {
            if (!((j + 1) % i))
            {
                zellen[j] = !zellen[j];
            }
        }
    }
}

void printZellen(bool* zellen)
{
    for (int i = 0; i < ZELLEN; i++)
    {
        cout << "ZelleNr. " << i + 1 << " " << "ist " << zellen[i] << endl;
    }
}

void printCount(bool* zellen)
{
    int erg = 0;
    for (int i = 0; i < ZELLEN; i++)
    {
        if (zellen[i])
            erg++;
    }

    cout << "Es sind : " << erg << " Zellen offen" << endl;
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
