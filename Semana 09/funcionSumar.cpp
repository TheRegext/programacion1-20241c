///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;
///Hacer una función que reciba dos números enteros y calcule y devuelva la suma de ambos

///Hacer una función que reciba dos números enteros y calcule y muestre la suma de ambos

///SON DOS ENUNCIADOS DISTINTOS!!!!!!!

///PROTOTIPO

int sumar(int n1, int n2);

int main(){
    int num1, num2, resultado;
    cout<<"INGRESE UN NUMERO ";
    cin>>num1;
    cout<<"INGRESE UN NUMERO ";
    cin>>num2;
    resultado=sumar(num1, num2);

    cout<<"LA SUMA ES "<<resultado;
	cout<<endl;
	system("pause");
	return 0;
}


int sumar(int n1, int n2){
    int suma;
    suma=n1+n2;
    return suma;
}
