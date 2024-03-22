#include <iostream>

using namespace std;

// Esto es un solo comentario

/**
    camelCase -- variables, functiones
    PascalCase -- clases
    snake_case -- variables, funciones
    UPPERCASE -- Constantes
    SNAKE_UPPERCASE -- Constantes
    lowercase -- variables
    kebab-case -- NO SE USA EN C++
*/

int main(){
    /// Declaramos las variables
    int n2, n1, resultadoSuma;
    
    /// Pedimos los datos       
    cout << "Ingrese un numero entero: ";
    cin >> n1;
    
    cout << "Ingrese un numero entero: ";
    cin >> n2;
    
    /// Realizamos la suma
    resultadoSuma = n1 + n2;
    
    /// Mostramos el resultado
    cout << n1 << " + " << n2 << " = " << resultadoSuma << endl;
    
    return 0;
}
