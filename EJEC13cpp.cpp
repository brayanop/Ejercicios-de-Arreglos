#include <iostream>
using namespace std;
void mistrcpy(string str1[], string str2[] , int N) {
    for (int i = 0;i < N;i++){
        str1[i] = str2[i];
    }
}

int main() {
    string A[100];
    string B[100]; 
    int cont = 1;
    cout << "Ingrese los elementos de su arreglo A (escribe '/' para terminar):" << endl;
    for (int i = 0; i < 100; i++) {
        cin >> A[i];
        if (A[i] == "/") {
        	cont--;
            break; 
        } 
        cont++;
    }
    
    mistrcpy(B,A,cont);
    
    cout << "Cadena copiada en arreglo B: " << endl ;
    for(int i = 0 ;i<cont;i++){
    	cout<< B[i] << " " ;
	}
    return 0;
}
