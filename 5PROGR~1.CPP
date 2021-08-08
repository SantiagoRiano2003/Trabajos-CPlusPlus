#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>
using namespace std;
double n1,n2,d;
main()
	{
	cout<<"					Division de numeros"<<endl;	
	cout<<"Digite el primer numero de la operacion: ";
	cin>>n1;
	cout<<"\nDigite el segundo numero para la operacion: ";
	cin>>n2;
	d=n1/n2	;
	if(n2==0)
		{
		cout<<"El numero no puede ser cero, digite el segundo numero para la operacion: ";
		cin>>n2;
		}
			d=n1/n2	;
			cout<< "La division de "<<n1<<" entre "<<n2<<" es: "<<d<<endl;
	}	
