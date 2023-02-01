/*
	Name: Giuseppe Molfetta
	Copyright: colamonico chiarulli
	Author: Giuseppe Molfetta
	Date: 03/10/22 11:14
	Description: Durarta brano
*/

//1. includo le librerie 

#include <iostream>
using namespace std;

//2. inserisco il blocco main

int main()
{
	//3. dichiaro e inizializzo le variabili
	
	int min=0;
	int sec=0;
	int minsec=0;
	//4. input
	cout << "inserisci i minuti del brano:" ;
	cin >> min;
	cout << "inserisci i secondi del brano:" ;
	cin >> sec;
	//5.logica operazioni e algoritmo
	minsec = (min*60)+sec;
	//6. output
	cout << "i secondi totali del brano sono: " << minsec;
	//7. ritorno al sistema operativo
	return 0;
	//8. fine del programma
}
