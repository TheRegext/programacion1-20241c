#include <iostream>
using namespace std;

/**
   Hacer un programa que dada una lista de 10 numeros
   muestre la cantidad triadas de pares que se ingresaron

   1,3,5, 2,4,6 ,2,6,9, 10
*/


int main() {
   int numero;
   int cantidadPares = 0;
   int cantidadTria = 0;
   /// ingresar los 10 numeros
   for(int i=1; i<=10; i++){
      cout << "Ingrese numero: ";
      cin >> numero;
      
      /// identifico si mi numero es par
      if(numero %2 == 0){
         cantidadPares++;
         /// Si hay triada
         if(cantidadPares == 3){
            /// contar las triadas
            cantidadTria++;
            cantidadPares=0;
         }
      }
      else{
         cantidadPares = 0;
      }
   }
   ///mostrar la cantidad
   cout << "La cantidad de triadas son: " << cantidadTria << endl;
	
	return 0;
}

