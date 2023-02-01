#include <iostream>
using namespace std;
int main()
{
	int i=0;
	int scelta=0;
    int vettore[i];
    int lung=0;
    int np=0;
    int nd=0;
    
	
	
	
	do{
	
	cout <<endl;
	cout << "BENVENUTO" <<endl;	
	cout <<endl;
	cout << "1: inserisci la lunghezza del vettore" <<endl;;
	cout << "2: stampi a video il vettore" <<endl;
	cout << "3: conta quanti numeri pari ci sono nel vettore e stampa il risultato: " <<endl;
	cout << "4: conta quanti numeri dispari ci sono nel vettore e stampa il risultato: " <<endl;
	cout << "5: conta quanti numeri ci sono maggiori di un numero dato in input nel vettore: " <<endl;
	cout << "6: esci dal programma " <<endl;
	cout << endl;
	
	cout << "scegli una delle opzioni: " <<endl;
	cin >> scelta;
	
	switch (scelta) {
		
		case 1:
				cout << "inserisci lunghezza vettore: " <<endl;
				cin >> lung;
				
				for(i=0;i<lung;i++) {
				cout << "inserisci il prossimo numero: " << endl;
				cin >> vettore[i];
				cout <<endl;
			    }
		break;	    
		
		case 2: cout << "i numeri del tuo vettore sono: " <<endl;
		for(i=0; i<lung; i++) {
			cout<< vettore[i] <<endl;
		}	
		break;
		
		case 3: 
		    for(i=0; i<lung; i++) {
		    	if (vettore[i]%2==0){
			
		    	 np=np+1;
			}
			}
			cout <<"i numeri pari del tuo vettore sono: " <<np <<endl;			
		break;	
		
		case 4: for(i=0; i<lung; i++) {
		    	if (vettore[i]%2==1){
		    	 nd=nd+1;
			}
			  }
			cout <<"i numeri dispari del tuo vettore sono: " <<nd <<endl;		
		break;		
		
		case 6:
			cout << "grazie di aver usato il nostro servizio, arrivederci" <<endl;
				break;
		
		default:
			cout << "inserisci un valore compreso tra 1 e 4"; cout << endl;
	    	break;
		  
			
		
		
		}
			
	} while (scelta !=4);
		
	return 0;
    } 
