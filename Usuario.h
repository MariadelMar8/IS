/*
 * Usuario.h
 */

#ifndef USUARIO_H_
#define USUARIO_H_

#include <iostream>
#include <string>

using namespace std;

class Usuario {
private:
	string correo;
	int ltiempo;
	int lCPU;
	int lreserva;
	int nreserva;
public:
	Usuario();
	inline string getCorreo(){ return correo; }
	inline int getlTiempo(){ return ltiempo; }
	inline int getlCPU(){ return lCPU; }
	inline int getlReserva(){ return lreserva; }
	inline int getnReserva(){ return nreserva; }
	inline void setnReserva(int n){ nreserva=n; }
};

#endif /* USUARIO_H_ */
