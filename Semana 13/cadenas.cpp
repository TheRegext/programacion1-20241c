///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>
# include<cstring>

using namespace std;

void cargarNombres(char mNombres[3][20]){
        int i;
        for(i=0;i<3;i++){
            cin>>mNombres[i];
        }

}

void mostrarNombres(char mNombres[][20]){
        int i;
        for(i=0;i<3;i++){
            cout<<mNombres[i]<<endl;
        }

}


/*
void mostrarNombres(char (*mNombres)[20]){
        int i;
        for(i=0;i<3;i++){
            cout<<mNombres[i]<<endl;
        }

}
*/

int main(){
    char nombre[20];
    char listaNombres[3][20];
    cargarNombres(listaNombres);
    mostrarNombres(listaNombres);
	cout<<endl;
	system("pause");
	return 0;
}


