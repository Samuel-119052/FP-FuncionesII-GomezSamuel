#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double r, Ac;
	cout<<"Ingrese el radio del circulo"<<endl;
	cin>>r;
	if(r>=0){
		Ac= M_PI * pow(r, 2);
		cout<<"El area del circulo es: "<<Ac<<endl;
	}else{
		cout<<"Error numero negativo detectado"<<endl;
	}
	return 0;
}
