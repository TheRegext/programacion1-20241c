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
   
   switch(tipoLenguaje){
      case 'C':
      case 'c':
      case '1':
         cout << "C/C++"<<endl;
         costoLenguaje = 7500;
         break;
      case '#':
      case '@':
      case '2':
         cout << "C#"<<endl;
         costoLenguaje = 6100;
         break;
      case 'P':
      case 'p':
      case '3':
         cout << "Python"<<endl;
         costoLenguaje = 5400;
         break;
      case 'G':
      case 'g':
      case '4':
         cout << "GO"<<endl;
         costoLenguaje = 5000;
         break;
      default:
         costoLenguaje = 0;
         cout << "Lenguaje no valido :(" << endl;
   }
   
   
   costoTotal = costoLenguaje * horas;
   
   if(urgente){
      costoTotal = costoTotal * 2.2f;
   }
   
   /// Datos de salida
   cout << "El costo total es: $ " << costoTotal << endl;
   
	
	return 0;
}










