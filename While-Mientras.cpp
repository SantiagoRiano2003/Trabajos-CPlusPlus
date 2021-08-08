#include <iostream>
#include <conio.h>
using namespace std;
main ()
{
	int numero=-9,auxiliar=0,auxiliar1=0;
	cout<<"Numeros impares: "<<endl;
	
	while(numero<=10)
	{
			if(numero==0)
		{
			numero = numero+2;	
		}
		else
		{
			cout<<"Voy en: "<<numero<<endl;
			numero=numero+2;
			auxiliar=auxiliar+1;
			cout<<"Pasada "<<auxiliar<<endl;
		}
	}
	numero=-10;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<"Numeros pares: "<<endl;
	cout<<" "<<endl;
	while(numero<=10)
	{
			if(numero==0)
		{
			numero = numero+2;
		}
		else
		{
			cout<<"Voy en: "<<numero<<endl;
			numero=numero+2;
			auxiliar1=auxiliar1+1;
			cout<<"Pasada "<<auxiliar1<<endl;
		}
	}	
getch();
}
