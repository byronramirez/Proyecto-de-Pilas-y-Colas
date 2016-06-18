/*
 * Colas.h
 *
 *  Created on: 17/06/2016
 *      Author: Byron
 */

#ifndef COLAS_H_
#define COLAS_H_
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct cola{
	char a; //almacenar todos los valores que entren a la estructura
	cola *siguiente;//mover el nodo hacia delante
};

cola *one;
cola *auxiliar;
cola *salida;

void Push(char e){
	if (one == NULL){
			one = new(cola);
			one->a=e;
			salida=one;
		}
		else {
			auxiliar = new(cola);
			salida->siguiente=auxiliar;
			auxiliar->a=e;
			salida=auxiliar;
		}
		salida->siguiente=NULL;
		cout << "La letra ingresada para la cola es la siguiente:\n" <<e<<endl;
		cout<<"------------------------------------------------------\n";
}

void Imp(){//aqui esta la codificación de la funcion imprimir
	auxiliar=one;
	cout <<"Usted acaba de imprimir las letras guardadas de la cola:"<<endl;
	if (one == NULL){
		cout <<"No existe lo que pide" << endl;
	}
	else{
		while (auxiliar != NULL ){
			cout<< auxiliar->a << endl;
			auxiliar = auxiliar->siguiente;
		}
		cout<<"------------------------------------------------------\n";
	}
}

void Top(){//aqui la codificación de la funcion top
	auxiliar=one;
	cout<<"la primera letra de la colas es la siguiente"<<endl;
	if (one == NULL){
		cout <<"No existe lo que pide" << endl;
	}
	else{
		if (auxiliar != NULL ){
			cout<<auxiliar->a << endl;
		}
		cout<<"-------------------------------------\n";
	}
}

void Pop(){
	cola *nn=NULL;
	if (one==NULL){
		cout<<"No existe lo que pide" << endl;
	}else {
		auxiliar=one;
		one=one->siguiente;
		nn=auxiliar;
		nn->siguiente=auxiliar->siguiente;
	}
	cout<<"Usted acaba de quitar una letra\n";
}

void Mostrar(){
	int b;
	b=0;
	auxiliar=one;
	if (one == NULL){
		cout <<"No existe lo que pidio" << endl;
	}
	else{
		while (auxiliar != NULL ){
			b++;
			auxiliar = auxiliar->siguiente;
		}
		cout <<"La cantidad de colas es la siguiente:" << b << endl;
	}
}




#endif /* COLAS_H_ */
