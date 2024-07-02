#include <iostream>
using namespace std;
bool Balance(char array[],int N) {
	int primeraAparicion ,ultimaAparicion; 
	 for (int i = 0; i < N; i++) {
        if (array[i] == '(' or  array[i] == ')') {
            primeraAparicion = i;
            break;  
        }
    }

    for (int i = N - 1; i >= 0; i--) {
        if (array[i] == '(' or array[i] == ')' ) {
            ultimaAparicion = i;
            break;  
    }
	}
    
    if(array[primeraAparicion]!= '(' ){
    	return false;
	} 
	if(array[ultimaAparicion]!= ')' ){
		return false;
	}
    
    int balance = 0;
    for (int i=0;i<N;i++) {
        if (array[i]== '(') {
            balance++; 
        } else if (array[i]== ')') {
            balance--;
        }
    }
    if(balance != 0){
          return false;
    } else {
          return true;
    }
}

int main() {
    char A[100];
    int N;
    cout<<"Ingrese el tamanio del arreglo:"<<endl;
    cin >> N;
    cout <<"Ingrese los elementos del arreglo:" << endl;
    for(int i=0;i<N;i++){
    cin >> A[i];
    }
    bool parentesisb = Balance(A,N);
    if (parentesisb) {
        cout << "Los parentesis estan bien balanceados." << endl;
    } else {
        cout << "Los parentesis no estan bien balanceados." << endl;
    }
    return 0;
}