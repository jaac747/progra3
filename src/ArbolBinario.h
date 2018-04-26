/*
 * ArbolBinario.h
 *
 *  Created on: 24 abr. 2018
 *      Author: usuario
 */

#ifndef ARBOLBINARIO_H_
#define ARBOLBINARIO_H_
#include <iostream>
#include <stdlib.h>
#include "Structs.h"
using namespace std;

ArbolB *crearArbol(ArbolB *izq,ArbolB *der, int Tipo, float valor){
	ArbolB *NodoArbol =NULL;
	NodoArbol=(ArbolB *)malloc(sizeof(ArbolB));
		NodoArbol->Tipo 	= Tipo;
		NodoArbol->valor 	= valor;
		NodoArbol->izq 		= izq;
		NodoArbol->der 		= der;

	return NodoArbol;
}


#endif /* ARBOLBINARIO_H_ */
