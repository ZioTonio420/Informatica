#include <iostream>
using namespace std;
int main()
{    
    int i;
    i=4;
	int vettore[i];
	int m; 
	m=4;
	int vettore2[m];
	int s;
	s=4;
	int vettore3[s];	
	
	
	
	for(i=0;i<4;i++) {
				
	cout << "inserisci gli elementi del primo vettore: ";
   	cin >> vettore[i];
   	
   	
    		}
     cout<<endl;
     
     cout << "i valori del primo vettore sono: " << endl;
			for(i=0;i<4;i++){
        		cout << vettore[i]<< endl;      
    		}
        		cout << endl;
    
    for(m=0;m<4;m++) {
				
	cout << "inserisci gli elementi del secondo vettore: ";		        
   	cin >> vettore[m];
    		}
    cout<<endl;
    
	cout << "i valori del secondo vettore sono: " << endl;
	    	for(m=0;m<4;m++){
       	        cout << vettore [m] << endl;      
    	   } 
    cout << endl;
    
    cout << "la somma dei valori inseriti nei loro vettori secondo le loro corrispettive posizioni e': " <<endl;
            for(s=0;s<4;s++){
     	        vettore[s]= vettore[s]+vettore[s];
     	        cout << vettore[s];
     	        cout << endl;
	 }	

	return 0;
}
