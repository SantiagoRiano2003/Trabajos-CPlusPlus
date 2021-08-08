#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>
using namespace std;
int n1;
main()
	{
		cout<<"Digite un numero del 1 al 12 para usar el calendario"<<endl;
		cin>>n1;
		if (n1>12 or n1<1)
		{
		cout<<"Digite un numero del 1 al 12 para usar el calendario"<<endl;
		cin>>n1;
		}
		switch(n1)
		{
			case 1: cout<<"Eligio enero que tiene 31 dias";
			break;
			case 2: cout<<"Eligio febrero que tiene 28 dias y no es bisiesto";
			break;
			case 3: cout<<"Eligio marzo que tiene 31 dias";
			break;
			case 4: cout<<"Eligio abril que tiene 30 dias";
			break;
			case 5: cout<<"Eligio mayo que tiene 31 dias";
			break;
			case 6: cout<<"Eligio junio que tiene 30 dias";
			break;
			case 7: cout<<"Eligio julio que tiene 31 dias";
			break;
			case 8: cout<<"Eligio agosto que tiene 31 dias";
			break;
			case 9: cout<<"Eligio septiembre que tiene 30 dias";
			break;
			case 10: cout<<"Eligio octubre que tiene 31 dias";
			break;
			case 11: cout<<"Eligio noviembre que tiene 30 dias";
			break;
			case 12: cout<<"Eligio diciembre que tiene 31 dias";
			break;
		}
	}
