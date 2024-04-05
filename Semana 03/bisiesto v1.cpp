#include <iostream>
using namespace std;

/**
   - Bisiesto
   - Si es multiplo de 400 
   - Si es mulplo de 4 pero no de 100 


   DE:
      Anio
   DS:
      "Es bisiesto"    - Anio % 400 == 0
      "Es bisiesto"    - Anio % 4 == 0 y Anio % 100 != 0

      "No es bisiesto" - todo lo demas xD

*/

int main() {
   int anio;
   
   cout << "Ingrese anio: ";
   cin >> anio;
   
   if(anio % 400 == 0){
      cout << "Es bisiesto" << endl;
   }
   else {
      if(anio % 4 == 0){
         if(anio % 100 != 0){
            cout << "Es bisiesto" << endl;
         }
         else{
            cout << "No es bisiesto" << endl;
         }
      }
      else{
         cout << "No es bisiesto" << endl;
      }
   }
	
	return 0;
}












