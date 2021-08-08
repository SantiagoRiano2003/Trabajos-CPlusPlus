#include <iostream>
#include <conio.h>
using namespace std;
main ()
{
	string nombre,contrasena,rcontrasena;
	cout<<endl<<"inicio de sesion"<<endl;
	cout<<endl<<"ingrese su nombre de usuario"<<endl;
	cin>>nombre;
	cout<<endl<<"ingrese su contrasena"<<endl;
	cin>>contrasena;
	cout<<endl<<"ingrese otra vez la contrasena"<<endl;
	cin>>rcontrasena;
	if ((nombre=="victor")&&(contrasena=="profe")&&(rcontrasena=="profe"))
	{
	cout<<endl<<"Usuario y contrasena correctos"<<endl;
	}
	else
	{
		if(nombre!="victor")
		{ 
		cout<<endl<<"Te equivocaste pues el nombre no es: "<<nombre<<endl;
		}
		else
		{
		cout<<endl<<"Nombre correcto: "<<contrasena<<endl;
		}
		if(contrasena!="profe")
		{ 
		cout<<endl<<"Te equivocaste pues el contrasena no es: "<<contrasena<<endl;
		}
		else
		{
		cout<<endl<<"Contrasena correcta: "<<contrasena<<endl;
		}
		if(rcontrasena!="profe")
		{ 
		cout<<endl<<"Te equivocaste pues la verificacion de la contrasena no es: "<<rcontrasena<<endl;
		}
		else
		{
		cout<<endl<<"verificacion de contrasena correcta: "<<contrasena<<endl;
		}
		
	
	} 	
	getch();	
} 
