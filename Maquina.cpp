/*
 * Maquina.cpp
 */

#include "Maquina.h"

Maquina::Maquina() {
	// TODO Auto-generated constructor stub

}

int Maquina::getnCPU(){
	int nl=0;
	for(list<Reserva>::iterator i=r.begin();i!=r.end();i++){
		nl=nl+(i->getrCPU());
	}
	return nl;
}
int Maquina::getnReservas(){
	int nl=0;
	for(list<Reserva>::iterator i=r.begin();i!=r.end();i++){
		nl++;
	}
	return nl;
}

bool Maquina::disponibilidadmaquina(int ini,int fin,int c){
	for(int f=ini;f!=fin;f++){  //Comprobamos dia a dia
		if(ini>31){ini=ini-31;}
		int p=0;
		if((f<=2)||(f>=5)){//Hay reserva ese día
			p=4;
		}
		if((p+c)>CPU){
			return false;
		}
	}
	return true;
}
