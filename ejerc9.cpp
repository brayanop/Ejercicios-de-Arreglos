#include<bits/stdc++.h>
using namespace std;
int main (){
int A[100];
int N;
int ultimo ;
    cout << "Ingrese N: "<< endl;
    cin >> N;
    cout<<"Ingrese los numeros:"<<endl; 
    for (int i = 0; i < N; i++) {
    cin >> A[i];	    
    }
    ultimo = A[N-1];  
    for (int i = N-1; i > 0;i--) {
        A[i] = A[i -1];  
    }
    A[0] = ultimo; 
    cout << "Arreglo rotado a la derecha: "<< endl;
     for (int i = 0; i < N; ++i) {
        cout << A[i] << " ";
    }
    return 0;
}
