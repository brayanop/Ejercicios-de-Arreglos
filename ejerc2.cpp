//Programa que haga "eco" de la entrada, poniendo cada palabra en una línea separada.
#include<bits/stdc++.h>
using namespace std;
int main(){
string A[100];
int N;
cout<<"Ingrese tamano del arreglo"<<endl;
cin >> N;
cout<<"Ingrese los elementos:" << endl;
for(int i=0;i<N;i++){
 cin>>A[i];
}
for(int i=0;i<N;i++){
cout<<A[i]<<endl;
}
return 0; 
} Ejercicio 2
