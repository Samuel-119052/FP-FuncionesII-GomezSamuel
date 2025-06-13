#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	int Nm, Cn, Na;
	cout<<Ingrese hasta que numero se generara los numeros aleatorios<<endl;
	cin>>Nm;
	cout<<Ingre la cantidad de numeros aleatorios<<endl;
	cin>>Cn;
	if(Nm>=0){
		if(Cn>0){
			
		}else{
			cout<<Error: Numero invalido<<endl;
		}
	}else{
		cout<<Error: Numero negativo detectado<<endl;
	}
	
	return 0;
}
