#include <iostream>
using namespace std;
int cadena_Numero(char A[], int N) {
    int numero = 0;
    for (int i = 0; i < N; i++) {
        if (isdigit(A[i])) {
            numero = numero * 10 + (A[i] - '0');
        }
    }
    return numero;
}

int main() {
    char A[100];
    int cont = 0; 
    int N ,num;

    cout << "Ingrese los digitos de su numero (escriba '/' para terminar):" << endl;
    for (int i = 0; i < 100; i++) {
        cin >> A[i];
        if (A[i] == '/') {
            break;
        }
        cont++;
    }
    num = cadena_Numero(A, cont);
    N = num + 2;
    cout << "El numero " << num <<" sumado mas 2 es " << N << endl;

    return 0;
}
