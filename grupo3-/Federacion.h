#include <iostream>
using namespace std;
class Federacion{
	string id,nombre;
	public:
		Federacion(){}
		Federacion(int id,string nombre){
			this->id=id;
			this->nombre=nombre;
		}
		string getId(){return id;}
		void setId(string id){this->id=id;}
		string getNombre(){return nombre;}
		void setNombre(string nombre){this->nombre=nombre;}
		//void leer();
		//void imprimir();
};
/*void Federacion::leer(){
	cout<<"/n**Ingrese datos Federacion**\n";
	cout<<"Id :";cin>>id;
	cout<<"Nombre :";cin>>nombre;
}
void Federacion::imprimir(){
	cout<<"/n**Datos Federacion**\n";
	cout<<"Id :"<<id<<endl;
	cout<<"Nombre :"<<nombre<<endl;
}*/
