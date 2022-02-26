#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion;
	int telefono;
	
	cout<<"Ingresar Nit: ";
	cin>>nit;
	cout<<"Ingresar Nombres: ";
	cin>>nombres;
	cout<<"Ingresar Apellidos: ";
	cin>>apellidos;
	cout<<"Ingresar Direccion: ";
	cin>>direccion;
	cout<<"Ingresar Telefono: ";
	cin>>telefono;
	//instancia de un objeto
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();
	cout<<"Modificar Nit:";
	cin>>nit;
	cout<<"Modificar Nombres:";
	cin>>nombres;
	cout<<"Modificar Apellidos:";
	cin>>apellidos;
	cout<<"Modificar Direccion:";
	cin>>direccion;
	cout<<"Modificar Telefono:";
	cin>>telefono;
	
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	cout<<" -------- Get --------------"<<endl;
	cout<<"Nit Modificado:"<<obj.getNit()<<endl;
	cout<<"Nombres Modificado:"<<obj.getNombres()<<endl;
	cout<<"Apellidos Modificado:"<<obj.getApellidos()<<endl;
	cout<<"Direccion Modificado:"<<obj.getDireccion()<<endl;
	cout<<"Telefono Modificado:"<<obj.getTelefono()<<endl;
	//obj.mostrar();
	obj.mostrar();
	
}
