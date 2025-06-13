#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	int Nm, Cn, Na;
	cout<<"Ingrese el numero maximo de la serie de numeros aleatorios"<<endl;
	cin>>Nm;
	cout<<"Ingrese la cantidad de numeros aleatorios"<<endl;
	cin>>Cn;
	if(Nm>=0){
		if(Cn>0){
			for(int i=1; i<=Cn; i++){
				Na= rand() % Nm +1;
				cout<<Na<<endl;
			}
		}else{
			cout<<"Error: Numero invalido"<<endl;
		}
	}else{
		cout<<"Error: Numero negativo detectado"<<endl;
	}
	return 0;
}
