#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>
using namespace std;
int a,num;
main()
	{
	cout<<"Ingrese un numero entero: ";
	cin>>num;
	bool primo=true;
	if(num==1)
	{
		cout<<"El numero no es primo";
		
	}
	else
	{
	for (a=2;a<num;a++)
	{
		if(num%a==0)primo=false;
	}
	if(primo==true)
	cout<<"El numero es primo";
	else
	{
	cout<<"El numero no es primo";
	}
	}
	}
