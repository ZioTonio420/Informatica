#include <iostream>
using namespace std;
int main()
{
	int i;
	int cont=0;
	int somma=0;
	int vettore[i];
	
	cout << "quanti numeri vuoi inserire?";
	cin >> cont;
	
	for(i=0;i<cont;i++) {
		cout << "inserisci prossimo numero:";
		cin >> vettore[i];
		somma = vettore[i]+somma;
	}
	
		cout << "la somma dei numeri del tuo vettore e\':" <<somma;
	
	 return 0;
    
	  
	
	}	
