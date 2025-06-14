#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	int F, Pu=0, Pc=0, Ju, Jc;
	F=0;
	while(F==0){
		cout<<"!Piedra, papel o tijeras"<<endl;
		cout<<"1. Piedra"<<endl;
		cout<<"2. Papel"<<endl;
		cout<<"3. Tijeras"<<endl;
		cout<<"Elija una opcion"<<endl;
		cin>>Ju;
		if(Ju>=1){
			if(Ju<=3){
				Jc= rand() % 3 + 1;
				cout<<"Tu jugada: "<<endl;
				if(Ju==1){
					cout<<"Piedra"<<endl;
				}else if(Ju==2){
					cout<<"Papel"<<endl;
				}else{
					cout<<"Tijeras"<<endl;
				}
				cout<<"Jugada de la computadora: "<<endl;
				if(Jc==1){
					cout<<"Piedra"<<endl;
				}else if(Jc==2){
					cout<<"Papel"<<endl;
				}else{
					cout<<"Tijeras"<<endl;
				}
				if(Ju==Jc){
					cout<<"Es un empate"<<endl;
				}else if(Ju==1){
					if(Jc==3){
						cout<<"Ganaste la ronda"<<endl;
						Pu++;
					}else{
						cout<<"La computadora gana la ronda"<<endl;
						Pc++;
					}
				}else if(Ju==2){
					if(Jc==1){
						cout<<"Ganaste la ronda"<<endl;
						Pu++;
					}else{
						cout<<"La computadora gana la ronda"<<endl;
						Pc++;
					}
				}else if(Ju==3){
					if(Jc==2){
						cout<<"Ganaste la ronda"<<endl;
						Pu++;
					}else{
						cout<<"La computadora gana la ronda"<<endl;
						Pc++;
					}
				}
				if(Pu==3){
					F=1;
				}else if(Pc==3){
					F=1;
				}else{
					F=0;
				}
				cout<<"Usuarios - Computadora"<<endl;
				cout<<Pu<<" - "<<Pc<<endl;
			}else{
				cout<<"Numero invalido, intente denuevo"<<endl;
			}
		}else{
			cout<<"Numero invalido, intente denuevo"<<endl;
		}
	}
	if(Pu==3){
		cout<<"Felicidades usted gano el juego"<<endl;
	}else{
		cout<<"La computadora gano el juego"<<endl;
	}
	return 0;
}
