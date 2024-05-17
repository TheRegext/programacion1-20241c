#include <iostream>
using namespace std;

/***
   hacer una funcion llamada formatoNumero que reciva un numero y lo devulva
   un texto en formato 0000, en caso de que no se pueda debe devolver ####

   Ejemplo:
      formatoNumero(120) -> 0120
      formatoNumero(35) -> 0035
      formatoNumero(4000) -> 4000
      formatoNumero(50000) -> ####
*/

/**
   Modificacion: 
   
   formatoNumero(15, 3) -> 015
*/

string formatoNumero(int num);
int main() {
	
   cout << formatoNumero(5) << endl;
   cout << formatoNumero(35) << endl;
   cout << formatoNumero(400) << endl;
   cout << formatoNumero(5012) << endl;
   cout << formatoNumero(75630) << endl;
   
	return 0;
}


string formatoNumero(int num){
   if(num < 10){
      return "000" + to_string(num); // <-- aca termina la funcion
   }
   else if(num < 100){
      return "00" + to_string(num); // <-- aca termina la funcion
   }
   else if(num < 1000){
      return "0" + to_string(num); // <-- aca termina la funcion
   }
   else if(num < 10000){
      return to_string(num); // <-- aca termina la funcion
   }
   
   return "####";
}
