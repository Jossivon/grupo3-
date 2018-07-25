using namespace std;

class Futbolista:Integrante{
	string dolorsal, demarcacion;
	
	public:
		Futbolista(){}
		Futbolista(string id, string nombre, string apellidos, int edad, string dolorsal, string demarcacion):Integrante(id, nombre,apellidos,edad){
			this->dolorsal=dolorsal;
			this->demarcacion=demarcacion;
		}
		string getDolorsal(){return dolorsal;}
		void setDolorsal(string dolorsal){this->dolorsal=dolorsal;}
		
		string getDemarcacion(){return demarcacion;}
		void setDemarcacion(string demarcacion){this->demarcacion=demarcacion;}
		
		void ingresar(){
			int edad;
			string nombre,apellidos,id;
			cout << "\nIngreso de Titular ";
			cout <<"\nIdentidad : "; cin>> id;
			cout <<"\nNombres : "; cin >> nombre;
			cout <<"\nApellidos : "; cin>> apellidos;
			cout << "\nEdad : "; cin >> edad;
			cout << "\nDolorsal : "; cin >> dolorsal;
			cout << "\nDemarcacion : "; cin >> demarcacion;
			this->setId(id);
			this->setNombre(nombre);
			this->setApellidos(apellido);
			this->setEdad(edad);
		}
		
		void imprimir(){
			cout << "\nDatos de Titular ";
			cout <<"\nIdentidad : "<< this->getId();
			cout <<"\nNombre : "<< this->getNombre();
			cout <<"\nApellido : "<< this->getApellidos();
			cout <<"\nEdad : "<< this->getEdad();
			cout << "\nDolorsal : " << dolorsal;
			cout << "\nDemarcacion : " << demarcacion;
		}
};
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
};
