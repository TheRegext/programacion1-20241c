#include <iostream>
using namespace std;

int main() {
   
   int cantDiv;
   
   for(int num=1; num <= 10000; num++){ /// el for de los numeros
   
      cantDiv = 0;
      for(int i=1; i<=num; i++){ /// cuantos divisores 
         if(num%i == 0){ /// si un numero es divisible por i
            cantDiv++;
         }
      }
      
      if(cantDiv == 2){
         cout << num << endl;
      }
      
      
   }
   
   
	
	return 0;
}

