//1. includo le librerie

#include <iostream>
using namespace std;

//2.inserisco il blocco main

int main()
{
	//3.dichiaro le variabili e le inizializzo

	int r=0;
	float circ=0;
	float area=0;
	
	//4.input e logica delle operazioni con algoritmo
	
	
	cout << "inserisci il raggio del cerchio: " ;
	
	cin >> r;
	
	circ= (r*2)*3.14;

//5. output
	
	cout << "la circonferenza del cerchio e\' " << circ << endl;
	
	area= (r*r)*3.14;
	
	cout << "l'area del cerchio e\': " << area;
	//6. ritorno al sistema operativo
	return 0;

	//7. fine del programma
}
