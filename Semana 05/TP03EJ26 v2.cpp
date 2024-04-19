#include <iostream>
using namespace std;

int main() {
   
   int cantDiv, cantPrimos;
   cantPrimos = 0;
   for(int num=1; num <= 10000; num++){ /// el for de los numeros
   
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

