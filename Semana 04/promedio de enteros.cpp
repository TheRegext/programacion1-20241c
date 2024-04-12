#include <iostream>
using namespace std;

/**
   Hacer un programa que pida una lista de 10 numeros  
   y calcule el promedio de todos los numeros enteros.

*/

/**
   10.5 == (int)10.5 ==> 10.5 == 10 ==> F
   7.0 == (int)7.0 ==> 7.0 == 7 ==> V
*/

int main() {
   /// CONSTANTES 
   const int CANTIDAD_NUMEROS = 3.0f;
   
   /// VARIABLES
   int sumaTodos=0, cantidad = 0;
   float numero;
   
   /// es para pedir los 10 numeros
   for(int i=1; i<=CANTIDAD_NUMEROS ; i++ ){
      
      cout << "Ingrese el #"<<i<<" numero : ";
      cin >> numero;
      
      /// identifico si el numero es entero
      if(numero == (int)numero)
      {
         /// sumo y cuento
         sumaTodos += numero;
         cantidad++;
      }
   }
   /// calculo promedio
   cout << "Promedio: " << ((float)sumaTodos/cantidad) << endl;
	
	return 0;
}

