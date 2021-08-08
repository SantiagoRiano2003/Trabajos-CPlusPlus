#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>
main()
{
int arreglo[20],cantidad;
int mayor=0,menor,i;
printf("Cantidad de numeros para hallar el mayor y el menor: ");
scanf("%d",& cantidad);
for(i=0;i<cantidad;i++)
	{
		printf("Numero %d: ",i+1);
		scanf("%d",& arreglo[i]);
		if(mayor<arreglo[i])
		mayor=arreglo[i];
	}
	menor=mayor;
		for(i=0;i<cantidad;i++)
		if(menor>arreglo[i])
		menor=arreglo[i];
	printf("El mayor es: %d\n",mayor);
	printf("El menor es: %d",menor);
}
