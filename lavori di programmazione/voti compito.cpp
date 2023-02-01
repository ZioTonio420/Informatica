#include <iostream>
using namespace std;
int main()
{
  const int MAX=100;
  int v[MAX];
  int i;
  int n;
  int vs=0;
  int vi=0;
  
  cout<<"quanti voti vuoi inserire? "<<endl;
  cin>>n;
  
  for(i=0;i<n;i++){
  	cout<<"inserisci i voti uno per uno: ";
  	cin>>v[i];
  	
  	if(v[i]<6){
  		vi++;
	  }
	  
	if(v[i]>=6){
		vs++;
	}
}
  cout<<"i voti insufficienti sono: "<<vi<<endl;
  cout<<"i voti sufficienti sono: "<<vs<<endl;
  
if(vs>vi){
	cout << "CI SONO PIU' VOTI SUFFICIENTI"<<endl;
}
if(vi>vs){
	cout << "CI SONO PIU' VOTI INSUFFICIENTI"<<endl;
    }

if(vs==vi){
	cout<<"CI SONO TANTI VOTI INSUFFICIENTI QUANTI VOTI SUFFICIENTI"<<endl;
}
  return 0;
}
