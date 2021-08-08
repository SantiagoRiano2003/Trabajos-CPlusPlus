#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>
using namespace std;
double lado,perimetro;
main()
	{
	cout<<"Para calcular el perimetro ponga el dato de un lado del cuadrado"<<endl;	
	cout<<"Ingrese los centimetros del lado del cuadrado:"<<endl;
	cin>>lado;
	perimetro=lado+lado+lado+lado;
	cout<<"El perimetro es: "<<perimetro;
	}	
