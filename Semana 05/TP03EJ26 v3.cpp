#include <iostream>
using namespace std;

/***
   dado un intervalo numerico que se ingresa por teclado, informar
   la cantida de primos que hay.

   NOTA: Se ingresa primero el valor inicial del intervalo 
      y por ultimo el valor final
*/

int main() {
   
   int cantDiv, cantPrimos, inicio, fin;
   cantPrimos = 0;
   
   cout << "Ingrese el valor inicial: ";
   cin >> inicio;
   
   cout << "Ingrese el valor final: ";
   cin >> fin;
   
   
   for(int num=inicio; num <= fin; num++){ /// el for de los numeros
   
      cantDiv = 0;
      for(int i=1; i<=num; i++){ /// cuantos divisores 
         if(num%i == 0){ /// si un numero es divisible por i
            cantDiv++;
         }
      }
      
      if(cantDiv == 2){ /// verifica si el numero es primo
         // cout << num << endl;
         cantPrimos++;
      }
   }
   
   cout << "La cantidad de primos es: " << cantPrimos << endl;
   
	
	return 0;
}

