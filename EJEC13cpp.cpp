#include <iostream>
using namespace std;
void mistrcpy(char str1[], char str2[]) {
    int i = 0;
    while (str2[i] != '\0') {
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0';
}

int main() {
    char A[100];
    char B[] = "palabra copiado en cadena 2"; 
    mistrcpy(B,A);
    cout << "Cadena copiada: " << A << endl;
    
    return 0;
}