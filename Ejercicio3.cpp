#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double C1, C2, H;
	cout<<"Ingrese los valores de los catetos del triangulo rectangulo"<<endl;
	cin>>C1>>C2;
	if(C1>0){
		if(C2>0){
			H= sqrt(pow(C1, 2) + pow(C2, 2));
			cout<<"La hipotenusa del triangulo rectangulo es: "<<H<<endl;
		}else{
			cout<<"Error numero negativo detectado"<<endl;
		}
	}else{
		cout<<"Error: Numero negativo detectado"<<endl;
	}
	return 0;
}
