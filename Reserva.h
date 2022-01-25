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
	int dini;
	int dfin;
public:
	Reserva();
	inline string getrCorreo(){ return correor; }
	inline int getrCPU(){ return CPUr; }
	inline int getDini(){ return dini; }
	inline int getDfin(){ return dfin; }
	inline void setrCorreo(string a){ correor=a; }
	inline void setrCPU(int a){ CPUr=a; }
	inline void setDini(int a){ dini=a; }
	inline void setDfin(int a){ dfin=a; }
};

#endif /* RESERVA_H_ */
