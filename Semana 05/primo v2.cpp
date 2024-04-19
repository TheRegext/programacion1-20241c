#include <iostream>
using namespace std;

int main() {
   
   int cantDiv;
   int num = 5, div;
   cantDiv = 0;
   div = 2;
   
   cout << "Ingrese numero: ";
   cin >> num;

   while(div < num && cantDiv != 1){ /// cuantos divisores 
      if(num%div == 0){ /// si un numero es divisible por div
         cantDiv++;
      }
      div++;
   }
   
   if(cantDiv == 0 && num > 1 ){
      cout << num << " es primo."<< endl;
   }
   else{
      cout << num << " no es primo."<< endl;
   }
   
   
	
	return 0;
}

