#include <iostream>

using namespace std;

/**
    resultado real =  si uno de los operandos es con decimales o real
    resultado cociente = si ambos operandos son enteros
*/

int main(){
    int cantidadEdad, sumaEdad;
    
    float resultado;
    
    sumaEdad = 20;
    cantidadEdad = 3;
    
    /// static cast
    resultado = (float)sumaEdad / cantidadEdad;
    
    cout << "Promedio: " << resultado << endl;

    return 0;
}
