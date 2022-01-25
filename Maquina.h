/*
 * Maquina.h
 */

#ifndef MAQUINA_H_
#define MAQUINA_H_

#include <iostream>
#include <string>
#include <list>
#include "Reserva.h"
#include "Usuario.h"

using namespace std;

class Maquina {
private:
	string maquina;
	int CPU;
	string cluster;
	list<Reserva> r;
public:
	Maquina();
	inline string getMaquina(){ return maquina; }
	inline int getCPU(){ return CPU; }
	inline string getCluster(){ return cluster; }
	inline list<Reserva> getReservas(){ return r; }
	inline void setMaquina(string nl){ maquina=nl; }
	inline void setCPU(int nl){ CPU=nl; }
	inline void setCluster(string nl){ cluster=nl; }
	inline void setReservas(list<Reserva> nl){ r=nl; }
	int getnCPUus(int nl);
	bool disponibilidadmaquina(int ini,int fin,int c);
};

#endif /* MAQUINA_H_ */
