#include <iostream>
#include <conio.h>
using namespace std;
main()
	{
		int opcion,numero=1;
		cout<<"				  Ingrese a edificio -El Tauro- "<<endl;
		cout<<"			Ingrese el numero (1) para ingresar al caso uno "<<endl;
		cout<<"			Ingrese el numero (2) para ingresar al caso dos "<<endl;
		cout<<"			Ingrese el numero (3) para ingresar al caso tres "<<endl;
		cout<<"			Ingrese el numero (4) para ingresar al caso cuatro "<<endl;
		cout<<"			Ingrese el numero (5) para ingresar al caso cinco "<<endl;
		cout<<"			Ingrese el numero (8) para ingresar al caso ocho "<<endl;
		cout<<"			Ingrese el numero (10) para ingresar al caso diez "<<endl;
		cin>>(opcion);
		switch(opcion)
		{
			case 1:cout<<"Estoy en uno: "<<endl;
			do
			{
				cout<<"Voy en: "<<numero<<endl;
				numero=numero+1;
			}
			while(numero<=10);
			{
				cout<<"termine el do"<<endl;
				numero=numero+1;
			}
		cout<<"El numero da: "<<opcion*numero<<endl;
			break;	
			case 2:cout<<"Estoy en dos: "<<endl;
			break;
			case 3:cout<<"Estoy en tres: "<<endl;
			break;
			
			
			case 4:cout<<"Estoy en cuatro: "<<endl;
			do
			{	
			cout<<"Voy en: "<<numero<<endl;
			numero=numero+1;	
			}
			while(numero<=10);
			cout<<"Termine el numero "<<endl;
			numero=1;
			while(numero<=10)
			{
			cout<<"Voy en: "<<numero<<endl;
			numero=numero+1;
			}
			cout<<"La multiplicacion da: "<<opcion*numero;
			break;
			
			
			case 5:cout<<"Estoy en cinco: "<<endl;
			break;
			case 8:cout<<"Estoy en ocho: "<<endl;
			break;
			case 10:cout<<"Estoy en diez: "<<endl;
			break;
			default:cout<<"En otro lado: "<<endl;
			break;
		}
}
