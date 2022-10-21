/*
 *  Julian Trasar 1D
 * eTipo.c
 *
 *  Created on: 21 oct. 2022
 *      Author: PC
 */

#include "eTipo.h"
#define OCUPADO	0//esta ocupado el isEmpty
#define LIBRE 1//esta libre el isEmpty


int inicializarEstructuraEtipo(eTipo lista[],int tam)
{
	int retorno=-1;


	//con esto sabems si mi campo isEmpty esta ocupado o no
	if(lista!=NULL && tam>0)
	{
		for(int i=0;i<tam;i++)
		{
			lista[i].isEmpty=LIBRE;

		}
		retorno=0;
	}

	return retorno;

}
int buscarIndiceLibreEtipo(eTipo lista[],int tam)
{
	int retorno=-1;

	if (lista != NULL && tam > 0)
	{
		for (int i = 0; i < tam; i++)
		{
			if(lista[i].isEmpty==LIBRE)
			{
				//agarro el numero de mi posicion que es i y lo devuelvo por el retorno
				retorno=i;
				//aca rompo con un break para que no siga buscando
				break;
			}
		}
		retorno = 0;
	}

	return retorno;
}
eTipo pedirDatosEmpleadoEtipo(int id)
{
	eTipo aux;
    aux.idTipo=obtenerRango("Ingrese id", -150, 1500);
    pedirChar("Ingrese descripcion", aux.descripcion, LEN_DESCRPCION);
	 return aux;
}
int altaEfecha(eTipo lista[],int tam,int id)
{
	int retorno=-1;
	int posicionLibre;
	eTipo tipo;

	if(lista!=NULL && tam>0)
	{
		posicionLibre=buscarIndiceLibreEtipo(lista, tam);
		tipo=pedirDatosEmpleadoEtipo(id);
		//va !=-1 porque en buscaPosicionLibre -1 era si no habia y si habia era un numero positivo
		if(posicionLibre!=-1)
		{
			//mi lista posicion libre va a ser igual a el empelado que acabo de agregar
			lista[posicionLibre]=tipo;
			retorno=0;
		}
	}


	return retorno;

}
int buscarPosicionPorIdTipo(eTipo lista[],int tam,int id)
{
	int aux;
	aux=-1;
	if(lista!=NULL && tam>0)
	{
		  for(int i=0;i<tam;i++)
		    {
		    	//si no lo econtro nos tira -1 y si nos econtro tira un posicion valida ya que aux esta en -1 y aux i
		    	if(lista[i].isEmpty==OCUPADO && lista[i].idTipo==id)
		    	{
		    		aux=i;
		    		break;
		    	}
		    }
	}

	return aux;
}
