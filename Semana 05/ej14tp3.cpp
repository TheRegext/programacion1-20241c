///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int i, num, primerImpar=2, ultimoImpar=2, segundoImpar=2, anteUltimoImpar=2;
    int cuentaImpares=0;
    for(i=1;i<=7;i++){
        ///se repite 7 veces
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
	if(primerImpar!=2) cout<<"EL PRIMER IMPAR ES "<<primerImpar<<endl;
	if(segundoImpar!=2) cout<<"EL SEGUNDO IMPAR ES "<<segundoImpar<<endl;
	if(anteUltimoImpar!=2) cout<<"EL ANTEULTIMO IMPAR ES "<<anteUltimoImpar<<endl;
	if(ultimoImpar!=2) cout<<"EL ULTIMO IMPAR ES "<<ultimoImpar<<endl;
	system("pause");
	return 0;
}
