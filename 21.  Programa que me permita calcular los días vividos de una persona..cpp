#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>
using namespace std;
int edad,fecha,dias;
main()
	{
		cout<<"					Calculadora de los dias vividos de una persona"<<endl;
		cout<<"Digite su ano de nacimiento: ";
		cin>>edad;
		cout<<"Ingrese el ano actual: ";
		cin>>fecha;
		while (edad>fecha)
		{
			cout<<"Su ano de nacimiento no puede ser mayor al ano actual, repita el proceso"<<endl;
			cout<<"Digite su ano de nacimiento: ";
			cin>>edad;
			cout<<"Ingrese el ano actual: ";
			cin>>fecha;
		}
		dias=(fecha-edad)*365;
		cout<<"Usted tiene alrededor de "<<dias<<" dias vividos";
	}
