/**
 * \mainpage ListsSort
 * \author Jhonatan Moreno - Santiago Avila
 * \date Octubre - 2022
 */

#include <iostream>
#include "Lista.h"
 
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char** argv) {
	Lista <int> enteros;
	Lista <float> reales;
	Lista <char> caracteres;
 
	cout<<"================ENTEROS================"<<endl<<endl;
	enteros.insertOnList(16, 1); cout<<"\t\tSe inserta 16 en 1"<<endl;
	enteros.insertOnList(12, 1); cout<<"\t\tSe inserta 12 en 1"<<endl;
	enteros.insertOnList(32, 2); cout<<"\tSe inserta 32 en 2"<<endl;
	enteros.insertOnList(14, 4); cout<<"\tSe inserta 14 en 4"<<endl;
	enteros.insertOnList(5, 3); cout<<"\tSe inserta 5 en 3"<<endl<<endl;
	enteros.printList(); cout<<"\tSe imprime la lista"<<endl<<endl;
	enteros.insertOnList(6, 5); cout<<"\tSe inserta 6 en 5"<<endl; 
	enteros.printList(); cout<<"\tSe imprime la lista"<<endl<<endl;
	enteros.sortList(); cout<<"\t[!] Se organiza la lista"<<endl<<endl;
	cout<<"Enteros ordenados: ";
	enteros.printList(); cout<<"\tSe imprime la lista"<<endl<<endl;
	enteros.deleteFromList(2); cout<<"\t[!] Se elimina el elemento 2 de la lista"<<endl<<endl;
	enteros.printList(); cout<<"\tSe imprime la lista"<<endl<<endl;
	enteros.deleteFromList(4); cout<<"\t[!] Se elimina el elemento 4 de la lista"<<endl<<endl;
	enteros.printList(); cout<<"\tSe imprime la lista"<<endl<<endl;
	
	cout<<"Tamaño de la lista: "<<enteros.sizeList()<<endl;
	

 	cout<<"\n\n\n\n================REALES================"<<endl<<endl;
	reales.insertOnList(6.2,1);  cout<<"\t\t\t\tSe inserta 6.2 en 1"<<endl;
	reales.insertOnList(9.5,1);  cout<<"\t\t\tSe inserta 9.5 en 1"<<endl;
	reales.insertOnList(3.8,2);  cout<<"\t\t\tSe inserta 3.8 en 2"<<endl;
	reales.insertOnList(12.0,4);  cout<<"\t\t\tSe inserta 12.0 en 4"<<endl;
	reales.insertOnList(11.9,4);  cout<<"\t\tSe inserta 11.9 en 4"<<endl;
	reales.insertOnList(10.9,5);  cout<<"\tSe inserta 10.9 en 1"<<endl<<endl;
	reales.sortList(); cout<<"\t[!] Se organiza la lista"<<endl<<endl;
	cout<<"reales ordenados: ";
	reales.printList(); cout<<"\tSe imprime la lista"<<endl<<endl;
	
	
	 cout<<"Tamaño de la lista: "<<reales.sizeList()<<endl;
	 
 	cout<<"\n\n\n\n================CARACTERES================"<<endl<<endl;
	caracteres.insertOnList('a',1); cout<<"\t\t\t\tSe inserta \'a\' en 1"<<endl;
	caracteres.insertOnList('c',1); cout<<"\t\t\t\tSe inserta \'c\' en 1"<<endl;
	caracteres.insertOnList('f',2);	cout<<"\t\t\t\tSe inserta \'f\' en 2"<<endl;
	caracteres.insertOnList('m',4); cout<<"\t\t\tSe inserta \'m\' en 4"<<endl;
	caracteres.insertOnList('p',4); cout<<"\t\t\tSe inserta \'p\' en 4"<<endl;
	caracteres.sortList(); cout<<"\t[!] Se ordena la lista"<<endl;
	caracteres.insertOnList('q', 5); cout<<"\t\t\t\tSe inserta \'q\' en 5"<<endl;
	caracteres.sortList(); cout<<"\t[!] Se ordena la lista"<<endl;
	cout<<"Caracteres ordenados: ";
	caracteres.printList(); cout<<"\tSe imprime la lista"<<endl<<endl;
	
	
	cout<<"Tamaño de la lista: "<<caracteres.sizeList()<<endl;

 
	return 0;
}

