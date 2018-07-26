#include <iostream>
#include <list>
#include "Entrenador.h"

#include "Futbolista.h"
#include "Masajista.h"


int menu (){
	int op; 
	
	system ("cls");
	cout << "\n -----------MENU PRINCIPAL-------------";
	cout << "\n 1. Ingresar";
	cout << "\n 2. Listar";
	cout << "\n 3. Eliminar";
	cout << "\n 4. Salir";
	cin>>op; 
	
	return op; 
}

void nuevoM (list<Masajista *> &lista){

	Masajista *objM = new Masajista();
	objM->leer();
	lista.push_back(objM);
}

void nuevoE (list<Entrenador *> &lista){

    Entrenador *objE = new Entrenador();
	objE->leer();
	lista.push_back(objE);
}
void nuevoF(list<Futbolista *> &lista){

	Futbolista *objF = new Futbolista();
	objF->leer();
	lista.push_back(objF);
}

void imprimirE(list<Entrenador *> &entrenador){
	
	for (list<Entrenador *>::iterator indice = entrenador.begin();indice!=entrenador.end();++indice){
		(*indice)->imprimir();
		system ("pause");
	}
	
}

void imprimirM(list<Masajista *> &masajista){
	
	for (list<Masajista *>::iterator indice = masajista.begin();indice!=masajista.end();++indice){
		(*indice)->imprimir();
		system ("pause");
	}
	
}

void imprimirF(list<Futbolista *> &futbolista){
	
	for (list<Futbolista *>::iterator indice = futbolista.begin();indice!=futbolista.end();++indice){
		(*indice)->imprimir();
		system ("pause");
	}
	
}

Futbolista* buscarf(list<Futbolista *> lista, int codBuscar){
	Futbolista * depfut=NULL;
	list<Futbolista*>::iterator pos;
	pos=lista.begin();
	while(pos!=lista.end() && depfut==NULL){
	if((*pos)->getCodigo()==codBuscar ){
	depfut=(*pos);
	}
	pos++;
	}
	return depfut;
}


Entrenador* buscare(list<Entrenador *> lista, int codBuscar){
	Entrenador * depe=NULL;
	list<Entrenador *>::iterator pos;
	pos=lista.begin();
	while(pos!=lista.end() && depe==NULL){
	if((*pos)->getCodigo()==codBuscar){
	depe=(*pos);
	}
	pos++;
	}
	return depe;
}

Masajista* buscarm(list<Masajista *> lista, int codBuscar){
	Masajista * depm=NULL;
	list<Masajista*>::iterator pos;
	pos=lista.begin();
	while(pos!=lista.end() && depm==NULL){
	if((*pos)->getCodigo()==codBuscar){
	depm=(*pos);
	}
	pos++;
	}
	return depm;
}


int main(int argc, char** argv) {
	
	int op;
	int op1;
	int e;
	int codb;
	
	list<Masajista *>masajista;
	list<Entrenador *>entrenador;
	list<Futbolista *>futbolista;
	
	do {
		op=menu();
		switch(op){
			case 1: 
				cout << "\n 1. Futbolista   2.Entrenador   3.Masajista";
				cin>>op1;
				if (op1==1)
				nuevoF (futbolista);
				if (op1==2)
				nuevoE (entrenador);
				if (op1==3)
				nuevoM (masajista);
			break;
			
			case 2:
				 imprimirE(entrenador);
				 imprimirM(masajista);
				 imprimirF(futbolista);
			break;
			
			case 3:
				cout << "\n 1. Futbolista  2.Entrenador  3. Masajista";
				cin>>op1; 
				if (op1==1){
					Futbolista *bfut=NULL;
					cout << "Ingrese el codigo a buscar";
					cin>>codb;
					bfut=buscarf(futbolista,codb);
					if (bfut==NULL){
						
						cout<< "\n Futbolista no encontrado";
						system("pause");
					}else {
						bfut->imprimir();
						system("pause");
						cout << "\n Esta seguro que desea eliminar: 1.Si  2.No"; 
						cin>>e;
						if (e==1){
							futbolista.remove(bfut);
							cout << "\n Futblista eliminado";
						}else 
							cout << "\n Futbolista no eliminado";
					}
				}
				
				if (op1==2){
					Entrenador *bfue=NULL;
					cout << "Ingrese el codigo a buscar";
					cin>>codb;
					bfue=buscare(entrenador,codb);
					if (bfue==NULL){
						
						cout<< "\n Futbolista no encontrado";
						system("pause");
					}else {
						bfue->imprimir();
						system("\npause");
						cout << "\n Esta seguro que desea eliminar: 1.Si  2.No"; 
						cin>>e;
						if (e==1){
							entrenador.remove(bfue);
							cout << "\n Futblista eliminado";
						}else 
							cout << "\n Futbolista no eliminado";
					}
				}
		
				if (op1==3){
					Masajista *bMas=NULL;
					cout << "Ingrese el codigo a buscar";
					cin>>codb;
					bMas=buscarm(masajista,codb);
					if(bMas==NULL){
					
						cout << "\n Masajista no encontrado"<<endl; 
						system("pause");
					}else{
						bMas->imprimir();
						cout << "\n Esta seguro que desea eliminar: 1.Si  2.No"; 
						cin>>e;
						if (e==1){
							masajista.remove(bMas);
							cout << "\n Masajista eliminado";
						}else 
							cout << "\n Masajista no eliminado";
					}
					
				}
				
				
			break;
			
			
			
		}
	}while (op!=4);
	
	
	
	return 0;
}
