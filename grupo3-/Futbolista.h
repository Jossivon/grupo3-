using namespace std;

class Futbolista:public Integrante{
	string dolorsal, demarcacion;
	
	public:
		Futbolista(){}
		Futbolista(int id, string nombre, string apellidos, int edad, string dolorsal, string demarcacion):Integrante(id, nombre,apellidos,edad){
			this->dolorsal=dolorsal;
			this->demarcacion=demarcacion;
		}
		string getDolorsal(){return dolorsal;}
		void setDolorsal(string dolorsal){this->dolorsal=dolorsal;}
		
		string getDemarcacion(){return demarcacion;}
		void setDemarcacion(string demarcacion){this->demarcacion=demarcacion;}
		
		void leer(){
			//int edad;
			//string nombre,apellidos,id;
			cout << "\nIngreso de Futbolista";
			cout <<"\nIdentidad : "; cin>>id;
			cout <<"\nNombres : "; cin >>nombre;
			cout <<"\nApellidos : "; cin>>apellido;
			cout << "\nEdad : "; cin >>edad;
			cout << "\nDolorsal : "; cin >>dolorsal;
			cout << "\nDemarcacion : "; cin >>demarcacion;
			/*this->setId(id);
			this->setNombre(nombre);
			this->setApellidos(apellido);
			this->setEdad(edad);*/
		}
		
		void imprimir(){
			cout << "\nDATOS FUTBOLISTA ";
			cout <<"\nIdentidad : "<<id;
			cout <<"\nNombres : "<<nombre;
			cout <<"\nApellidos : "<<apellido;
			cout << "\nEdad : "<<edad;
			cout << "\nDolorsal : "<<dolorsal;
			cout << "\nDemarcacion : "<<demarcacion;
			/*cout << "\nDatos de Titular ";
			cout <<"\nIdentidad : "<< this->getId();
			cout <<"\nNombre : "<< this->getNombre();
			cout <<"\nApellido : "<< this->getApellidos();
			cout <<"\nEdad : "<< this->getEdad();
			cout << "\nDolorsal : " << dolorsal;*/
			//cout << "\nDemarcacion : " << demarcacion;
		}
};
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
