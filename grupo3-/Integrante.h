using namespace std;

class Integrante{
	protected:
	int id; 
	string nombre; 
	string apellido; 
	int edad; 
	
	public:
	Integrante (){}
	Integrante (int id, string nombre, string apellido, int edad){
		this->id=id;
		this->nombre=nombre;
		this->apellido=apellido;
		this->edad=edad;
	}
	int getCodigo(){
		return id;
	}
	
	virtual void leer ()=0;
	virtual void imprimir()=0;
};
