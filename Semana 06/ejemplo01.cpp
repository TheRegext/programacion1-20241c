/***
GUIA04 - 22
    Hacer un programa que permita ingresar una lista de números enteros positivos, negativos o cero
    hasta que se ingrese el 5º número par.
    Calcular e informar:
    La cantidad de ternas de números negativos ingresados de manera consecutiva.

    Ejemplo A: 4, -1, -4, -5, 10, -3, -5, 7, -5, -3, -6, 10 → Cantidad de ternas: 2
*/



// -5 -6 -8 -7

#include <iostream>

using namespace std;
/***
/// ignora el ultimo dato
    cin>>n;
    while(n!=0){
            ...
        cin>>n;
    }

    ///procesa el ultimo dato
    do{
        cin>>n;
        ...
    }while(n!=0);

    n=1; /// fuerza la primer repeticion
    while(n!=0){
        cin>>n;
        ...
    }
*/

int main()
{
    int numero, cantPares, cantNegativos, cantTernas;
    
    cantPares = cantNegativos = cantTernas = 0;

    do
    {
        cout << "ni�o"<<endl;
        cout << "Ingrese numero: ";
        cin>>numero;

        if(numero % 2 == 0)
        {
            cantPares++;
        }

        if(numero < 0)
        {
            cantNegativos++;
            if(cantNegativos >= 3)
            {
                cantTernas++;
            }
        }
        else
        {
            cantNegativos = 0;
        }

    }
    while(cantPares != 5);
    cout << "La cantidad de ternas son: " << cantTernas << endl;
    return 0;
}
