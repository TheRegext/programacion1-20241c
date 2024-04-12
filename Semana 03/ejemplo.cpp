#include <iostream>
using namespace std;

int main() {
   volatile const int k = 10;
   
   k = 100;
   
   cout << "Hola Mundo" << endl;
	
	return 0;
}

