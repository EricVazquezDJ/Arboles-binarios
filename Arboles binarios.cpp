#include <iostream>

using namespace std;

struct Nodo{
	int dato;
	Nodo* izq;
	Nodo* der;
};

void preOrden(Nodo *raiz){
	if(raiz==NULL){
		return;
	}else{
		cout<<raiz->dato<<", ";
		preOrden(raiz->izq);
		preOrden(raiz->der);
	}
}

void enOrden(Nodo *raiz){
	if(raiz==NULL){
		return;
	}else{
		enOrden(raiz->izq);
		cout<<raiz->dato<<", ";
		enOrden(raiz->der);
	}
}

void postOrden(Nodo *raiz){
	if(raiz==NULL){
		return;
	}else{
		postOrden(raiz->izq);
		postOrden(raiz->der);
		cout<<raiz->dato<<", ";
	}
}

Nodo* raiz=NULL;

int main(){
	Nodo* aux= raiz;
	
	cout<<"\nLa lista de numeros es: 14, 6, 24, 35, 59, 17, 21, 32, 4, 7, 15, 22"<<endl;
	raiz= new Nodo();
	raiz->dato=14;
	raiz->izq=new Nodo();
	raiz->der=new Nodo();
	aux=raiz->izq;
	aux->dato=6;
	aux->izq=new Nodo();
	aux->der=new Nodo();
	aux=aux->izq;
	aux->dato=4;
	aux->izq=NULL;
	aux->der=NULL;
	aux=raiz->izq;
	aux=aux->der;
	aux->dato=7;
	aux->izq=NULL;
	aux->der=NULL;
	aux=raiz->der;
	aux->dato=24;
	aux->izq=new Nodo();
	aux->der=new Nodo();
	aux=aux->izq;
	aux->dato=17;
	aux->izq=new Nodo();
	aux->der=new Nodo();
	aux=aux->izq;
	aux->dato=15;
	aux->izq=NULL;
	aux->der=NULL;
	aux=raiz->der;
	aux=aux->izq;
	aux=aux->der;
	aux->dato=21;
	aux->izq=NULL;
	aux->der=new Nodo;
	aux=aux->der;
	aux->dato=22;
	aux->izq=NULL;
	aux->der=NULL;
	aux=raiz->der;
	aux=aux->der;
	aux->dato=35;
	aux->izq=new Nodo();
	aux->der=new Nodo();
	aux=aux->izq;
	aux->dato=32;
	aux->izq=NULL;
	aux->der=NULL;
	aux=raiz->der;
	aux=aux->der;
	aux=aux->der;
	aux->dato=59;
	aux->izq=NULL;
	aux->der=NULL;
	
	cout<<"\nEl bosquejo del arbol es:"<<endl;
	cout<<"\n			"<<raiz->dato<<endl;
	cout<<"	"<<raiz->izq->dato<<"				"<<raiz->der->dato<<endl;
	cout<<raiz->izq->izq->dato<<"		"<<raiz->izq->der->dato<<"		"<<raiz->der->izq->dato<<"		"<<raiz->der->der->dato<<"		"<<endl;
	cout<<"		            "<<raiz->der->izq->izq->dato<<"	   "<<raiz->der->izq->der->dato<<"	    "<<raiz->der->der->izq->dato<<"	   "<<raiz->der->der->der->dato<<endl;
	cout<<"				     "<<raiz->der->izq->der->der->dato<<endl;
	
	
	cout<<"\nEl recorrido en PreOrden es: ";
	preOrden(raiz);
	
	cout<<"\nEl recorrido en Orden es: ";
	enOrden(raiz);

	cout<<"\nEl recorrido en PostOrden es: ";
	postOrden(raiz);
	
	cout<<"\nListo!!\n";
	return 0;
}
