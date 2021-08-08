#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>
using namespace std;
int edad,ano,edad2;
main()
	{
		cout<<" 					Calculadora de la edad"<<endl;
		cout<<"Ingrese su ano de nacimiento: ";
		cin>>edad;
		cout<<"Ingrese el ano actual: ";
		cin>>ano;
		edad2=ano-edad;
		while (edad>ano)
		{
			cout<<"Su fecha de nacimiento no puede ser mayor a la fecha actual"<<endl;
			cout<<"Ingrese su ano de nacimiento: ";
			cin>>edad;
			cout<<"Ingrese el ano actual: ";
			cin>>ano;
		}
		cout<<"Su edad es: "<<edad2<<" anos";
	}
