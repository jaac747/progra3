/*
 * Structs.h
 *
 *  Created on: 24 abr. 2018
 *      Author: usuario
 */

#ifndef STRUCTS_H_
#define STRUCTS_H_

struct ArbolB{
	int Tipo;
	float valor;
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
