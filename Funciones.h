/*
 * Funciones.h
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

#include "Usuario.h"
#include "Maquina.h"

list<Reserva> valorReserva();
list<Maquina> valorMaquina();
list<Usuario> valorUsuario();
int CorCorreo(list<Usuario> U,string x);
int CorCon(list<Usuario> U,Usuario *A,string x,string a);
Usuario getUsuario(list<Usuario> u,string x,int &f);
bool exicluster(list<Maquina> m,string a);
bool exitmaquina(list<Maquina> m,string a);
bool limCPU(Usuario usuar,int num);

#endif /* FUNCIONES_H_ */
