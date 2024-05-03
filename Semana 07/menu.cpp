#include <iostream>
using namespace std;

int main()
{
    int opcion;
    float metros=0;
    do
    {
        system("cls");
        cout << "Men£ principal     METROS: "<< metros <<endl;
        cout << "-----------------------------    "<<endl;
        cout << "1 - Ingresar medida en metros    "<<endl;
        cout << "2 - Convertir a cent¡metros      "<<endl;
        cout << "3 - Convertir a kil¢metros       "<<endl;
        cout << "4 - Convertir a pulgadas         "<<endl;
        cout << "5 - Convertir a pies             "<<endl;
        cout << "-----------------------------    "<<endl;
        cout << "0 - Salir del programa           "<<endl;
        cout << "Ingrese opci¢n:                  "<<endl;
        
        cin >> opcion;
        
        switch(opcion){
        case 1:
            cout << "Ingresar medida en metro: ";
            cin >> metros;
            break;
        case 2:
            cout << metros << " m son "<< (metros * 100) << " cm" << endl;
            cout << "presione cualquier tecla para continuar...";
            system("pause>nul");
            break;
        case 3:
            cout << metros << " m son "<< (metros / 1000) << " km" << endl;
            cout << "presione cualquier tecla para continuar...";
            system("pause>nul");
            break;
        case 4:
            cout << metros << " m son "<< (metros * 39.3701) << " pulgadas" << endl;
            cout << "presione cualquier tecla para continuar...";
            system("pause>nul");
            break;
        case 5:
            cout << metros << " m son "<< (metros * 3.2808) << " pies" << endl;
            cout << "presione cualquier tecla para continuar...";
            system("pause>nul");
            break;
        case 0:
            system("cls");
            cout << "****************************************************"<<endl;
            cout << " Gracias por utilizar mi App, pagame un cafecito :) "<< endl;
            cout << "****************************************************"<<endl;
            system("pause>nul");
            break;
        }
    }
    while(opcion != 0);

    return 0;
}
