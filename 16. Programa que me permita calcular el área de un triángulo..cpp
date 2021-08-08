#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>
using namespace std;
double base,altura,area;
main()
	{
	cout<<"Para calcular el area del triangulo llene los siguientes datos"<<endl;	
	cout<<"Ingrese la base para la calcular el area:"<<endl;
	cin>>base;
	cout<<"Ingrese la altura para la calcular el area:"<<endl;
	cin>>altura;
	area=altura*base/2;
	cout<<"El area del triangulo es: "<<area;
	}	
	
