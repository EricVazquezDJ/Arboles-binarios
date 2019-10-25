#include <iostream>

using namespace std;

struct Nodo{
	int dato;
	Nodo* izq;
	Nodo* der;
};

Nodo* raiz=NULL;

int main(){
	Nodo* aux= raiz;
	
	cout<<"\nLa lista de numeros es: 9, 4, 7, 1, 3, 6, 10, 5"<<endl;
	raiz= new Nodo();
	raiz->dato=9;
	raiz->izq=new Nodo();
	raiz->der=new Nodo();
	aux=raiz->izq;
	aux->dato=4;
	aux->izq=new Nodo();
	aux->der=new Nodo();
	aux=aux->izq;
	aux->dato=1;
	aux->izq=NULL;
	aux->der=NULL;
	aux=raiz->izq;
	aux=aux->der;
	aux->dato=5;
	aux->izq=NULL;
	aux->der=NULL;
	aux=raiz->der;
	aux->dato=7;
	aux->izq=new Nodo();
	aux->der=new Nodo();
	aux=raiz->der;
	aux=aux->izq;
	aux->dato=6;
	aux->izq=NULL;
	aux->der=NULL;
	aux=raiz->der;
	aux=aux->der;
	aux->dato=10;
	aux->izq=NULL;
	aux->der=NULL;
	
	
	cout<<"\nEl bosquejo del arbol es:"<<endl;
	cout<<"\n     "<<raiz->dato<<endl;
	cout<<"  "<<raiz->izq->dato<<"     "<<raiz->der->dato<<endl;
	cout<<raiz->izq->izq->dato<<"  "<<raiz->izq->der->dato<<"  "<<raiz->der->izq->dato<<"  "<<raiz->der->der->dato<<"  "<<endl;
	
	cout<<"\nListo!!\n";
	return 0;
}
