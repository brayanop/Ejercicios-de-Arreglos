#include<bits/stdc++.h>
using namespace std;
bool apellido_correcto (string A[],string B[],int N){
	for(int i = 0;i < N;i++){
		if(A[2]==B[i]){
			return true; 
		}
	}
	return false;
}

int main (){
	string nombres[] = { "Jose", "Paolo", "Guerrero" };
	string apellido[100];
	int cont = 0;
    int N = sizeof(nombres) / sizeof(nombres[0]);
    do{
	cout<<"Ingrese apellido de la persona:"<< endl;
	cin >> apellido[cont];
	
    bool es_correcto = apellido_correcto(nombres,apellido,N);
    if (es_correcto){
    	cout<<"El apellido pertenece a "<<nombres[0]<<" "<<nombres[1] << endl;
    	break;
	} else {
		cout<<"El apellido no pertenece a "<<nombres[0]<<" "<<nombres[1]<< endl;
		cont++;
		cout<<"- - - Intentalo de nuevo - - -"<<endl;
		cout<< endl;
	}
	}while (cont <= 3);
	if(cont == 3){
		cout << "* * * * * * * * Demasiados Intentos * * * * * * * * "<< endl;
	} else {
		cout << "* * * * * * * * El apellido es CORRECTO * * * * * * * *"<< endl;
	}
	return 0;
}