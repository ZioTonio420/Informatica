#include <iostream>
using namespace std;
int main ()
{
	int i;
    const int MAX=100;
    int vettore[MAX];
    int vettore2[MAX];
    int vettore3[MAX];
	
	cout<<"BENVENUTO!"<<endl<<"Con questo softwere potrai impostare il pin del tuo dispositivo"<<endl;
	cout<<endl;
	cout <<"scegli il tuo pin cifra per cifra premendo invio: " <<endl;
	for(i=0;i<4;i++){
		cin >>vettore[MAX];
	}
	cout<<endl;
	cout<< "pin impostato con successo" <<endl;
	cout<<endl;
	
	
	cout<< "inserisci il pin di sicurezza cifra per cifra: "<<endl;
	for(i=0;i<4;i++){
		cin>> vettore2[MAX];
	}
	
	cout<<endl;
if(vettore[MAX]==vettore2[MAX]){
	cout<<"il pin e' corretto"<<endl;
}
else{

	 cout<<"il pin e' errato, riprovare"<<endl;
	 cout<<endl;
	 cout<<"riprova: "<<endl;
	 	for(i=0;i<4;i++){
		cin >>vettore3[MAX];
	}


cout<<endl;
if(vettore[MAX]==vettore3[MAX]){
cout<<"il pin e' corretto"<<endl;

} 
else{
	cout<< "il dispositivo e stato bloccato, riprovare piu' tardi";
	
}
}
	return 0;
}
	


