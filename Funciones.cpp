/*
 * Funciones.cpp
 */

#include "Funciones.h"

Usuario getUsuario(list<Usuario> u,string x,int &f){
	Usuario A;
	for(list<Usuario>::iterator k=u.begin();k!=u.end();k++){
		if(x==k->getCorreo()){
			A.setCorreo(x);
			A.setltiempo(k->getlTiempo());
			A.setlCPU(k->getlCPU());
			A.setlReserva(k->getlReserva());
			A.setnReserva(k->getnReserva());
			f++;
		}
	}
	return A;
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
		if(s.getMaquina()==a){ return true; }
	}
	return false;
}
