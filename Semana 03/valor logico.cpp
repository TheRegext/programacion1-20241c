#include <iostream>
using namespace std;

/***
   && - *
   || - +

   1 + 0  => 1
   V || F => V
   1 + 1  => 2 => 1
   V || V => V
   
    1 + 0 * 1 * 1 => 1 + 0 => 1 V
   V || F && V && V => 

*/

int main() {
   
   /// valor logico (verdadero - 1 o falso - 0)
   bool valor = 5;

   
   
   cout << valor << endl;
   
   cout << (5 == 1) << endl;
   
	
	return 0;
}

