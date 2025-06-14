#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double a, b, c, D, Pr, Pc, X1, X2;
	cout<<"Ingrese los coeficientes de la ecuacion cuadratica"<<endl;
	cin>>a>>b>>c;
	if(a!=0){
		D= ( pow(b, 2) - (4*a*c));
		if(D>=0){
			cout<<"Raices reales"<<endl;
			X1=(-(b)+sqrt(D))/(2*a);
			X2=(-(b)-sqrt(D))/(2*a);
			cout<<"Las raices reales que dan solucion a la ecuacion son: "<<endl;
			cout<<X1<<endl;
			cout<<X2<<endl;
		}else{
			cout<<"Raices complejas"<<endl;
			Pr=-b/(2*a);
			Pc= sqrt(-D)/(2*a);
			cout<<"Las raices complejas que dan solucion a la ecuacion son: "<<endl;
			cout<<Pr<<"+"<<Pc<<"i"<<endl;
			cout<<Pr<<"-"<<Pc<<"i"<<endl;
		}
	}else{
		cout<<"Error: Numero invalido"<<endl;
	}
	return 0;
}
