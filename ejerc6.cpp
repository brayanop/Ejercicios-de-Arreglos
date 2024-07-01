#include<bits/stdc++.h>
using namespace std;
int main(){
	int A[100];
	int N;
	int sumaImp = 0;
	int sumaPar = 0;
	cout<<"Ingrese el tamano del arreglo:"<<endl;
	cin>>N;
	cout<<"Ingrese los elementos del arreglo:"<< endl;
	for(int i=0;i<N;i++){
		cin>>A[i];
		if(i%2==0){
			sumaPar+=A[i];
		}else{
			sumaImp+=A[i];
		}
	}
	cout << "La suma de elementos de indice par es:"<<sumaPar<<endl;
    cout << "La suma de elementos de indice impar es :"<<sumaImp<<endl;	
	return 0;
}