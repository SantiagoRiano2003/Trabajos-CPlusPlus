#include <iostream>
#include <conio.h>
using namespace std;
main()
	{
		int opcion,opcion1,n1,n2,r1,entrada;
		do
		{
			system("cls");
		cout<<"						Bienvenido al edificio -PROGRA-"<<endl;
		cout<<"				Digite una opcion del 1 al 8 para entrar a uno de los ocho pisos "<<endl;
		cin>>(opcion);
		switch(opcion)
		{
			case 1:cout<<"Ingresaste el piso uno "<<endl;
				cout<<"Digite un numero del 1 al 5 para activar la luz de alguno de los cinco locales: "<<endl;
				cin>>(opcion1);
				switch(opcion1)
				{
					case 1:cout<<"local uno con luz"<<endl;
					break;
					case 2:cout<<"local dos con luz"<<endl;
					break;
					case 3:cout<<"local tres con luz"<<endl;
					break;
					case 4:cout<<"local cuatro con luz"<<endl;
					break;
					case 5:cout<<"local cinco con luz"<<endl;
					break;
					default :cout<<"El numero de piso digitado no esta en la lista "<<endl;
					}
			break;	
			
			case 2:cout<<"Ingresaste el piso dos"<<endl;
			cout<<"Digite un numero del 1 al 5 para activar la luz de alguno de los cinco locales: "<<endl;
				cin>>(opcion1);
				switch(opcion1)
				{
					case 1:cout<<"local uno con luz"<<endl;
					break;
					case 2:cout<<"local dos con luz"<<endl;
					break;
					case 3:cout<<"local tres con luz"<<endl;
					break;
					case 4:cout<<"local cuatro con luz"<<endl;
					break;
					case 5:cout<<"local cinco con luz"<<endl;
					break;
					default :cout<<"El numero de piso digitado no esta en la lista "<<endl;
					}
			break;
			
			case 3:cout<<"Ingresaste el piso tres "<<endl;
			cout<<"Digite un numero del 1 al 5 para activar la luz de alguno de los cinco locales: "<<endl;
				cin>>(opcion1);
				switch(opcion1)
				{
					case 1:cout<<"local uno con luz"<<endl;
					break;
					case 2:cout<<"local dos con luz"<<endl;
					break;
					case 3:cout<<"local tres con luz"<<endl;
					break;
					case 4:cout<<"local cuatro con luz"<<endl;
					break;
					case 5:cout<<"local cinco con luz"<<endl;
					break;
					default :cout<<"El numero de piso digitado no esta en la lista "<<endl;
					}
			break;
			
			case 4:cout<<"Ingresaste el piso cuatro "<<endl;
			cout<<"Digite un numero del 1 al 5 para activar la luz de alguno de los cinco locales: "<<endl;
				cin>>(opcion1);
				switch(opcion1)
				{
					case 1:cout<<"local uno con luz"<<endl;
					break;
					case 2:cout<<"local dos con luz"<<endl;
					break;
					case 3:cout<<"local tres con luz"<<endl;
					break;
					case 4:cout<<"local cuatro con luz"<<endl;
					break;
					case 5:cout<<"local cinco con luz"<<endl;
					break;
					default :cout<<"El numero de piso digitado no esta en la lista "<<endl;
					}
			break;
			
			case 5:cout<<"Ingresaste el piso cinco "<<endl;
			cout<<"Digite un numero del 1 al 5 para activar la luz de alguno de los cinco locales: "<<endl;
				cin>>(opcion1);
				switch(opcion1)
				{
					case 1:cout<<"local uno con luz"<<endl;
					break;
					case 2:cout<<"local dos con luz"<<endl;
					break;
					case 3:cout<<"local tres con luz"<<endl;
					break;
					case 4:cout<<"local cuatro con luz"<<endl;
					break;
					case 5:cout<<"local cinco con luz"<<endl;
					break;
					default :cout<<"El numero de piso digitado no esta en la lista "<<endl;
					}
			break;
			
			case 6 :cout<<"Ingresaste el piso seis"<<endl;
			cout<<"Digite un numero del 1 al 5 para activar la luz de alguno de los cinco locales: "<<endl;
				cin>>(opcion1);
				switch(opcion1)
				{
					case 1:cout<<"local uno con luz"<<endl;
					break;
					case 2:cout<<"local dos con luz"<<endl;
					break;
					case 3:cout<<"local tres con luz"<<endl;
					break;
					case 4:cout<<"local cuatro con luz"<<endl;
					break;
					case 5:cout<<"local cinco con luz"<<endl;
					break;
					default :cout<<"El numero de piso digitado no esta en la lista "<<endl;
					}
			break;
			
			case 7:cout<<"Ingresaste el piso siete "<<endl;
			cout<<"Digite un numero del 1 al 5 para activar la luz de alguno de los cinco locales: "<<endl;
				cin>>(opcion1);
				switch(opcion1)
				{
					case 1:cout<<"local uno con luz"<<endl;
					break;
					case 2:cout<<"local dos con luz"<<endl;
					break;
					case 3:cout<<"local tres con luz"<<endl;
					break;
					case 4:cout<<"local cuatro con luz"<<endl;
					break;
					case 5:cout<<"local cinco con luz"<<endl;
					break;
					default :cout<<"El numero de piso digitado no esta en la lista "<<endl;
					}
			break;
			
			case 8:cout<<"Ingresaste el piso ocho "<<endl;
			cout<<"Digite un numero del 1 al 5 para activar la luz de alguno de los cinco locales: "<<endl;
				cin>>(opcion1);
				switch(opcion1)
				{
					case 1:cout<<"local uno con luz"<<endl;
					break;
					case 2:cout<<"local dos con luz"<<endl;
					break;
					case 3:cout<<"local tres con luz"<<endl;
					break;
					case 4:cout<<"local cuatro con luz"<<endl;
					break;
					case 5:cout<<"local cinco con luz"<<endl;
					break;
					default :cout<<"El numero de piso digitado no esta en la lista "<<endl;
					}
			break;
			
			default:cout<<"No hay el piso seleccionado "<<endl;
			break;
		}
		cout<<"\nPonga 1 para repetir el proceso u otro numero para terminar"<<endl;
		cin>>entrada;
	}
	while(entrada==1);
}
