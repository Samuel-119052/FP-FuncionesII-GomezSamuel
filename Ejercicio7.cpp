#include<iostream>
#include<cstdlib>
using namespace std;
void Ganadorderonda(int Nj1, int Nj2, int Pj1, int Pj2){
	if(Nj1==Nj2){
		cout<<Es un empate<<endl;
	}else if(Nj1>Nj2){
		cout<<El jugador 1 gano la ronda<<endl;
		Pj1++;
	}else{
		cout<<El jugador 2 gano la ronda<<endl;
		Pj2++;
	}
}
int main(){
	int Dj1, Dj2, Pj1=0, Pj2=0, F;
	F=0;
	cout<<Iniciando juego de dados por turnos<<endl;
	while(F==0){
		Dj1= rand()%6+1;
		Dj2= rand()%6+1;
		cout<<Numero del dado lanzado por el jugador 1 es: <<endl;
		cout<<Dj1<<endl;
		cout<<Numero del dado lanzado por el jugador 2 es: <<endl;
		cout<<Dj2<<endl;
		Ganadorderonda(Dj1, Dj2, Pj1, Pj2);
	}
	return 0;
}
