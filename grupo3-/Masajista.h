using namespace std;

class Masajista:public Integrante{
	string titulacion, anios_experiencia;
	
	public:
		Masajista(){}
		Masajista(int id, string nombre, string apellidos, int edad, string titulacion, string anios_experiencia):Integrante(id, nombre,apellidos,edad){
			this->titulacion=titulacion;
			this->anios_experiencia=anios_experiencia;
		}
		string getTitulacion(){return titulacion;}
		void setTitulacion(string titulacion){this->titulacion=titulacion;}
		
		string getAnios_experiencia(){return anios_experiencia;}
		void setAnios_experiencia(string anios_experiencia){this->anios_experiencia=anios_experiencia;}
		
		void leer(){
			//int edad;
			//string nombre,apellidos,id;
			cout << "\nIngreso de Masajista ";
			cout <<"\nIdentidad : "; cin>>id;
			cout <<"\nNombres : "; cin >>nombre;
			cout <<"\nApellidos : "; cin>>apellido;
			cout << "\nEdad : "; cin >>edad;
			cout << "\nTitulacion : "; cin >> titulacion;
			cout << "\nAnios de Experiencia : "; cin >> anios_experiencia;
			/*this->setId(id);
			this->setNombre(nombre);
			this->setApellidos(apellido);
			this->setEdad(edad);*/
		}
		
		void imprimir(){
			
			cout << "\nDatos de Masajista";
			cout << "\nIngreso de Titular ";
			cout <<"\nIdentidad : "<<id;
			cout <<"\nNombres : "<<nombre;
			cout <<"\nApellidos : "<<apellido;
			cout << "\nEdad : "<<edad;
			cout << "\nTitulacion : " << titulacion;
			cout << "\nAnios de Experiencia : " << anios_experiencia;
			
			/*cout << "\nDatos de Titular ";
			cout <<"\nIdentidad : "<< this->getId();
			cout <<"\nNombre : "<< this->getNombre();
			cout <<"\nApellido : "<< this->getApellidos();
			cout <<"\nEdad : "<< this->getEdad();
			cout << "\nTitulacion : " << titulacion;
			cout << "\nAnios de Experiencia : " << anios_experiencia;*/
		}
};
