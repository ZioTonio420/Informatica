/*
	Name: Giuseppe Molfetta
	Copyright: colamonico chiarulli
	Author: Giuseppe Molfetta
	Date: 03/10/22 11:14
	Description: Orario
*/

//1. includo le librerie 

#include <iostream>
using namespace std;

//2. inserisco il blocco main

int main()
{
	//3. dichiaro e inizializzo le variabili
	
	int ore=0;
	int min=0;
	int mintot=0;
	//4. input
	cout << "inserisci le ore: ";
	cin >> ore;
	cout << "inserisci i minuti: ";
	cin >> min;
	//5. logica operazioni e algoritmi
	mintot = (ore*60)+min;
    //6. output
	cout << "l'orario in minuti totali e\': " << mintot;
	//7. ritorno al sistema operativo
	return 0;
	//8. fine del programma	
}

