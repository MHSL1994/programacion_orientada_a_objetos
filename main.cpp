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
	cout<<"Ingresar apellidos: ";
	cin>>apellidos;
	cout<<"Ingresar Direccion: ";
	cin>>direccion;
	cout<<"Ingresar Telefono: ";
	cin>>telefono;
	
	//instancia de un objeto
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();
	
	cout<<"Datos del Cliente: "<<obj.getnit()<<", "<<obj.getnombres()<<", "<<obj.getapellidos()<<", "<<obj.getdireccion()<<", "<<obj.gettelefono()<<endl;
	/*cout<<"Ingresar Nit: ";
	cin>>nit;
	obj.setnit(nit);
	cout<<obj.getnit();*/
			
	/*obj.setnit(nit);
	obj.mostrar();*/
	/*Cliente obj = Cliente();
	obj.setnit(nit);
	obj.setnombres(nombres);
	obj.setapellidos(apellidos);
	obj.setdireccion(direccion);
	obj.settelefono(telefono);
	obj.mostrar();*/
	
	 
}
