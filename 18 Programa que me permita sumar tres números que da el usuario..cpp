#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>
using namespace std;
double numero1,numero2,numero3,resultado;
main()
	{
		cout<<"	Escriba los tres numeros para ser sumados"<<endl;
		cout<<"Ponga el primer numero: ";
		cin>>numero1;
		cout<<"\nPonga el segundo numero: ";
		cin>>numero2;
		cout<<"\nPonga el tercer numero: ";
		cin>>numero3;
		resultado=numero1+numero2+numero3;
		cout<<"El resultado de la suma es: "<<resultado;
	}
