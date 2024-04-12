#include <iostream>
using namespace std;

/**
   Hacer un programa que pida una lista de 10 numeros 
   y calcule el promedio de todos los numeros enteros.

*/

/***
   Contadores:
      - Inicializan con un valor, generalemnte cero
      - Tienen un valor de incremento/decrementar fijo (generalmente en 1 en 1)
      - Generalmente estas ligadas a un condicion 

      operaciones tipicas:
         contador = contador + 1
         contador += 1
         contador ++

   
   Acumuladores:
      - Inicializan con un valor, generalemnte cero
      - El valor de incremento/decrementar es variable
      - Generalmente estas ligadas a un condicion 

      operaciones tipicas:
         contador = contador + N
         contador += N
*/

int main() {
   /// for (init, condi, incre){}
   /**
      ++ =>  inicial mas chico, final es el mas grande y se utiliza < o <= 
      -- =>  inicial mas grande, final es el mas chico y se utiliza > o >= 
   
      1 -> <=
      0 -> <
   */
   /// CONSTANTES 
   const int CANTIDAD_NUMEROS = 3.0f;
   
   /// VARIABLES
   int numero, sumaTodos=0;
   
   
   for(int i=1; i<=CANTIDAD_NUMEROS ; i++ ){
      
      cout << "Ingrese el #"<<i<<" numero : ";
      cin >> numero;
      
      //sumaTodos = sumaTodos + numero;
      sumaTodos += numero;
      
   }
      
   cout << "Promedio: " << ((float)sumaTodos/CANTIDAD_NUMEROS) << endl;
   ///cout << "Promedio: " << (1.0f*sumaTodos/CANTIDAD_NUMEROS) << endl;
	
	return 0;
}

