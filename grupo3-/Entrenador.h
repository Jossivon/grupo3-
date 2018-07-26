#include "Federacion.h"
#include "Integrante.h"

using namespace std;

class Entrenador:public Integrante{
	
	Federacion federacion;
	public:
		Entrenador(){}
		Entrenador(int id,string nombres,string apellidos,int edad,Federacion federacion):Integrante(id,nombres,apellidos,edad){
			this->federacion=federacion;
		}
	Federacion getFederacion(){return federacion;}
	
	void setFederacion(Federacion federacion){this->federacion=federacion;}
	void leer();
	void imprimir();
};

void Entrenador::leer(){
	//string ide,nom,ape;
	//int ed;
	string nomf;
	int idef;
	cout<<"**Ingrese datos Entrenador**\n";
	cout<<"\nId :";cin>>id;
	cout<<"\nNombres :";cin>>nombre;
	cout<<"\nApellidos: ";cin>>apellido;
	cout<<"\nEdad: ";cin>>edad;
	cout<<"\n Id de la federacion:";cin>>idef;
	cout<<"\n Nombre de la federacion :";cin>>nomf;
	/*this->setId(ide);
	this->setNombres(nom);
	this->setApellidos(ape);
	this->setEdad(edad);*/
	
	Federacion objfed(idef,nomf);
	federacion=objfed;
}
void Entrenador::imprimir(){
	cout<<"\n**Datos Entrenador**";
	cout<<"\nId :"<<id;
	cout<<"\nNombres :"<<nombre;
	cout<<"\nApellidos: "<<apellido;
	cout<<"\nEdad: "<<edad;
	cout<<"\nId de la federacion:"<<federacion.getId();
	cout<<"\nNombre de la federacion :"<<federacion.getNombre();
	/*cout<<"Id :"<<this->getId()<<endl;
	cout<<"Nombres :"<<this->getNombres();
	cout<<"Apellidos: "<<this->getApellido();
	cout<<"Edad: "<<this->getEdad();
	cout<<"Federacion: "<<endl;*/
	//federacion.imprimir();
}
