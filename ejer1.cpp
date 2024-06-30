#include<bits/stdc++.h>
#include<string>
using namespace std;
//convierte un caracter a mayuscula con la tabla ACSII
char Mayus (char letra1){
if (letra1>='a' && letra1 <='z'){
	return letra1 - ('a'-'A') ;
}
return letra1;
}
void Mayuscula(string A[],int N){
	for(int i=0;i<N;i++){
	 A[i][0]= Mayus(A[i][0]);	
	}
}

int main (){
	int N;
	string palabra [100];
	cout<<"Ingrese N: "<< endl;
	cin >> N;
	cout<<"Ingrese palabras:"<< endl;
	for(int i=0;i<N;i++){
		cin >> palabra[i];
	}
	Mayuscula(palabra,N);
	
	for(int i=0;i<N;i++){
		cout<<palabra[i]<<" ";
	}
	
	return 0;
}