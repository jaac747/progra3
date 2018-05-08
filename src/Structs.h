/*
 * Structs.h
 *
 *  Created on: 24 abr. 2018
 *      Author: usuario
 */

#ifndef STRUCTS_H_
#define STRUCTS_H_
#include <iostream>
#include <string>
using namespace std;

struct ArbolB{
	int Tipo;
	string valor;
	ArbolB *izq;
	ArbolB *der;
};


struct ArbolE{
	int Tipo;
	float valor;
	ArbolE *izq;
	ArbolE *der;
};



#endif /* STRUCTS_H_ */
