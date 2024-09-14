#include<iostream>
#include <cmath>
using namespace std;
double potencia(double , int);

int main(){
	double base;
	int exponente;
	
	cout <<"Ingrese la base:" << endl;
	cin >> base;
	
	cout <<"Ingrese el exponente :" << endl;
	cin >> exponente;
	
	double resultado = potencia(base,exponente);
	
	cout << "La Potencia es " << resultado;
	return 0;
}

double potencia(double N , int M){
    return pow(N,M);	
}
