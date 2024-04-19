///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int i, num, primerImpar, ultimoImpar, segundoImpar, anteUltimoImpar;
    int cuentaImpares=0;
    while(cuentaImpares<4){

        cout<<"NUMERO ";
        cin>>num;
        if(num%2!=0){
            ///pasan solo los impares
            cuentaImpares++;
            if(cuentaImpares==1){
                primerImpar=num;
            }
            if(cuentaImpares==2){
                    segundoImpar=num;
            }
            anteUltimoImpar=ultimoImpar;
            ultimoImpar=num;
        }
    }
	cout<<endl;
	cout<<"EL PRIMER IMPAR ES "<<primerImpar<<endl;
    cout<<"EL SEGUNDO IMPAR ES "<<segundoImpar<<endl;
    cout<<"EL ANTEULTIMO IMPAR ES "<<anteUltimoImpar<<endl;
    cout<<"EL ULTIMO IMPAR ES "<<ultimoImpar<<endl;
	system("pause");
	return 0;
}
