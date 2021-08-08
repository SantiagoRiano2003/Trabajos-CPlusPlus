#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>
using namespace std;
double n1,n2,s,r,m,d;
int z;
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
	cout<<"Cual operacion quiere hacer?"<<endl;
	cout<<"Suma=1"<<endl;
	cout<<"Resta=2"<<endl;
	cout<<"Multiplicacion=3"<<endl;
	cout<<"Division=4"<<endl;
	cin>>z;
	switch(z)
	{
	case 1: cout<<"\nLa suma de "<<n1<<" mas "<<n2<<" es: "<<s<<endl;
	break;
	case 2: cout<<"La resta de "<<n1<<" menos "<<n2<<" es: "<<r<<endl;
	break;
	case 3: cout<<"La multiplicacion de "<<n1<<" por "<<n2<<" es: "<<m<<endl;
	break;
	case 4: cout<<"La division de "<<n1<<" entre "<<n2<<" es: "<<d<<endl;
	break;
	default: cout<<"Opcion no valida";
	}
	}	
	
	
	
