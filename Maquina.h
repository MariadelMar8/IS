/*
 * Maquina.h
 */

#ifndef MAQUINA_H_
#define MAQUINA_H_

#include <iostream>
#include <string>
#include <list>
#include "Reserva.h"

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
	inline void setReservas(list<Reserva> n){ r=n; }
	int getnCPU();
	bool disponibilidadmaquina(int ini,int fin,int c);
};

#endif /* MAQUINA_H_ */
