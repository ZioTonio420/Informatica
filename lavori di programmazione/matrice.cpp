#include <iostream>
using namespace std;
int main()
{
	const int r=2;
	const int c=3;
	int contatr;
	int contatc;
	int matrice[contatr][contatc];
	
	
	
	
	for(contatr=0;contatr<r;contatr++){
		for(contatc=0;contatc<c;contatc++){
			cout<<"inserisci il numero nella posizione "<<contatr<<" , "<<contatc<<" : "<<endl;
			cin>>matrice[contatr][contatc];
			cout<<matrice[contatr][contatc];
		}
    }
    
    
    
    	cout<<"STAMPO MATRICE"<<endl;
    
	for(contatr=0;contatr<r;contatr++){
		for(contatc=0;contatc<c;contatc++){
			cout<<"l\'elemento nella posizione "<<contatr<<" , "<<contatc<<" e\': "<<endl;
		
			cout<<matrice[contatr][contatc]<<" ";
		}
			cout<<endl;
	}

	cout<<"FINE DEL PROGRAMMA ARRIVEDERCI";

	return 0;
}

	
