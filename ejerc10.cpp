#include <iostream>
#include <cstdlib>  
using namespace std; 

int main() {
    int num_aleatorio[100];
    int min = 100;
    int max = 1000;
    long int suma = 0;
    srand(3); 
    
    for (int i = 0; i < 30; i++) {
        num_aleatorio[i] = min + rand() % (max - min + 1);
        suma+=num_aleatorio[i]; 
    }
    
    cout<<"Los 30 numeros aleatorios entre 100 y 1000 :"<<endl;
    for (int i = 0; i < 30; i++) {
        cout << num_aleatorio[i] << " ";
    }
    
    for (int i = 0; i < 30 - 1; i++) {
    	for(int j= i+1;j<30;j++){
    		if(num_aleatorio[i]>num_aleatorio[j]){
    		int aux = num_aleatorio[i];
    		num_aleatorio[i]=num_aleatorio[j];
    		num_aleatorio[j]=aux;
			} 	
		}
    }
    cout << "Arreglo de forma ordenado:"<<endl;
    for (int i = 0; i < 30; i++) {
        cout << num_aleatorio[i] << " ";
    }
    
    bool repetido[30] = {false} ;
    for (int i = 0; i < 30; i++) {
        for (int j = i + 1; j < 30; j++) {
            if (num_aleatorio[i] == num_aleatorio[j]) {
                repetido[j] = true;
                break;
            }
        }
    }
    int elemento;
    for(int i = 0; i < 30; i++) { 
    if(repetido[i]) {
        elemento = num_aleatorio[i]; 
        break; 
    }
}
    float x = suma/30; 
    cout<<"la media aritmetica es:"<<x<<endl;
    cout<<"La mediana es :"<<num_aleatorio[14]<<endl;
    cout<<"La moda es: " << elemento;
  
    return 0;
}