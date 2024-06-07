///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


void cargarParteDelVector(int *v, int tam){
    *v=8;
    *(v+1)=15;
    *(v+2)=4;
}

void mostrarVector(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
        cout<<v[i]<<"\t";
    }
    cout<<endl;

}
///&->operador de dirección
///*-> operador de indirección
///puntero: variable que contiene una dirección de memoria de un tipo definido
///El nombre del vector es un puntero constante que contiene la dirección del
/// elemento 0 del vector
int main(){
    int vec[5]={0};
    cout<<vec<<"\t"<<&vec[0];
	cout<<endl;
	cargarParteDelVector(vec, 5);
	mostrarVector(vec,5);
	system("pause");
	return 0;
}
