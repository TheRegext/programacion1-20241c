///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;


int main(){
    const int TAM=5;
    int i, edad, vEdad[TAM]; ///mEdades[][]-> matrices    triple[6][10][5]
    int suma=0, mayoresAlPromedio=0;
    float promedio;
    ///- Ingresar las edades
    ///hacer una función de nombre cargarVector()
    for(i=0;i<TAM;i++){
        cout<<"INGRESAR LA EDAD ";
        cin>>vEdad[i];
    }
    ///hacer una función de nombre calcularPromedio()
    ///- Calcular el promedio
	///sumar todas las edades y dividir por la cantidad de alumnos (20)
    for(i=0;i<TAM;i++){
            suma+=vEdad[i];
    }
    promedio=(float)suma/TAM;
    ///- Comparar cada edad con el promedio obtenido
    ///Hacer una función de nombre compararValores()
    for(i=0;i<TAM;i++){
        if(vEdad[i]>promedio){
            mayoresAlPromedio++;
        }
    }
    ///Informar el resultado
    cout<<"LA CANTIDAD DE ALUMNOS CON EDAD MAYOR AL PROMEDIO ES "<<mayoresAlPromedio;
	cout<<endl;
	system("pause");
	return 0;
}
