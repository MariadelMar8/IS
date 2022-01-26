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
	string contra;
	int ltiempo;
	int lCPU;
	int lreserva;
	int nreserva;
public:
	Usuario();
	inline string getCorreo(){ return correo; }
	inline string getContra(){ return contra; }
	inline int getlTiempo(){ return ltiempo; }
	inline int getlCPU(){ return lCPU; }
	inline int getlReserva(){ return lreserva; }
	inline int getnReserva(){ return nreserva; }
	inline void setCorreo(string n){ correo=n; }
	inline void setContra(string n){ contra=n; }
	inline void setltiempo(int n){ ltiempo=n; }
	inline void setlCPU(int n){ lCPU=n; }
	inline void setlReserva(int n){ lreserva=n; }
	inline void setnReserva(int n){ nreserva=n; }
};

#endif /* USUARIO_H_ */
