#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double a, b, c, D, X1, X2;
	cout<<Ingrese los coeficientes de la ecuacion cuadratica<<endl;
	cin>>a>>b>>c;
	if(a!=0){
		D= ( pow(a, 2) - (4*a*c));
		if(D>=0){
			
		}else{
			cout<<Error: Numero negativo detectado<<endl;
		}
	}else{
		cout<<Error: Numero invalido<<endl;
	}
	return 0;
}
