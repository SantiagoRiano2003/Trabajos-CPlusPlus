#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>
using namespace std;
double n1,n2,s,r,m,d;
main()
	{
	cout<<"					Suma,resta,multiplicacion y division de numeros"<<endl;	
	cout<<"Digite el primer numero de la operacion: ";
	cin>>n1;
	cout<<"\nDigite el segundo numero para la operacion: ";
	cin>>n2;
	s=n1+n2;
	r=n1-n2;
	m=n1*n2;
	d=n1/n2	;
	cout<< "\nLa suma de "<<n1<<" mas "<<n2<<" es: "<<s<<endl;
	cout<< "La resta de "<<n1<<" menos "<<n2<<" es: "<<r<<endl;
	cout<< "La multiplicacion de "<<n1<<" por "<<n2<<" es: "<<m<<endl;
	cout<< "La division de "<<n1<<" entre "<<n2<<" es: "<<d<<endl;
	}	
