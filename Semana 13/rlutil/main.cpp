#include <iostream>
#include <ctime>
using namespace std;

#include "rlutil.h"

int main()
{
    srand(time(0));
    char opcion;
    int cargando, i;
    rlutil::setBackgroundColor(rlutil::WHITE);
    rlutil::setColor(rlutil::BLACK);
    do
    {
        rlutil::setBackgroundColor(rlutil::RED);
        rlutil::setColor(rlutil::WHITE);
        rlutil::cls();
        cout << "---- MENU ----"<<endl;
        cout << "1 - Opcion #1 " << endl;
        cout << "2 - Efecto Mariano!! OJO!!! " << endl;
        cout << "3 - Efecto Mariano!! Rainbow!!! " << endl;
        cout << "4 - LOADING... " << endl;
        cout << "0 - Salir" << endl;
        cout << "-----------------------"<<endl;
        cout << "Opcion: ";
        opcion = rlutil::getkey();

        switch(opcion)
        {
        case '1':
            cout << "OPCION 1"<<endl;
            break;
        case '2':
            for(int i=1; i<10; i++)
            {
                if(i%2 == 0)
                {
                    rlutil::setBackgroundColor(rlutil::WHITE);
                }
                else
                {
                    rlutil::setBackgroundColor(rlutil::BLACK);
                }
                rlutil::cls();
            }
            break;
        case '3':
            for(int i=0; i<=30; i++)
            {
                rlutil::setBackgroundColor(i%16);
                rlutil::cls();
            }
            break;
        case '4':
            cargando = 0;
            i = 0;
            rlutil::cls();
            rlutil::hidecursor();
            do{
                cargando += rand() % 10;
                rlutil::setBackgroundColor(rlutil::RED);

                rlutil::locate(10, 10);
                if(i == 0){
                    cout << "CARGANDO    ";
                }
                else if(i == 1){
                    cout << "CARGANDO .  ";
                }
                else  if(i == 2){
                    cout << "CARGANDO .. ";
                }
                else if(i == 3){
                    cout << "CARGANDO ...";
                    i = -1;
                }
                cout << (cargando > 100 ? 100 : cargando) << "%";
                i++;
                rlutil::msleep(500);
                
                rlutil::locate(10, 11);
                rlutil::setBackgroundColor(rlutil::BLUE);
                for(int i=1; i<= cargando/5; i++){
                    cout << " ";
                }
                
            }while(cargando < 100);
            rlutil::setBackgroundColor(rlutil::RED);
            rlutil::locate(10, 10);
            cout << "CARGANDO ... 100%";
            rlutil::anykey();
            rlutil::showcursor();
            
            break;
        case '0':
            return 0;
            break;
        }

    }
    while(opcion != 0);






    return 0;
}
