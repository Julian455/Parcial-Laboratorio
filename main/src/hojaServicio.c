/*
 *  Julian Trasar 1D
 * hojaServicio.c
 *
 *  Created on: 21 oct. 2022
 *      Author: PC
 */
#include "hojaServicio.h"
#define OCUPADO	0//esta ocupado el isEmpty
#define LIBRE 1//esta libre el isEmpty

int inicializarEstructuraHojaServicio(eServicio lista[],int tam)
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
int buscarIndiceLibreHojaServicio(eServicio lista[],int tam)
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
eServicio pedirDatosEmpleadoHojaServicio(int id)
{
	eServicio aux;
    aux.idHoja=obtenerRango("Ingrese id de hoja", -150, 25000);
    aux.vehiculoId=obtenerRang("Ingrese id del vehiculo", -150, 25000);
    pedirChar("ingrese descripcion", aux.descripcion, LEN_DESCRIPCION);
    aux.precionServicio=obtenerRangoFloat("Ingrese precio del servicio", 0, 500000);
	 return aux;
}
int altaEservicio(eServicio lista[],int tam,int id)
{
	int retorno=-1;
	int posicionLibre;
	eServicio servicio;

	if(lista!=NULL && tam>0)
	{
		posicionLibre=buscarIndiceLibreEtipo(lista, tam);
		servicio=pedirDatosEmpleadoHojaSevicio(id);
		//va !=-1 porque en buscaPosicionLibre -1 era si no habia y si habia era un numero positivo
		if(posicionLibre!=-1)
		{
			//mi lista posicion libre va a ser igual a el empelado que acabo de agregar
			lista[posicionLibre]=servicio;
			retorno=0;
		}
	}


	return retorno;

}
int buscarPosicionPorHojaServicio(eServicio lista[],int tam,int id)
{
	int aux;
	aux=-1;
	if(lista!=NULL && tam>0)
	{
		  for(int i=0;i<tam;i++)
		    {
		    	//si no lo econtro nos tira -1 y si nos econtro tira un posicion valida ya que aux esta en -1 y aux i
		    	if(lista[i].isEmpty==OCUPADO && lista[i].idHoja==id)
		    	{
		    		aux=i;
		    		break;
		    	}
		    }
	}

	return aux;
}
int buscarPosicionPorIdServicio(eServicio lista[],int tam,int id)
{
	int aux;
	aux=-1;
	if(lista!=NULL && tam>0)
	{
		  for(int i=0;i<tam;i++)
		    {
		    	//si no lo econtro nos tira -1 y si nos econtro tira un posicion valida ya que aux esta en -1 y aux i
		    	if(lista[i].isEmpty==OCUPADO && lista[i].vehiculoId==id)
		    	{
		    		aux=i;
		    		break;
		    	}
		    }
	}

	return aux;
}

