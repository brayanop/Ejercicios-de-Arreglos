#include<bits/stdc++.h>
using namespace std;
int main(){
	int A[100];
	int N;
	int suma,suma1,suma2;
	cout<<"Ingrese tamanio del arreglo:"<<endl;
	cin>>N;
	cout<<"Ingrese los elementos del arreglo"<< endl;
	for(int i = 0; i < N;i++){
		cin>>A[i];
		suma += A[i];
		if(A[i]<0){
			suma1+=A[i];
		}else{
			suma2+=A[i];
		}
	}
	cout<<"La suma del arreglo:"<<suma<<endl;
	cout<<"La suma de elementos positivos:"<<suma2<<endl;
	cout<<"La suma de elementos negativos:"<<suma1<<endl;
	return 0;
}
