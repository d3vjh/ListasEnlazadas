#include <iostream>

#include "Lista.h"
#include "Pila.cpp"
#include <cstddef>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char** argv) {
	Lista <int> enteros;
	Lista <int> enteros2;
	Pila p;
	int N;
	
	cout<<"Ingrese el tamaño de la lista: ";
	cin>>N;
	
	for(int i=1; i<=N; i++){		
		enteros.insertOnList(i, i);
	}
	
	int j=N;
	for(int i=1; i<=N; i++){
		enteros2.insertOnList(j, i);
		j--;
	}
	
	p.mergeLists(enteros);
	
	
	return 0;
}
