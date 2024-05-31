#ifndef JUEGO_H_INCLUDED
#define JUEGO_H_INCLUDED
int jugar();
int lanzar();

int jugar(){
    int numero;
    int intentos = 0;

    while(true){
        intentos++;
        
        numero = lanzar();
        
        cout << "Numero elegido: " << numero << endl;
        
        if(numero == 10){
            cout << "Ganaste!" << endl;
            system("pause");
            return intentos;
        }
    
        system("pause");
    }
}

int lanzar(){
    return  rand() % 10 + 1;
}


#endif // JUEGO_H_INCLUDED
