#include <iostream>
using namespace std;

int main(){ 
	int A[100];
	int N;
	int ultimo;
	cout<<"Ingrese el tamanio del arreglo:"<<endl;
	cin>>N;
	cout<<"Ingrese los elementos:"<<endl;
	for(int i = 0;i < N;i++){
		cin>>A[i];
	}
	A[N-1] = ultimo ;
	for(int i=1; i < N; i++) {
	    cout<<A[i]<<" ";
	}
	ultimo = A[0];
	return 0;
}