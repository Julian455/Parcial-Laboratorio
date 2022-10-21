/*
 * funciones.c
 *
 *  Created on: 21 oct. 2022
 *      Author: PC
 */
#include "eFecha.h"

void pedirChar(char*mensaje,char*nombre,int largoNombre)
{
	printf(mensaje);
	fflush(stdin);
	fgets(nombre,largoNombre,stdin);
	nombre[strlen(nombre)-1]= '\0';
}
void formarApellidoNombre(char*pNombre,char*pApellido,char*pCompleto)
{

	int largo;
	strcpy(pCompleto,pApellido);
	strcat(pCompleto,",");
	strcat(pCompleto,pNombre);

	largo=strlen(pCompleto);

	strlwr(pCompleto);

	pCompleto[0]=toupper(pCompleto[0]);

	for(int i=0;i<largo;i++)
	{
		if(isspace(pCompleto[i]))
		{
			i++;
			pCompleto[i]=toupper(pCompleto[i]);
		}
	}
}
int obtenerRango(char*mensaje,int min,int max)
{
	int numero;

	printf("%s,%d-%d",mensaje,min,max);
	scanf("%d",&numero);	while(numero<min || numero>max)
	{
		printf("Error %s es entre (entre %d--%d) ",mensaje,min,max);
		scanf("%d",&numero);
	}
	return numero;
}

float obtenerRangoFloat(char*mensaje,int min,int max)
{
	float numero;

	printf("%s,%d-%d",mensaje,min,max);
	scanf("%f",&numero);
	while(numero<min || numero>max)
	{
		printf("Error %s es entre (entre %d--%d) ",mensaje,min,max);
		scanf("%f",&numero);
	}
	return numero;
}

