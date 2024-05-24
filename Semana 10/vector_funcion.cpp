///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

void cargarVector(int tam, int v[]){
    int i;
    for(i=0;i<tam;i++){
            cout<<"INGRESAR VALOR ";
            cin>>v[i];
        }
}

float calcularPromedio(int tam, int v[]){
   int i, suma=0;
   float prom;
   for(i=0;i<tam;i++){
            suma+=v[i];
    }
    prom=(float)suma/tam;
    return prom;
}

int compararValores(int tam, int v[], float valorComparacion){
    int i, mayores=0;
    for(i=0;i<tam;i++){
            if(v[i]>valorComparacion){
                mayores++;
            }
        }
    return mayores;
}

int main(){
    const int TAM=5;
    int vEdad[TAM];
    int mayoresAlPromedio=0;
    float promedio;
    ///- Ingresar las edades
    cout<<"INGRESAR LAS EDADES DE LOS ALUMNOS "<<endl;
    cargarVector(TAM, vEdad);
    ///- Calcular el promedio
    promedio=calcularPromedio(TAM, vEdad);
    ///Compara el promedio con las edades ingresadas
    mayoresAlPromedio=compararValores(TAM,vEdad,promedio);
    ///Informar el resultado
    cout<<"LA CANTIDAD DE ALUMNOS CON EDAD MAYOR AL PROMEDIO ES "<<mayoresAlPromedio;
	cout<<endl;
	system("pause");
	return 0;
}
