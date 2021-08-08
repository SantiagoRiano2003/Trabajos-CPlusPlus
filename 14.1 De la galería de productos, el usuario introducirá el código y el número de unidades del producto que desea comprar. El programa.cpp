#include<iostream>
#include<string>
#include<cmath>
#include<windows.h>
using namespace std;
int b,c,d,e,total;
char a;
string x;
int main()
{
	cout<<"---Lista de productos para comprar--- "<<endl<<endl;
	cout<<"Quiere comprar zapatos? s-S/N-n"<<endl;
	cin>>a;
	if(a=='s' or a=='S')
	{
		cout<<"Cuantos quiere comprar? $40.000 con iva el par: ";
		cin>>b;
	}
	
	cout<<"Quiere comprar medias? s-S/N-n"<<endl;
	cin>>a;
	if(a=='s' or a=='S')
	{
		cout<<"Cuantos quiere comprar? $10.000 con iva el par: ";
		cin>>c;
	}
	
	cout<<"Quiere comprar paraguas? s-S/N-n"<<endl;
	cin>>a;
	if(a=='s' or a=='S')
	{
		cout<<"Cuantos quiere comprar? $25.000 con iva la unidad: ";
		cin>>d;
	}
	
	cout<<"Quiere comprar telefonos? s-S/N-n"<<endl;
	cin>>a;
	if(a=='s' or a=='S')
	{
		cout<<"Cuantos quiere comprar? $300.000 con iva la unidad:";
		cin>>e;
	}
	cout<<"Escriba su nombre para la factura: ";
	cin>>x;
	
	b=b*40000;
	c=c*10000;
	d=d*25000;
	e=e*300000;
	total=e+b+c+d;
	cout<<"-----Factura-----"<<endl;
	cout<<"Comprador: "<<x<<endl;
	cout<<"Subtotal (sin iva): $"<<total*0.81<<endl;
	cout<<"Precio Total: $"<<total<<endl;
	cout<<"Gracias por comprar"<<endl;	
}

