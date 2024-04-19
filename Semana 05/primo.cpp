#include <iostream>
using namespace std;

int main() {
   
   int cantDiv;
   int num = 5;
   cantDiv = 0;

   for(int i=1; i<=num; i++){ /// cuantos divisores 
      if(num%i == 0){ /// si un numero es divisible por i
         cantDiv++;
      }
   }
   
   if(cantDiv == 2){
      cout << num << " es primo."<< endl;
   }
   else{
      cout << num << " no es primo."<< endl;
   }
   
   
	
	return 0;
}

