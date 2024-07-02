#include <iostream>
using namespace std;
bool palindromo(char array[],int N) { 
	 char B[100],C[100];
	 for (int i = 0; i < N; i++) {
       B[i]=array[i];
    }
    for(int j = 0; j < N; j++) {
    C[j] = array[N - 1 - j];
    }
	
	for(int i = 0;i < N ;i++){
		if(B[i] != C[i]){
		    return false; 	
		}
	}
    return true ; 
}
int main() {
    char A[100];
    int N ;
    cout<<"Ingrese la cantidad de letras de la oracion:"<<endl;
    cin >> N;
    cout <<"Ingrese frase que sea comprobar si es palindroma:" << endl;
    for(int i=0;i < N; i++){
    cin >> A[i];
}    
cout << endl; 

    bool palind = palindromo(A,N);
    if (palind) {
        cout << "* * * * * * * * Es palidromo  * * * * * * * *" << endl;
    } else {
        cout << "* * * * * * * * No es palidromo  * * * * * * * *" << endl;
    }
    return 0;
	}