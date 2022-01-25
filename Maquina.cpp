/*
 * Maquina.cpp
 *
 *  Created on: 24 ene. 2022
 *      Author: HP ELITEBOOK
 */

#include "Maquina.h"

Maquina::Maquina() {
	// TODO Auto-generated constructor stub

}

Maquina::~Maquina() {
	// TODO Auto-generated destructor stub
}

int Maquina::getnCPU(){
	int n=0;
	for(list<Reserva>::iterator i=r.begin();i!=r.end();i++){
		n=n+(i->getCPU());
	}
	return n;
}
int Maquina::getnReservas(){
	int n=0;
	for(list<Reserva>::iterator i=r.begin();i!=r.end();i++){
		n++;
	}
	return n;
}
int Maquina::getnCPUus(int n){//Numero de CPU ocupadas un dia concreto
	int p=0;
	for(list<Reserva> l=r.begin();l!=r.end();l++){
		if(f==l.getDini()){//Hay reserva ese día
			p=p+l.getrCPU();
		}
	}
	return p;
}
bool Maquina::disponibilidadmaquina(int ini,int fin,int c){
	for(int f=ini;f!=fin;f++){  //Comprobamos dia a dia
		if(ini>31){ini=ini-31;}
		if((getnCPUus(f)+c)>CPU){
			return false;
		}
	}
	return true;
}

