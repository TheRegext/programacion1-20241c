#include <iostream>
using namespace std;

/*
   Se ingresa un numero y el programa debe mostrar si dicho numero es 
   positivo, negativo o cero

   Operadores de relacion:
   >    Mayor que
   >=   Mayor igual que
   <    Menor que
   <=   Menor igual que
   !=   Distinto que
   ==   Igual que

   DE:
      N
   DS:
      Positivo -- N > 0
      Negativo -- N < 0
      Cero     -- N == 0
   Op:

*/

// Una linea comentada

int main() {
	int numero;
   
   cout << "Ingrese un numero: ";
   cin >> numero;
   
   if(numero > 0){ /// es verdadero
      cout << "Positivo" << endl;
   }
   else{ /// es falso
      if(numero < 0){
         cout << "Negativo" << endl;   
      }
      else{
         cout << "Cero" << endl;   
      }
   }

	return 0;
}

