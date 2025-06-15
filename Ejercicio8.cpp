#include<iostream>
#include<iostream>
using namespace std;
int M=100;
void Numerosall(int &n1, int &n2, int &n3){
	n1= rand()%5+1;
	n2= rand()%5+1;
	n3= rand()%5+1;
	cout<<"| "<<n1<<" || "<<n2<<" || "<<n3<<" |"<<endl;
}
int Ganancia(int a, int b, int c, int A){
	int Pr=0, I=0, max, min, med, P=0, Pe;
	if(a==b){
		if(b==c){
			P=1;
		}
	}
	if(a==b){
		I=1;
	}
	if(b==c){
		I=1;
	}
	if(a==c){
		I=1;
	}
	max=a;
	min=a;
	if(b>max){
		max=b;
	}
	if(c>max){
		max=c;
	}
	if(b<min){
		min=b;
	}
	if(c<min){
		min=c;
	}
	med=a+b+c-max-min;
	if(max-med==1){
		if(med-min==1){
			Pe=1;
		}
	}
	if(P==1){
        Pr = A*10;
    }else if(I==1){
    	Pr = A*2;
	}else if(Pe==1){
		Pr = A*5;
	}else{
		Pr = -A;
	}
	return Pr;
}
int main(){
	int A, n1, n2, n3, P, F;
	while(F==0){
		if(M>0){
			cout<<"Su cantidad de monedas es: "<<M<<endl;
			cout<<"1 - 10. Monedas a apostar"<<endl;
			cout<<"Digite cualquier numero menos del 1 al 10, para salir"<<endl;
			cin>>A;
			if(A>=1){
				if(A<=10){
					Numerosall(n1, n2, n3);
					P= Ganancia(n1,n2,n3,A);
					M=M+P;
					if(P>0){
						cout<<"Ganaste "<<P<<" monedas"<<endl;
					}else{
						cout<<"Perdiste "<<A<<" monedas"<<endl;
					}
				}else{
					cout<<"Saliendo...."<<endl;
					F=1;
				}
			}else{
				cout<<"Saliendo...."<<endl;
				F=1;
			}
		}else{
			cout<<"Se quedo sin monedas"<<endl;
			F=1;
		}
	}
	cout<<"La cantidad de monedas que tienes: "<<M<<" ,gracias por jugar"<<endl;
	return 0;
}