#include <iostream>
using namespace std;

/**
    hacer un programa donde se cargen la fabricacion de 5 tipos de piezas
    por cada registro se carga:
    tipo de pieza(1-5)
    cantidad
    el programa finaliza cuando se ingresa un tipo de pieza igual a cero;
    mostrar cuantas piezas se realizaron de cada tipo.
*/

int main(){
    int tipoPieza, cantidad;
    int vCantidad[5]{};
    
    cout << "Ingrese tipo de pieza: ";
    cin >> tipoPieza;
    while(tipoPieza != 0){
        cout << "Ingrese cantidad: ";
        cin >> cantidad;
        
        vCantidad[tipoPieza-1]+=cantidad;
        /*
        switch(tipoPieza){
            case 1:
                vCantidad[0]+=cantidad;
                break;
            case 2:
                vCantidad[1]+=cantidad;
                break;
            case 3:
                vCantidad[2]+=cantidad;
                break;
            case 4:
                vCantidad[3]+=cantidad;
                break;
            case 5:
                vCantidad[4]+=cantidad;
                break;
        }
        */
        cout << "Ingrese tipo de pieza: ";
        cin >> tipoPieza;    
    }
    
    cout << "La cantidad de piezas frabricadas son: " << endl;
    for(int i=0; i<5; i++){
        cout << "Tipo #" << i + 1 << ": " <<  vCantidad[i] << endl;;
    }
    return 0;
}
