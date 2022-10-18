#include <iostream>

#include "Lista.h"
 
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char** argv) {
	Lista <int> enteros;
	Lista <float> reales;
	Lista <char> caracteres;
 
	
	enteros.insertar(16, 1);
	enteros.insertar(12, 1);
	enteros.insertar(32, 2);
	enteros.insertar(14, 4);
	enteros.insertar(5, 3);
	enteros.imprimir();
	enteros.insertar(6, 5);
	enteros.imprimir();
	enteros.ordenar();
	cout<<"Enteros ordenados: ";
	enteros.imprimir();
	enteros.eliminar(2);
	enteros.imprimir();

 
	reales.insertar(6.2,1);
	reales.insertar(9.5,1);
	reales.insertar(3.8,2);
	reales.insertar(12.0,4);
	reales.insertar(11.9,4);
	reales.insertar(10.9,5);
	reales.ordenar();
	cout<<"reales ordenados: ";
	reales.imprimir();
	cout<< reales.tamano_lista()<<endl;
	
 
	caracteres.insertar('a',1);
	caracteres.insertar('c',1);
	caracteres.insertar('f',2);
	caracteres.insertar('m',4);
	caracteres.insertar('p',4);
	caracteres.ordenar();
	caracteres.insertar('q', 5);
	caracteres.ordenar();
	cout<<"Caracteres ordenados: ";
	caracteres.imprimir();
	
	
	cout<< caracteres.tamano_lista() <<endl;

 
	return 0;
}

