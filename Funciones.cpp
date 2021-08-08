#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

char continuar;
void mensaje();
void mensaje1();
void suma();

void suma()
	{
		cout<<"aca va la suma"<<endl;
	}

void mensaje1()
	{
		cout<<"mi primer mensaje"<<endl;
		int numero=1;
		while(numero<=10)
		{
			cout<<"voy en:  "<<numero<<endl;
			numero=numero+1;
		}
		cout<<"termine el while  "<<endl;
		numero=1;
		do
		{	
			cout<<"voy en:  "<<numero<<endl;
			numero=numero+1;	
		}
		while(numero<=10);	
		numero=10;
		while(numero>=1)
		{
			cout<<"voy en:  "<<numero<<endl;
			numero=numero-1;
		}
	}

void mensaje()
	{
		cout<<"RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR"<<endl;
	}
int main()
	{
		do{
			int numero;
			cout<<"Desea visualizar le mensaje 1? Ingrese el numero 1"<<endl;
			cin>>numero;
			if(numero==1)
			{
			mensaje1();
			}
		mensaje1();
		mensaje();
		suma();
		suma();	
		suma();		
		mensaje();
		mensaje1();
		cout<<"Desea continuar? Ingrese la tecla S"<<endl;
		cin>>continuar;
		}
		while(continuar=='S');
	}
