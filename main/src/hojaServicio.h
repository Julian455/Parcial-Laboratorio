/*
 *  Julian Trasar 1D
 * hojaServicio.h
 *
 *  Created on: 21 oct. 2022
 *      Author: PC
 *      ● idHoja (comienza en 20000)
● vehiculoId (debe existir) Validar
● descripcion
● precioServicio
● fecha (Validar día, mes y año)
 */

#ifndef HOJASERVICIO_H_
#define HOJASERVICIO_H_
#include "funciones.h"
#define LEN_DESCRIPCION 10000

typedef struct{
	int idHoja;
	int vehiculoId;
	int descripcion;
	float precionServicio;
	int fecha;
	int isEmpty;
}eServicio;

int inicializarEstructuraHojaServicio(eServicio lista[],int tam);
int buscarIndiceLibreHojaServicio(eServicio lista[],int tam);
eServicio pedirDatosEmpleadoHojaServicio(int id);
int altaEfecha(eServicio lista[],int tam,int id);
int buscarPosicionPorHojaServicio(eServicio lista[],int tam,int id);
int buscarPosicionPorIdServicio(eServicio lista[],int tam,int id);


#endif /* HOJASERVICIO_H_ */
