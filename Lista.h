#ifndef LISTA_H
#define LISTA_H

template <class T>
struct Nodo{T info;
	Nodo<T> *sig;
};

using namespace std;

template <class T>
class Lista{Nodo<T>*cab = new Nodo<T>;
			int tam;
	public: Lista (){
			cab=NULL;
			tam=0;}
			bool lista_vacia();
			int tamano_lista();
			bool insertar(T dato, int pos); 
//			bool insertarOrdenado(T dato);//ahora lo debe hacer para ordenadamente 
			bool eliminar(int pos);
			T imprimir();
			void ordenar();
//			~Lista();

	};
	
template <class T>
bool Lista<T>::lista_vacia(){
	return (tam==0);
}

template <class T>
int Lista<T>::tamano_lista(){
	return tam;
}

template <class T>
bool Lista<T>::insertar(T dato, int pos){

	if(pos>tam+1){
			return false;
	}
	Nodo<T> *nn = new Nodo<T>;
	Nodo<T> *aux = new Nodo<T>;
	Nodo<T> *aux2 = new Nodo<T>;
	nn->info =dato;

	if(pos==1){													//Si quiere ingresar de primeras en la lista
		nn->sig = cab;											// Pasa a ser el apuntador a cab
		cab = nn;												// Cabeza pasa a ser el dato que se ingresó de primeras
		tam++;
//		return true;
	}else{
		if(pos==tam+1){	 										//Si quiere ingresarlo de últimas
			aux=cab;
			while(aux->sig!=NULL){								// Para llegar al último de la lista
				aux=aux->sig;
			}
			aux->sig=nn;
			nn->sig=NULL;
			tam++;
//			return true;
			}
			else if(pos==2){
				aux=cab; //esto está apuntando a 12 
				for(int i=1; i<pos; i++){
				nn->sig=aux->sig;
				aux->sig=nn;
				}
				tam++;
				}
			else{
				aux=cab;
				for(int i=1; i<pos-1; i++){
					aux = aux->sig;
					aux2 = aux-> sig;
					nn->sig=aux2;}
				aux->sig=nn;
				tam++;
//				return true;
				}
				
			
		}
				
	Nodo<T> *aux3 = new Nodo<T>;
	aux3=cab;
	for(int i=1; i<=tam; i++){
		cout<<aux3->info<<"-";
		aux3=aux3->sig;
	}
	cout<<endl<<endl;
	return true;
}

template <class T>
bool Lista<T>::eliminar(int pos){ //pos 3 - guardar el anterior y el de adelante, y el anterior->adelante
	Nodo<T> *aux = new Nodo<T>;
	Nodo<T> *aux2 = new Nodo<T>;
	aux = cab;
	
	if(pos==1){
		cab=aux->sig;
		tam--;
	}else if(pos>tam+1){
		return false;
	}
	else if(pos==2){
		aux = aux->sig;
		cab->sig=aux->sig;
		tam--;
		return true;
	}
	
	else{
		
	for(int i=1; i<pos-1; i++){
		aux = aux->sig;
		aux2 = aux-> sig;
		}
		aux2=aux2->sig;
		aux->sig=aux2;
		tam--;
			
	}

	
	
}
//
template <class T>
T Lista<T>::imprimir(){
	Nodo<T> *aux = new Nodo<T>;
	aux=cab;
	for(int i=1; i<=tam; i++){
		cout<<aux->info<<"-";
		aux=aux->sig;
	}
	cout<<endl<<endl;
			
	
}

template <class T>
void Lista<T>::ordenar(){
	Nodo<T> *aux = new Nodo<T>;
	Nodo<T> *aux2 = new Nodo<T>;
	
	int i, j;
    T actual;
 	aux=cab;
 	aux2=cab;
 	T arr[tam];
 	
 	for(i=1; i<=tam; i++){      //Guarda los info dentro del arreglo
 		arr[i]=aux->info;
 		aux=aux->sig;
	 }
//	 cout<<"Arreglo desordenado: "<<endl;
//	 for(i=1; i<=tam; i++){
//    	
//    	cout<<arr[i]<<"-";
//	}
	 
 
    for (i = 1; i <= tam; i++) { //Ordena el arreglo
        actual = arr[i];
        for (j = i; j > 1 && arr[j - 1] > actual; j--) {
            arr[j] = arr[j - 1];
        }
        arr[j] = actual;
    	
    }
    cout<<endl;
    
    // Asignar a los nodos los respectivos info
    for(i=1; i<=tam; i++){
    	
    	aux2->info=arr[i];
    	aux2=aux2->sig;
	}
    
    
	
}

//template <class T>
//bool Lista<T>::insertarOrdenado(){
//	//
//}
	


#endif


