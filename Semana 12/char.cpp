#include <iostream>
using namespace std;
void dibujarLinea(int tam=120);

int main(){
    
    // cout << (int)'A' << endl;
    string nombre;
    
    cout << "MENU PRINCIPAL" << endl;
    dibujarLinea();
    
    cin >> nombre;
    cout << nombre;
    
    
   
    
    /*
    for(int i = 'A'; i<='Z'; i++){
        cout << i << endl;
    }
    
    for(char i = 65; i<=90; i++){
        cout << i << endl;
    }
    */
    return 0;
}

void dibujarLinea(int tam){

    for(int i=1; i<=tam; i++){
        cout << (char)196;
    }
    
    cout << endl;
}
