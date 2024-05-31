#include <iostream>

using namespace std;

int main()
{
    int numero;

    numero = 10;

    {
        int numero;
        for(int i=1; i <=10; i++)
        {
            for(int i=10; i <=15; i++)
            {
                int numero;
                numero ++;
               cout << i << endl;
            }
        }
    }


    cout << "Numero: " << numero << endl;

    return 0;
}
