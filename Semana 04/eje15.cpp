#include <iostream>
using namespace std;
/**
   Hacer un programa que dada una lista de 10 numeros
   y muestre si dicha lista esta ordenada de forma creciente

   1 2 5 9 8 10 15
*/

int main() {
   
   float numero, anterior;
   bool estaOrdenada = true;

   for(int i=1; i<=10; i++){
      cout << "Ingrese numero: ";
      cin >> numero;
      
      /// para ignorar el primero
      if(i > 1){
         /// identifico si se rompe el patron
         if(numero <= anterior ){
            estaOrdenada = false;
         }   
      }
      
      anterior = numero;
   }
   
   /**
   switch(estaOrdenada){
   case true:
      cout << "La lista se encuentra ordenada :)" << endl;
      break;
   case false:
      cout << "La lista se encuentra desordenada :(" << endl;
      break;
   }
   */
   if(estaOrdenada){
      cout << "La lista se encuentra ordenada :)" << endl;
   }
   else{
      cout << "La lista se encuentra desordenada :(" << endl;
   }
	
	return 0;
}

