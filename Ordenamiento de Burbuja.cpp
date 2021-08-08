#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
	int fila,columna,temporal,cantidad;
	int edades[20];
	cout<<"Por favor ingresa la cantidad de elementos del vector: "<<" \n";
	cin>>cantidad;
	//Llenado del vector
	for(int i=0;i<cantidad;i++)
	{
		cout<<"\nVector numero "<<i<<" :";
		cin>>edades[i];
	}
	//int edades[]={2,45,567,0,-1,3,12,20,12,78,-45};
	for(fila=0;fila<cantidad;fila++)
		{
			for(columna=0;columna<cantidad-1;columna++)
			{
				if(edades[columna]>edades[columna+1])
				{
					temporal=edades[columna];
					edades[columna]=edades[columna+1];
					edades[columna+1]=temporal;
				}
			}
		}
		cout<<"\n-----Vector edades de forma ascendente-----"<<" \n";
		for(int i=0;i<cantidad;i++)
		{
			cout<<"En el indice ["<<i<<"] tenemos "<<edades[i]<<" \n";
			}
			cout<<"\n-----Vector edades de forma descendente----- \n";
				for(int i=cantidad-1;i>=0;i--)
				{
					cout<<"En el indice ["<<i<<"] tenemos "<<edades[i]<<" \n";
	}
}
