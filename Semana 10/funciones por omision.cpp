#include <iostream>
using namespace std;

void cargarVector(int vec[], int tam, string mensaje = "Igrese Numero: " );
void mostrarVector(int vec[], int tam);

int main(){
    // int vNumeros[5] = {0};
    int vNumeros[5]{5,3,6};
    
    //cargarVector(vNumeros, 5);
    
    mostrarVector(vNumeros, 5);
    //cargarVector(vNumeros, 5, "Ingrese edad: ");
    
    return 0;
}

void cargarVector(int vec[], int tam, string mensaje){
    for(int i=0; i<tam; i++){
        cout << mensaje;
        cin >> vec[i];
    }
}

void mostrarVector(int vec[], int tam){
    for(int i=0; i<tam; i++){
        cout << vec[i] << endl;;
    }
}
