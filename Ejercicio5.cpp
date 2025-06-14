#include<iostream>
#include<cmath>
using namespace std;
void CalcularRaices(double a, double b, double c, double &X1, double &X2, bool &Sr){
	double D;
	D = pow(b, 2) - (4*a*c);
	if(D>=0){
		X1= (-b + sqrt(D))/(2*a);
		X2= (-b - sqrt(D))/(2*a);
		Sr=true;
	}else{
		X1=-b/(2*a);
		X2= sqrt(-D)/(2*a);
		Sr=false;
	}
}
int main(){
	double a, b, c, X1, X2;
	bool R;
	cout<<"Ingrese los coeficientes de la ecuacion cuadratica"<<endl;
	cin>>a>>b>>c;
	CalcularRaices(a, b, c, X1, X2, R);
	if(R==true){
		cout<<"Las raices reales quedan soluciona la ecuacion son: "<<endl;
		cout<<X1<<" y "<<X2<<endl;
	}else{
		cout<<"La raices complejas que dan solucion a la ecuacion son: "<<endl;
		cout<<X1<<" + "<<X2<<"i"<<endl;
		cout<<X1<<" - "<<X2<<"i"<<endl;
	}
	return 0;
}
