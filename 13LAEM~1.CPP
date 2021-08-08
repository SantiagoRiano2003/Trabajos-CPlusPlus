#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int n1,n2,n3,n4,n5,categoria;
string nombre;
main()
{	
	cout<<"Escriba Su nombre: ";
	cin>>nombre;
	cout<<"Que categoria es? Digite 1,2,3 o 4:"<<endl;
	cin>>categoria;
	switch(categoria)
	{
		case 1:cout<<"Cuantas escobas quiere comprar (Precio $3000 la unidad sin descuento)"<<endl;
				cout<<"Cantidad: ";
				cin>>n1;	
			cout<<"Cuantas recogedoras quiere comprar (Precio $2000 la unidad sin descuento)"<<endl;
				cout<<"Cantidad: ";
				cin>>n2;	
			cout<<"Cuantas aromatizantes quiere comprar (Precio $3500 la unidad sin descuento)"<<endl;
				cout<<"Cantidad: ";
				cin>>n3;
				n1=3000*n1;
				n2=2000*n2;
				n3=3500*n3;
				cout<<"Su nombre es:"<<nombre<<endl;
					n4=n1+n2+n3;
					cout<<"El subtotal a pagar es de:"<<n4<<endl;
						n5=n4*0.05;
						cout<<"El descuento total es de:"<<n5<<endl;
							n5=n4*0.95;
							cout<<"El costo total de la compra es: $"<<n5<<endl;	
							break;
		case 2:	cout<<"Cuantas escobas quiere comprar (Precio $3000 la unidad sin descuento)"<<endl;
				cout<<"Cantidad: ";
				cin>>n1;	
			cout<<"Cuantas recogedoras quiere comprar (Precio $2000 la unidad sin descuento)"<<endl;
				cout<<"Cantidad: ";
				cin>>n2;	
			cout<<"Cuantas aromatizantes quiere comprar (Precio $3500 la unidad sin descuento)"<<endl;
			cout<<"Cantidad: ";
				cin>>n3;
				n1=3000*n1;
				n2=2000*n2;
				n3=3500*n3;
				cout<<"Su nombre es:"<<nombre<<endl;
					n4=n1+n2+n3;
					cout<<"El subtotal a pagar es de:"<<n4<<endl;
						n5=n4*0.08;
						cout<<"El descuento total es de:"<<n5<<endl;
							n5=n4*0.92;
							cout<<"El costo total de la compra es: $"<<n5<<endl;	
							break;
		case 3:	cout<<"Cuantas escobas quiere comprar (Precio $3000 la unidad sin descuento)"<<endl;
				cout<<"Cantidad: ";
				cin>>n1;	
			cout<<"Cuantas recogedoras quiere comprar (Precio $2000 la unidad sin descuento)"<<endl;
				cout<<"Cantidad: ";
				cin>>n2;	
			cout<<"Cuantas aromatizantes quiere comprar (Precio $3500 la unidad sin descuento)"<<endl;
			cout<<"Cantidad: ";
				cin>>n3;
				n1=3000*n1;
				n2=2000*n2;
				n3=3500*n3;
				cout<<"Su nombre es:"<<nombre<<endl;
					n4=n1+n2+n3;
					cout<<"El subtotal a pagar es de:"<<n4<<endl;
						n5=n4*0.12;
						cout<<"El descuento total es de:"<<n5<<endl;
							n5=n4*0.88;
							cout<<"El costo total de la compra es: $"<<n5<<endl;	
							break;
		case 4:	cout<<"Cuantas escobas quiere comprar (Precio $3000 la unidad sin descuento)"<<endl;
				cout<<"Cantidad: ";
				cin>>n1;	
			cout<<"Cuantas recogedoras quiere comprar (Precio $2000 la unidad sin descuento)"<<endl;
				cout<<"Cantidad: ";
				cin>>n2;	
			cout<<"Cuantas aromatizantes quiere comprar (Precio $3500 la unidad sin descuento)"<<endl;
			cout<<"Cantidad: ";
				cin>>n3;
				n1=3000*n1;
				n2=2000*n2;
				n3=3500*n3;
				cout<<"Su nombre es:"<<nombre<<endl;
					n4=n1+n2+n3;
					cout<<"El subtotal a pagar es de:"<<n4<<endl;
						n5=n4*0.15;
						cout<<"El descuento total es de:"<<n5<<endl;
							n5=n4*0.85;
							cout<<"El costo total de la compra es: $"<<n5<<endl;	
							break;	
		default:cout<<"Valor incorrecto";
	}
}



