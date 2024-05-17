#include <iostream>
using namespace std;

/**
   Hace un programa que solicite 10 legajos (0001, 9999) y muestre:
      - cantidad de legajos pares.
      - el mayor legajo.
*/

/**
   hacer una funcion llamada formatoNumero que reciva un numero y lo devulva
   un texto en formato 0000, en caso de que no se pueda debe devolver ####

   Ejemplo:
      formatoNumero(120) -> 0120
      formatoNumero(35) -> 0035
      formatoNumero(4000) -> 4000
      formatoNumero(50000) -> ####

*/

string formatoNumero(int num);
void mostrarEncabezado(int num);
bool esDivisible(int dividendo, int divisor);
bool esPar(int numero);

int main() {
   int legajo, mayorLegajo, cantPares;
   mayorLegajo = 0;
   cantPares = 0;
   
   for(int i=1;i<=10; i++){
      mostrarEncabezado(i);
      cout << "Ingrese legajo: ";
      cin>>legajo;
      
      if(legajo > mayorLegajo){
         mayorLegajo = legajo;
      }
      
      if(esPar(legajo)){
         cantPares++;
      }
   }
   
   cout << "El mayor legajo es: " << formatoNumero(mayorLegajo) << endl;
   cout << "La cantidad de pares son: " << cantPares << endl;
   
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
   
void mostrarEncabezado(int num){
   cout << "**** # " << formatoNumero(num) << " # ****" << endl; 
}
   
 
bool esDivisible(int dividendo, int divisor){
   if(dividendo % divisor == 0){
      return true;
   }
   else{
      return false;
   }
}

bool esPar(int numero){
   return esDivisible(numero, 2);
}
   

