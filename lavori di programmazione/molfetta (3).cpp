#include <iostream>
using namespace std;

int main() 
{
	int num=0;
	int cont=0;
	int somma=0;
	cout << "inserisci il numero. ";
	cin >> num;
	while (cont<=num)
	{
		if(cont%2==0)
	{
		somma=somma+cont;
	}
	cont=cont+1;
    }  
    cout << somma;
    return 0;
    
}
