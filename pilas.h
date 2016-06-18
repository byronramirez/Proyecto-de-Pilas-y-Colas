/*
 * pilas.h
 *
 *  Created on: 16/06/2016
 *      Author: Byron
 */

#ifndef PILAS_H_
#define PILAS_H_
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct pila{
	char l; //almacenar todos los valores que entren a la estructura
	pila *siguiente;//mover el nodo hacia delante
};

pila *in;
pila *aux;
pila *out;

void push(char t){
	if(in==NULL){
		in=new(pila);
		in->l=t;
		out=in;
	}else{
		aux=new(pila);
		aux->siguiente=in;
		aux->l=t;
		in=aux;
	}out->siguiente=NULL;
	cout << "La letra ingresada para la pila es la siguiente:\n" <<t<<endl;
	cout<<"------------------------------------------------------\n";
}

void imp(){//aqui esta la codificación de la funcion imprimir
	aux=in;
	cout <<"Usted acaba de imprimir las letras guardadas de la pila:"<<endl;
	if (in == NULL){
		cout <<"No existe la estructura" << endl;
	}
	else{
		while (aux != NULL ){
			cout<< aux->l << endl;
			aux = aux->siguiente;
		}
	}
	cout<<"------------------------------------------------------\n";
}

void top(){//aqui la codificación de la funcion top
	aux=in;
	cout<<"la ultima letra de la pila es la siguiente"<<endl;
	if (in == NULL){
		cout <<"No existe la estructura" << endl;
	}
	else{
		if (aux != NULL ){
			cout<<aux->l << endl;
		}
		cout<<"-------------------------------------\n";
	}
}

void pop(){
	pila *mm=NULL;
	if (in==NULL){
		cout<<"No existe la estructura" << endl;
	}else {
		aux=in;
		in=in->siguiente;
		mm=aux;
		mm->siguiente=aux->siguiente;
	}
	cout<<"Usted acaba de quitar una letra\n";
}

void mostrar(){
	int y;
	y=0;
	aux=in;
	if (in == NULL){
		cout <<"No existe la estructura" << endl;
	}
	else{
		while (aux != NULL ){
			y++;
			aux = aux->siguiente;
		}
		cout <<"La cantidad de nodos es la siguiente:" << y << endl;
	}
}
#endif /* PILAS_H_ */
