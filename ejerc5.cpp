#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    int A[100];
    int num;
    cout<<"Ingrese el tamano del arreglo: "<< endl;
	cin >> N;
	cout<<"Ingrese los elementos del arreglo:"<< endl;
	cin >> num;
	A[0] = num;
	int max = A[0];
	int min = A[0]; 
	
	for(int i=1 ; i<N; i++){
		cin >> A[i];
		if(A[i] > max){
			max = A[i];
		}
		if(A[i] < min){
			min = A[i];
		}
	}
	int cont1 = 0;
	int cont2 = 0;
	for(int i=0;i<N;i++){
		if(A[i] == max){
			cont1++;
		}
		if(A[i] == min){
			cont2++;
		}
	}
	
    cout << "El maximo valor ingresado es:"<<max<<endl;
    cout << "El maximo valor se repite :"<<cont1<<endl;
    cout << "El minimo valor ingresado es:"<<min<<endl;
    cout << "El minimo valor se repite :"<<cont2<<endl;
    return 0;
}