/*
 *  Julian Trasar 1D
 * eFecha.h
 *
 *  Created on: 21 oct. 2022
 *      Author: PC
 */

#ifndef EFECHA_H_
#define EFECHA_H_
#include "funciones.h"


typedef struct{
	int dia;
	int mes;
	int anio;
	int isEmpty;
}eFecha;

int inicializarEstructuraEfecha(eFecha lista[],int tam);
int buscarIndiceLibreEfecha(eFecha lista[],int tam);
eFecha pedirDatosEmpleadoEfecha(int id);
int altaEfecha(eFecha lista[],int tam,int id);
#endif /* EFECHA_H_ */
