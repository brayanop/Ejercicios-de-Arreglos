#include<bits/stdc++.h>
using namespace std;
int mistrcmp(string A[], string B[]) {
    int longitud1 = 0;
    while (A[longitud1] != "/") {
        longitud1++;
    }
    
    int longitud2 = 0;
    while (B[longitud2] != "/") {
        longitud2++;
    }
    
    int num;
    if (longitud1 == longitud2) {
        num = 10; 
    } else if (longitud1 < longitud2) {
        num = -1; 
    } else {
        num = 1;
    }
    return num;
}
int main(){
	string A[100],B[100];
	cout << "Ingrese los elementos de su arreglo str1 (escribe '/' para terminar):" << endl;
    for (int i = 0; i < 100; i++) {
        cin >> A[i];
        if (A[i] == "/") {
            break; 
        } 
    }
    cout << "Ingrese los elementos de su arreglo str2 (escribe '/' para terminar):" << endl;
    for (int i = 0; i < 100; i++) {
        cin >> A[i];
        if (A[i] == "/") {
            break; 
        }
    }
    
    int valor = mistrcmp (A,B);
    cout<<"El valor es:"<< valor;
	return 0;
}
