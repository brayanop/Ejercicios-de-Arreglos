#include<bits/stdc++.h>
using namespace std;
int main (){
string  letra[100];
string  N;
int M;
int cont = 0;

cout <<"Ingrese letra a contar : "<< endl;
cin  >> N;
cout <<"Ingrese la cantidad de letras : "<< endl;
cin  >> M;
cout <<"Ingrese las letras  : "<< endl;
for (int i = 0;i < M;i++){
	cin >> letra[i];
	if (letra[i]==N){
		cont++;
	}
}	
cout <<" la letra aparece: "<< cont;	
	return 0;
}
