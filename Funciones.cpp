/*
 * Funciones.cpp
 */

#include "Funciones.h"

list<Reserva> valorReserva(){
	list<Reserva> r1;
	Reserva rr;
	rr.setrCorreo("i@uco.es");
	rr.setrCPU(4);
	rr.setDini(2);
	rr.setDfin(5);
	r1.push_back(rr);
	return r1;
}
list<Maquina> valorMaquina(){
	list<Maquina> m1;
	Maquina mm;
	mm.setMaquina("1");
	mm.setCPU(10);
	mm.setCluster("1");
	list<Reserva> l=valorReserva();
	mm.setReservas(l);
	m1.push_back(mm);
	return m1;
}
list<Usuario> valorUsuario(){
	list<Usuario> u1;
	Usuario uu;
	uu.setCorreo("i@uco.es");
	uu.setContra("1");
	uu.setltiempo(5);
	uu.setlCPU(6);
	uu.setlReserva(4);
	uu.setnReserva(1);
	u1.push_back(uu);
	return u1;
}

int CorCorreo(list<Usuario> U,string x){
	for(list<Usuario>::iterator k=U.begin();k!=U.end();k++){
			if(x==k->getCorreo()){ return 1;}
	}
	return 0;
}
int CorCon(list<Usuario> U,Usuario *A,string x,string a){
	for(list<Usuario>::iterator k=U.begin();k!=U.end();k++){
		if(x==k->getCorreo()){
			if(a==k->getContra()){
				A->setCorreo(x);
				A->setltiempo(k->getlTiempo());
				A->setlCPU(k->getlCPU());
				A->setlReserva(k->getlReserva());
				A->setnReserva(k->getnReserva());
				return 1;
			}
		}
	}
	return 0;
}

bool exicluster(list<Maquina> m,string a){
	for(list<Maquina>::iterator j=m.begin();j!=m.end();j++){ //Comprobamos si existe el cluster
		if(j->getCluster()==a){//existe cluster
			return true;
		}
	}
	return false;
}
bool exitmaquina(list<Maquina> m,string a){
	for(list<Maquina>::iterator s=m.begin();s!=m.end();s++){
		if(s->getMaquina()==a){ return true; }
	}
	return false;
}
bool limCPU(Usuario usuar,int num){
	if(usuar.getlCPU()<num){ return false; }
	return true;
}
