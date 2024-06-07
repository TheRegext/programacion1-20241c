///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;

void ordenarVector(int v[], int tam ){
    int i,j, posmin, aux;
    for(i=0;i<tam-1;i++){
        posmin=i;
        for(j=i+1;j<tam;j++){
            if(v[j]<v[posmin]) posmin=j;
        }
        aux=v[i];
        v[i]=v[posmin];
        v[posmin]=aux;
    }
}

void modificarValor(int *a){
    *a=10;
}

void cargarParteDelVector(int v[], int tam){
    v[0]=8;
    v[1]=15;
    v[2]=4;
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
int main(){
    int x=13, *puntero;
    cout<<"LLAMADA A modificarValor(&x)"<<endl;
    modificarValor(&x);
    cout<<x<<endl<<endl;

	cout<<endl;
	system("pause");
	return 0;
}
