#include <iostream>
#include <iomanip>
using namespace std;


#include "funciones.h"

int main(){
    int vPuntos[6]{53,6,5,9,4};
    string vNombres[6]{
        "Brian",
        "Kloster",
        "Veronica",
        "Erika",
        "Tamara"
    };
    
    mostrarRanking(vPuntos, vNombres);
    vPuntos[5] = 2;
    vNombres[5] = "Emanuel";
    
    ordenarRanking(vPuntos, vNombres);
    
    
    
    mostrarRanking(vPuntos, vNombres);
    return 0;
}
