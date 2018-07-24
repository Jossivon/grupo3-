using namespace std;
class Entrenador:public Integrante{
	Federacion federacion;
	public:
		Entrenador(string id,string nombres,string apellidos,int edad,Federacion federacion):Integrante(id,nombres,apellidos,edad){
			this->federacion=federacion;
		}
	Federacion getFederacion(){return federacion;}
	void setFederacion(){this->federacion=federacion;}
	void ingresar();
	void imprimir();
};
void Entrenador::leer(){
	string ide,nom,ape;
	int ed;
	cout<<"/n**Ingrese datos Entrenador**\n";
	cout<<"Id :";cin>>ide;
	cout<<"Nombres :";cin>>nom;
	cout<<"Apellidos: ";cin>>ape;
	cout<<"Edad: ";cin>>edad;
	this->setId(ide);
	this->setNombres(nom);
	this->setApellidos(ape);
	this->setEdad(edad);
	string idef,nomf;
	Federacion objfed(idef,nomf);
	objfed.leer();
	federacion=objfed;
}
void Entrenador::imprimir(){
	cout<<"/n**Datos Entrenador**\n";
	cout<<"Id :"<<this->getId()<<endl;
	cout<<"Nombres :"<<this->getNombres();
	cout<<"Apellidos: "<<this->getApellido();
	cout<<"Edad: "<<this->getEdad();
	cout<<"Federacion: "<<endl;
	federacion.imprimir();
}
