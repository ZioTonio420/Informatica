#include <iostream>
using namespace std;
int main()

{
	int scelta;
	float n1=0;
	float n2=0;
	float quoz;
	
    do {
    	cout<<endl<<endl;;
        cout << "scegli una di queste opzioni --> " << endl;
		cout <<"1: inserisci due numeri e fai la somma" << endl;
        cout << "2: inserisci due numeri e fai la differenza " << endl;
        cout <<"3: inserisci due numeri e fai la moltiplicazione " << endl;
        cout <<"4: inserisci due numeri e fai la divisione " << endl;
        cout <<"5: esci dal programma " << endl << endl;
        cin >> scelta;
        cout<<endl;
    	
    	switch (scelta) {
    		case 1:
    		
			cout<<"inserisci il primo numero: "<<endl;
			cin>>n1;
			cout<<"inserisci il secondo numero: "<<endl;
			cin>>n2;
			cout<<"la somma dei due numeri e': "<<endl;
			cout<<n1+n2;

         	break;
    			
    		case 2: 
    		cout<<endl;
			cout<<"inserisci il primo numero: "<<endl;
			cin>>n1;
			cout<<"inserisci il secondo numero: "<<endl;
			cin>>n2;
			cout<<"la differenza dei due numeri e': "<<endl;
			cout<<n1-n2;
			
            break;
        
		    case 3: 
			cout<<"inserisci il primo numero: "<<endl;
			cin>>n1;
			cout<<"inserisci il secondo numero: "<<endl;
			cin>>n2;
			cout<<"il prodotto dei due numeri e': "<<endl;
			cout<<n1*n2;
     	
         	break;
        
			case 4:
			cout<<"inserisci il primo numero: "<<endl;
			cin>>n1;
			cout<<"inserisci il secondo numero: "<<endl;
			cin>>n2;
			quoz=n1/n2;
			cout<<"il quoziente dei due numeri e': "<<endl;
			cout<<quoz<<endl;	
			break;
			
			case 5:
				cout<< "grazie di aver usato il nostro programma, arrivederci"<<endl;
			break;
			
	    	default:
	    		cout << "inserisci un valore compreso tra 1 e 5"; cout << endl;
	    	break;
	    }
	}  while (scelta !=6);
	
	return 0;
	
}
