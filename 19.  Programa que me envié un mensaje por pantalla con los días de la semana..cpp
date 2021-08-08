#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>
using namespace std;
int a;
main()
	{
		cout<<"Introduce un numero del 1 al 7 para escoger un dia de la semana: ";
		cin>>a;
		switch(a){
		case 1:cout<<"Lunes"<<endl;
		break;
		case 2:cout<<"Martes"<<endl;
		break;
		case 3:cout<<"Miercoles"<<endl;
		break;
		case 4:cout<<"Jueves"<<endl;
		break;
		case 5:cout<<"Viernes"<<endl;
		break;
		case 6:cout<<"Sabado"<<endl;
		break;
		case 7:cout<<"Domingo"<<endl;
		break;
		default :cout<<"Dato no valido"<<endl;
		}
	}
