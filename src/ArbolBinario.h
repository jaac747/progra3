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




ArbolB *crearArbol( int Tipo, string valor){
	ArbolB *NodoArbol =NULL;
	NodoArbol=(ArbolB *)malloc(sizeof(ArbolB));
		NodoArbol->Tipo 	= Tipo;
		NodoArbol->valor 	= valor;
		NodoArbol->izq 		= NULL;
		NodoArbol->der 		= NULL;

	return NodoArbol;
}


void insertar(ArbolB *arbol, string x)
{
     if(arbol==NULL)
     {
           arbol = crearArbol(0,x);

     }
     else if(x.compare(arbol->valor)>0)
          insertar((arbol->izq), x);
     else if(x > arbol->valor)
          insertar(arbol->der, x);
}

void preOrden(ArbolB *arbol)
{
     if(arbol!=NULL)
     {
          cout << arbol->valor <<" ";
          preOrden(arbol->izq);
          preOrden(arbol->der);
     }
}

void enOrden(ArbolB *arbol)
{
     if(arbol!=NULL)
     {
          enOrden(arbol->izq);
          cout << arbol->valor << " ";
          enOrden(arbol->der);
     }
}

void postOrden(ArbolB *arbol)
{
     if(arbol!=NULL)
     {
          postOrden(arbol->izq);
          postOrden(arbol->der);
          cout << arbol->valor << " ";
     }
}

void verArbol(ArbolB *arbol, int n)
{
     if(arbol==NULL)
          return;
     verArbol(arbol->der, n+1);

     for(int i=0; i<n; i++)
         cout<<"   ";

     cout<< arbol->valor <<endl;

     verArbol(arbol->izq, n+1);
}


#endif /* ARBOLBINARIO_H_ */
