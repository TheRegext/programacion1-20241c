#include <iostream>
using namespace std;

/**
    valores
    direcciones <- valores
    referencias
*/

/**
    vec[] == *vec
    
*/

void pasarVector(int vec[], int tam);
void pasarReferencia(int &n);
void pasarValor(int n);


int main(){
    
    int numerito = 10;
    int vNum[10];
    
    // pasarValor(numerito + 10);
    // pasarReferencia(numerito);
    
    vNum[0] = 7;
    
    cout << "main:&vNum[0]: " << &vNum[0] << endl;
    cout << "main:&vNum: " << &vNum << endl;
    cout << "main:vNum: " << vNum << endl;
    
    pasarVector(vNum, 10);
    
    return 0;
}


void pasarReferencia(int &n){
    cout << "Refer N: " << n << endl;
}

void pasarValor(int n){
    cout << "Valor N: " << n << endl;
}


void pasarVector(int vec[], int tam){
    cout << "pasarVector:&vec[0]: " << &vec[0] << endl;
    cout << "pasarVector:&vec: " << &vec << endl;
    cout << "pasarVector:vec: " << vec << endl;
    /// cout << "pasarVector:vec[0]: " << vec[0] << endl;
}
