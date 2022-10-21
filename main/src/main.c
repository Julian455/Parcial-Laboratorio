/*
 ============================================================================
 Name        : main.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int opciones;
	int flag=0;

	do
	{
		printf("\n1-AlTA VEHICULOS "
				"\n2-MODIFICAR VEHICULOS "
				"\n3-BAJA VEHICULOS "
				"\n4-LISTA VEHICULOS "
				"\n5-LISTA POR TIPO "
				"\n6-ALTA HOJA DE SERVICIO "
				"\n7-SALIR");
		    opciones=obtenerRango("\nSeleciones una opcion 1-7", 1, 7);


		    switch( opciones) {

		    	case 1:
		    		flag=1;
		    		       break;
		    	case 2:
		    		if(flag==0)
		    		{
		    			printf("Tiene que dar el alta primero")
		    		}
		    			    break;
		    	case 3:
			    if (flag == 0) {
			  	 printf("Tiene que dar el alta primero")
			    }
		    			    break;
		    	case 4:
		    		if(flag==0)
					{
						printf("Tiene que dar el alta primero")
					}
		    			    break;
		    	case 5:
		    		if(flag==0)
					{
						printf("Tiene que dar el alta primero")
					}
		    			    break;
		    	case 6:
		    		if(flag==0)
		    		{
						printf("Tiene que dar el alta primero")
		    		}
		    			    break;
		    	case 7:
		    			    break;

		}

	}while(opciones !=7);


	return EXIT_SUCCESS;
}

