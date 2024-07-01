#include<bits/stdc++.h>
using namespace std;
int main (){
int A[100];
long long int N;
bool capicua = true ;
int digito;
int cont = 0;

cout <<"Ingrese el numero: "<< endl;
cin  >> N;

 if (N < 0) {
        N = -N;
}
int j = 0; 
while (N != 0) {
        digito = N % 10;   
        A[j++] = digito; 
        N/= 10;              
    }
  for (int i = 0; i < j/ 2; i++) {
        if (A[i] != A[j - 1 - i]) {
             capicua = false; 
             break;
        }
    }
    if (capicua){
    	cout<<"Es capicua";
	}else {
		cout<<"No es capicua";
	}
    return 0;
}   
