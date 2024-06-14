#include <iostream>
using namespace std;

void mostrarRanking(int vecPuntos[], string vNombres[]);
void ordenarRanking(int vecPuntos[], string vNombres[]);

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

void ordenarRanking(int vecPuntos[], string vNombres[]){
    for(int i=0; i<5; i++){
        int seleccionado = i;
        for(int j=i+1; j<6; j++){
            if(vecPuntos[j] > vecPuntos[seleccionado]){
                seleccionado = j;
            }
        } 
    
        int puntosAux = vecPuntos[seleccionado];
        vecPuntos[seleccionado] = vecPuntos[i];
        vecPuntos[i] = puntosAux;
        
        string nombreAux = vNombres[seleccionado];
        vNombres[seleccionado] = vNombres[i];
        vNombres[i] = nombreAux;
    }
}

void mostrarRanking(int vecPuntos[], string vNombres[]){
    cout << "---- RANKING" << endl;
    for(int i=0; i<5;i++){
        cout << "#"<< i+1 << " - " << vNombres[i] << " - " << vecPuntos[i] << endl;
    }
}
