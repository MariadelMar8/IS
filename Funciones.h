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
Usuario getUsuario(list<Usuario> u,string x,int &f);
bool exicluster(list<Maquina> m,string a);
bool exitmaquina(list<Maquina> m,string a);
bool limCPU(Usuario usuar,int num);

#endif /* FUNCIONES_H_ */
