#include <iostream>
using namespace std;

/***
   Hacer un programa que dado un numero 
   calcule su factorial


*/

int main() {
   
   int opcion ;
   cout << "----------------"<<endl;
   cout << "Menu"<<endl;
   cout << "----------------"<<endl;
   cout << "1- Sumar" << endl;
   cout << "2- Resta" << endl;
   cout << "3- Division" << endl;
   cout << "----------------"<<endl;
   
   cout << "Ingrese opcion: ";
   cin >> opcion;
   
   switch(opcion){
   case 1: 
      cout << "REALIZA UNA SUMA" << endl;
      break;
   case 2: 
      cout << "REALIZA UNA RESTA" << endl;
      break;
   }
   
      
	return 0;
}

