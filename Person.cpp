#include <iostream>
using namespace std;
class Person{
	//atributos
	protected : string nombres,apellidos,direccion;
				int telefono;
	//construtor
	protected :
		Person(){
		}
		Person(string nom,string ape,string dir,int tel){
			nombres = nom;
			apellidos = ape;
			direccion = dir;
			telefono = tel;
		}
	//metodo
	void mostrar();
	void agregar();
	void modificar();
	void eliminar();
};
	
