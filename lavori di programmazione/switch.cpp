#include <iostream>
using namespace std;
int main()

{
	int i;
	int scelta;
	i=3;
	int vettore[i];
	
	
    do {
    	
        cout << "scegli una di queste opzioni --> " << endl;
		cout <<"1: inserisci i valori del vettore" << endl;
        cout << "2: stampi a video il vettore" << endl;
        cout <<"3: stampi il vettore ordinato al contrario" << endl;
        cout <<"4: esci dal programma" << endl << endl;
        
        //cout << "scegli una delle opzioni compresa tra 1 e 4";
        cin >> scelta;
    	
    	switch (scelta) {
    		case 1:
    			for(i=0;i<3;i++) {
				
				cout << "inserisci l'elemento del vettore: ";
    			        
    			cin >> vettore[i];
    			
    		}	
				cout << endl;
    			break;
    			
    		case 2: 
				cout << "i valori del vettore sono: " << endl;
			for(i=0;i<3;i++){
        		cout << vettore [i] << endl;      
    		}
        		cout << endl;
            break;
        
		    case 3: 
				cout << "i valori del vettore al contrario sono: " << endl;
				for(i=2;i>=0;i--){
        		cout << vettore [i]<< endl;
     		}
     			cout << endl;
         	break;
        
			case 4:
				cout << "grazie di aver usato il nostro servizio, arrivederci";
				break;
			
	    	default:
	    		cout << "inserisci un valore compreso tra 1 e 4"; cout << endl;
	    	break;
	    }
	}  while (scelta !=4);
	
	return 0;
	
}
