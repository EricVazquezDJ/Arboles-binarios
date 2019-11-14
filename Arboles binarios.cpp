#include <iostream>
#include <conio.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo* izq;
	Nodo* der;
};

Nodo* raiz=NULL;
Nodo* aux= raiz;

void agregar(int x){
	if(raiz==NULL){
		raiz=new Nodo();
		raiz->dato=x;
		raiz->izq=NULL;
		raiz->der=NULL;
	}else{
		aux=raiz;
		while(true){
			if(x<aux->dato){
				if(aux->izq==NULL){
					aux->izq=new Nodo();
					aux=aux->izq;
					aux->dato=x;
					aux->izq=NULL;
					aux->der=NULL;
					break;
					}else{
						aux=aux->izq;
					}
				}else if(x>aux->dato){
					if(aux->der==NULL){
						aux->der=new Nodo();
						aux=aux->der;
						aux->dato=x;
						aux->izq=NULL;
						aux->der=NULL;
						break;
					}else{
						aux=aux->der;
					}
				}else{
				cout<<"\Los valores se repiten"<<endl;
				return;
			}
		}
	}
}


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

void menu(){
    cout<<"\nMenú de opciones \n"<<endl;
    cout<<"1 Agregar valor \n"<<"2 Mostrar valores en PreOrden \n"<<"3 Mostrar valores en Orden \n"<<"4 Mostrar valores en PostOrden \n"<<"5 Salir \n"<<endl;
    cout<<"Elige una opción del menú: \n"<<endl;
}

int main(){
	char *locale;
    locale=setlocale(LC_ALL,"");
	int opcion, x;
	int repetir=true;

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
	
	while(repetir){
		system("CLS");
		cout<<"\nLa lista de números es: 14, 6, 24, 35, 59, 17, 21, 32, 4, 7, 15, 22"<<endl;
		menu();
		cin>>opcion;
		if(opcion==1){
            system("CLS");
            cout<<"\Ingrese un valor: ";
            cin>>x;
			agregar(x);
			cout<<"\n¡Valor agregado con exito!"<<endl;
			system ("pause");
		}else if(opcion==2){
			system("CLS");
			cout<<"\nEl recorrido en PreOrden es: ";
			preOrden(raiz);
			cout<<"\n\n";
			system ("pause");
		}else if(opcion==3){
			system("CLS");
			cout<<"\nEl recorrido en Orden es: ";
			enOrden(raiz);
			cout<<"\n\n";
			system ("pause");
		}else if(opcion==4){
			system("CLS");
			cout<<"\nEl recorrido en PostOrden es: ";
			postOrden(raiz);
			cout<<"\n\n";
			system ("pause");
		}else{
			break;
		}
	}
	return 0;
}
