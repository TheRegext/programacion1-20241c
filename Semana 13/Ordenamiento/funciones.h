#pragma once

void mostrarRanking(int vecPuntos[], string vNombres[]);
void ordenarRanking(int vecPuntos[], string vNombres[]);

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
        cout << "#"<< i+1 << "  "<< setfill ('_') <<  setw(15) << left <<  vNombres[i] << " " << vecPuntos[i] << endl;
    }
}
