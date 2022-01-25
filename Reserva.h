/*
 * Reserva.h
 */

#ifndef RESERVA_H_
#define RESERVA_H_

#include <iostream>
#include <string>

using namespace std;

class Reserva {
private:
	string correor;
	int CPUr;
	int dinic;
	int dfin;
public:
	Reserva();
	inline string getrCorreo(){ return correor; }
	inline int getrCPU(){ return CPUr; }
	inline int getrDini(){ return dinic; }
	inline int getrDfin(){ return dfin; }
	inline void setrCorreo(string n){ correor=n; }
	inline void setrCPU(int n){ CPUr=n; }
	inline void setDini(int n){ dinic=n; }
	inline void setDfin(int n){ dfin=n; }
};

#endif /* RESERVA_H_ */
