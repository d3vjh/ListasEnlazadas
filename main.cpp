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
	enteros.replaceInList(777, 33);
	enteros.printList(); cout<<"\tSe imprime la lista"<<endl<<endl;
	
	cout<<"Tamaño de la lista: "<<enteros.sizeList()<<endl;
	

	return 0;
}

