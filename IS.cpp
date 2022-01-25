#include "Funciones.h"
#include "Maquina.h"
#include "Reserva.h"
#include "Usuario.h"

int main(){
	//Iniciar una lista con maquinas, lista m
	//Iniciar una lista con usuarios, lista u
	string a,x;
	int b=0,f=0;
	cout<<"Introduce su correo electronico"<<endl;
	cin>>x;
	cout<<"Introduce la contraseña"<<endl;
	cin>>a;
	Usuario A=getUsuario(u,x,&f);
	if(f==0){
		cout<<"Este usuario no existe"<<endl;
		b=6; //Si no existe se salta el while
	}
	while(b=!6){
		cout<<"            Menu principal"<<endl;
		cout<<"1.Visualizar informacion del usuario"<<endl;
		cout<<"2.Consultar reservas"<<endl;
		cout<<"3.Realizar reserva"<<endl;
		cout<<"4.Eliminar reserva"<<endl;
		cout<<"5.Consultar informacion de las maquinas"<<endl;
		cout<<"6.Salir"<<endl;
		cin>>b;
		switch(b){
		case 1:
			cout<<"Opcion no disponible"<<endl;
			break;
		case 2:
			cout<<"Opcion no disponible"<<endl;
			break;
		case 3:
			int c=0;
			cout<<"Realizar reserva:"<<endl;
			//Comprobamos que no supere el numero de reservas
			if(A.getlReserva()>A.getnReserva()){
				cout<<"Introduzca el nombre del cluster donde desea reservar la maquina"<<endl;
				cin>>a;
				if(exicluster(m,a)==false){ cout<<"Ese cluster no existe"<<endl; }//No existe
				else{  //Cuando existe el cluster
					cout<<"Introduzca el nombre de la maquina que desea reservar"<<endl;
					cin>>a; //Comprobamos si existe la maquina
					if(exitmaquina(m,a)==false){ cout<<"No existe esta maquina"<<endl; }
					else{
						cout<<"Introduce el numero de CPUs que desea"<<endl;
						cin>>c;
						if(A.getlCPU<c){ //Comprobamos el limite de CPU
							cout<<"No puede reservar tantas CPU, excede sus limites"<<endl;
						}
						else{  //No excede el limite
							int ini,fin;
							cout<<"Introduce el día de inicio de reserva (numero del 1 al 31)"<<endl;
							cin>>ini;
							cout<<"Introduce el día de fin de reserva (numero del 1 al 31)"<<endl;
							cin>>fin;
							if(ini>=fin){ int d=(31-ini)+fin; }
							else{ int d=fin-ini; }
							if(A.getlTiempo()<d){ cout<<"Excede el tiempo posible"<<endl; }
							else{  //No supera el limite de tiempo
								for(list<Maquina>::iterator j=m.begin();j!=m.end();j++){
									if(j.getMaquina()==a){ return true; }
								}
								if(j.disponibilidadmaquina(ini,fin,c)==false){ cout<<"No se puede realizar la reserva esos días"<<endl; }
								else{ //Se puede realizar la reserva
									Reserva w;
									w.setrCorreo(x);
									w.setrCPU(c);
									w.setDini(ini);
									w.setDfin(fin);
									list<Reserva> h=j.getReservas();
									h.push_back(w);
									j.setReservas(h);
									cout<<"Reserva realizada correctamente"<<endl;
								}
							}
						}
					}
				}
			}
			else{ cout<<"No puede realizar más reservas"<<endl; }
			break;
		case 4:
			cout<<"Opcion no disponible"<<endl;
			break;
		case 5:
			cout<<"Opcion no disponible"<<endl;
			break;
		}
	}
	return 0;
}
