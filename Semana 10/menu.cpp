#include <iostream>
using namespace std;

void menu();

int main(){
    menu();
    cout << "estoy en main"<<endl;
    return 0;
}

void menu(){
    int opcion;
    
    do{
        cout << "---------"<<endl;
        cout << "1- OPCION A" <<endl;
        cout << "2- OPCION A" <<endl;
        cout << "---------"<<endl;
        cout << "0- Salir" <<endl;
        cout << endl;
        cout << "Opcion: ";
        cin >> opcion;
        
        switch(opcion){
        
        case 0:
            cout << "chau!"<<endl;
            return;
            break;
        }
        
        
    }while(true);
}


