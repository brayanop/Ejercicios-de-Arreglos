#include<bits/stdc++.h>
using namespace std;
bool ordenado(int A[], int B[], int N) {
    for (int i = 0; i < N; i++) {
        if (A[i] != B[i]) {
            return false; 
        }
    }
    return true; 
}
int main(){
	int A[100],B[100];
	int N;
	cout<<"Ingrese tamanio del arreglo:"<<endl;
	cin>>N;
	cout<<"Ingrese los elementos del arreglo"<<endl;
	for(int i = 0; i < N;i++){
		cin >> A[i];
		}
		
	for (int i = 0; i < N; i++) {
        B[i] = A[i];
    }	
    
	for(int i=0;i<N-1;i++){
		for(int j=i+1;j<N;j++){
		 if(A[i]>A[j]){
		   int aux = A[i];
		   A[i] = A[j];
		   A[j] = aux;
		   }
		}
	}
	
    bool OrdenadoAsc = ordenado(A, B, N);
	
	if(OrdenadoAsc){
		cout<<"El arreglo esta ordenado...";
	}else{
		cout<<"El arreglo no esta ordenado...";
	}
	return 0;
}