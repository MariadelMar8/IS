#include "Funciones.h"
#include "Maquina.h"
#include "Reserva.h"
#include "Usuario.h"

int main(){
	//Iniciar una lista con maquinas, lista m
	list<Maquina> m=valorMaquina();
	//Iniciar una lista con usuarios, lista u
	list<Usuario> u=valorUsuario();
	string a,x;
	int b=0,f=0,c1=0;
	cout<<"Introduce su correo electronico"<<endl;
	cin>>x;
	cout<<"Introduce la contraseña"<<endl;
	cin>>a;
	Usuario A;
	if(CorCorreo(u,x)==0){
		cout<<"Este usuario no existe"<<endl;
		b=6; //Si no existe se salta el while
	}
	if((CorCon(u,&A,x,a)==0)&&(CorCorreo(u,x)!=0)){
		cout<<"La contraseña no es correcta"<<endl;
		b=6; //Si no existe se salta el while
	}
	while(b!=6){
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
						cin>>c1;
						if(limCPU(A,c1)==false){ //Comprobamos el limite de CPU
							cout<<"No puede reservar tantas CPU, excede sus limites"<<endl;
						}
						else{  //No excede el limite
							int ini,fin;
							cout<<"Introduce el día de inicio de reserva (numero del 1 al 31)"<<endl;
							cin>>ini;
							cout<<"Introduce el día de fin de reserva (numero del 1 al 31)"<<endl;
							cin>>fin;
							int d;
							if(ini>=fin){ d=(31-ini)+fin; }
							else{ d=fin-ini; }
							if(A.getlTiempo()<d){ cout<<"Excede el tiempo posible"<<endl; }
							else{  //No supera el limite de tiempo
								list<Maquina>::iterator j;
								for(j=m.begin();f!=7564&&j!=m.end();j++){
									if(j->getMaquina()==a){ f=7564; }
								}
								if(j->disponibilidadmaquina(ini,fin,c1)==false){ cout<<"No se puede realizar la reserva esos días"<<endl; }
								else{ //Se puede realizar la reserva
									cout<<"Introduzca el motivo de la reserva"<<endl;
									cin>>a;
									Reserva w;
									w.setrCorreo(x);
									w.setrCPU(c1);
									w.setDini(ini);
									w.setDfin(fin);
									list<Reserva> h=valorReserva();
									h.push_back(w);
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
