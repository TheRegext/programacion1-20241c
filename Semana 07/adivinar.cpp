#include <iostream>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));// se llama una sola vez
        
   
    int numeroPensado = (rand() % 100) + 1;
    int numeroUsuaro;
    int intento = 0;
    
    do{
        intento ++;
    
        cout << "Intento #"<< intento << ": ";
        cin >> numeroUsuaro;
        
        if(numeroUsuaro > (numeroPensado - 10) && numeroUsuaro < (numeroPensado + 10) ){
            cout << "caliente..." << endl;
        }
        
        
    }while(numeroUsuaro != numeroPensado && intento < 10 );
    
    if(numeroPensado == numeroUsuaro){
        cout << "Adivinaste, inv¡tame un caf‚!" << endl;
    }
    else{
        cout << "Perdiste, inv¡tame un caf‚!" << endl;
    }
    
    
    return 0;
}
