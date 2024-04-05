#include <iostream>
using namespace std;

/***

   DE: 
      tipoLenguaje, horas, urgente

   DS: 
      CostoTotal

   Op:
      CostoTotal = horas * costoLenguaje

      CostoTotal = CostoTotal * 2.2 => urgente == true

      costoLenguaje = 7500 => tipoLenguaje == 'C'
      costoLenguaje = 6100 => tipoLenguaje == '#'
      costoLenguaje = 5400 => tipoLenguaje == 'P'
      costoLenguaje = 5000 => tipoLenguaje == 'G'

*/

int main() {
   /// declaraciones de variables 
   char tipoLenguaje;
   int horas;
   bool urgente;
   float costoTotal, costoLenguaje;
   
   /// Ingresos de datos
   cout << "Ingrese tipo lenguaje: ";
   cin >> tipoLenguaje;
   
   cout << "Ingrese horas: ";
   cin >> horas;
   
   cout << "Es urgente? (1- Si, 0- No): ";
   cin >> urgente;
   
   /// Operaciones
   
   if(tipoLenguaje == 'C'){
      costoLenguaje = 7500;
   }
   else if(tipoLenguaje == '#'){
      costoLenguaje = 6100;
   }
   else if(tipoLenguaje == 'P'){
      costoLenguaje = 5400;
   }
   else{
      costoLenguaje = 5000;
   }
   
   costoTotal = costoLenguaje * horas;
   
   if(urgente){
      costoTotal = costoTotal * 2.2f;
   }
   
   /// Datos de salida
   cout << "El costo total es: $ " << costoTotal << endl;
   
	
	return 0;
}










