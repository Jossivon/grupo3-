using namespace std;

class Integrante {
	protected:
	int id; 
	string nombre; 
	string apellido; 
	int edad; 
	
	Integrante (){}
	Integrante (int id, string nombre, string apellido, int edad){
		this->id=id;
		this->nombre=nombre;
		this->apellido=apellido;
		this->edad=edad;
	}
	
	virtual void leer ()=0;
	virtual void imprimir()=0;
};
