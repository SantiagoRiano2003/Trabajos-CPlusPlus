#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
unsigned long g_t=0,hora,z,s,j,i,d;
char nombre,tipoM,precio,cantidad,venta,total;
main()
{
	cout<<"Digite el numero de dias que se efectuara la compra"<<endl;
	cin>>d;
	i=1;
	for(j==1;j==d;j++)
	{
	total=0;
	hora=8;
	cout<<"Dia:"<<j<<endl;
	while(hora<=18)
	{
		cout<<"Ingrese la hora"<<endl;
		cin>>hora;
		if (hora<=18)
		cout<<"Nombre del cliente"<<endl;
		cin>>nombre;
		cout<<"Ingrese el nombre del producto: "<<endl;
		cin>>tipoM;
		cout<<"Ingrese el precio del producto:"<<endl;
		cin>>precio;
		cout<<"Ingrese la cantidad a comprar:"<<endl;
		cin>>cantidad;
		venta=precio*cantidad;
		cout<<"El comprador "<<nombre<<" compro: "<<cantidad<<" "<<tipoM<<" por "<<precio<<" pesos"<<endl;
		total=venta+total;
		i=i+1;
		cout<<"Quiere salir? Digite 1 para salir o 2 para repetir el proceso: "<<endl;
		cin>>s;
		if (s>=1)
		{
		hora=20;
		}
	}
	cout<<"Lo sentimos, la tienda se cierra a las 18 horas "<<endl;
	cout<<"El total de ventas en el dia "<<j<<" fue de: "<<total;
	}
	for(j==1;j==d;j++)
	{
		cout<<"El total de ventas en el dia "<<j<<" fue de: "<<total;
		g_t=g_t+total;
	}
	cout<<"El total de ventas en los "<<d<<" dias fueron: "<<g_t<<" pesos"<<endl;
}




