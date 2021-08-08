#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>
using namespace std;
double lado1,lado2,perimetro;
main()
	{
		cout<<"Para calcular el perimetro ponga los datos de dos de los lados del rectangulo"<<endl;
		cout<<"Ingrese el lado numero 1: ";
		cin>>lado1;
		cout<<"\nIngrese el lado numero 2: ";
		cin>>lado2;
		perimetro=2*lado1+2*lado2;
		cout<<"El perimetro es: "<<perimetro;
	}
