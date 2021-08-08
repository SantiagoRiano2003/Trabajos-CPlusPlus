#include <iostream>
#include <conio.h>
using namespace std;
main ()
{
int edad;
cout<<endl<<"Entrada al cine"<<endl;
cout<<endl<<"Ingrese su edad: "<<endl;
cin>>edad;
if(edad>17)
{
	cout<<endl<<"Ingrese al cine para adultos "<<endl;		
	} 
else
	{ 
		if(edad>=6)
	{
	cout<<endl<<"Ingrese al cine para jovenes "<<endl;		
		}
		else
		cout<<endl<<"Ingrese al cine para ninos"<<endl;
		} 
} 



