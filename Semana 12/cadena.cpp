///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;

void mostrarCadena(char * cad){
    int pos=0;
    while(cad[pos]!='\0'){
        cout<<cad[pos];
        pos++;
    }
    cout<<endl;
}

int main(){
    int vec[5];
    char palabra[10], nombre[10];
    if(palabra==nombre){

    }
    else{
        cout<<"falso siempre"<<endl;
    }
    //cin>>vec[0];
    gets(palabra);
    //cout<<vec<<edl;

    mostrarCadena(palabra);
    cout<<palabra;
	cout<<endl;
	system("pause");
	return 0;
}
