#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
void suma();
void resta();
void multplicacion();
void division();
			void suma()
				{
					int n1,n2,s;
					n1=3;
					n2=4;
					s=n1+n2;

				cout<<"\nLa suma de "<<n1<<" mas "<<n2<< " es: "<<s;
				
				}
			void resta()
				{
					int n1,n2,r;
					n1=4;
					n2=5;

					r=n1-n2;

				cout<<"\nLa resta de "<<n1<<" menos "<<n2<< " es: "<<r;
				}
			void multiplicacion()
				{
					int n3,n4,m;
					n3=7;
					n4=5;
					m=n3*n4;

				cout<<"\nLa multiplicacion de "<<n3<<" por "<<n4<< " es: "<<m;
				}
			void division()
				{
					int n3,n4,d;
					n3=15;
					n4=7;
					d=n3/n4;
					
				cout<<"\nLa division de "<<n3<<" entre "<<n4<< " es: "<<d;
				}
int main ()
{
	char continuar,opcion,numero;
	do
	{
			cout<<"Mostrar operaciones basicas matematicas "<<endl;
			cout<<"Desea visualizar todas las operaciones? Ingrese la letra x minuscula "<<endl;
			cout<<"Si quiere ver las operaciones individuales presione otra tecla"<<endl;
			cout<<"Digite el dato:";
			cin>>numero;
			if(numero == 'x')
			{
			suma();
			resta();
			multiplicacion();
			division();
			}
		     else
				{
				cout<<"\n\nDesea visualizar la suma? Ingrese el numero 1"<<endl;
				cout<<"Desea visualizar la resta? Ingrese el numero 2"<<endl;
				cout<<"Desea visualizar la multiplicacion? Ingrese el numero 3"<<endl;
				cout<<"Desea visualizar la division? Ingrese el numero 4"<<endl;
				cout<<"Ingrese el dato:";
				cin>>opcion;
				switch(opcion)
					{
					case '1':suma();
					break;
					case '2':resta();
					break;
					case '3':multiplicacion();
					break;
					case '4':division();
					break;
					default:cout<<"No existe ese numero"<<endl;
					}	
				}	
		cout<<"\n\nDesea continuar? Ingrese la tecla S mayuscula"<<endl;
		cin>>continuar;
		}
		while(continuar=='S');	
}

