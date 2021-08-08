#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>
using namespace std;
int n1,n2,n3,n4;
char a;
main()
{
	cout<<"Cuantas Brochas quiere comprar (Precio $5000 unidad sin descuento)"<<endl;
		cout<<"Cantidad: ";
		cin>>n1;
		
	cout<<"Cuantas rodillos quiere comprar (Precio $4000 unidad sin descuento)"<<endl;
		cout<<"Cantidad: ";
		cin>>n2;
		
	cout<<"Cuantas sellador quiere comprar (Precio $3500 unidad sin descuento)"<<endl;
		cout<<"Cantidad: ";
		cin>>n3;
	n1=5000*n1;
	n1=n1*0.80;
	n2=4000*n2;
	n2=n2*0.85;
	n3=3500*n3;
		cout<<"Va a pagar todo de contado? S-s/N-n:";
			cin>>a;
			if (a=='s' or a=='S')
			{
			n4=n1+n2+n3;
			n4=n4*0.93;
			}
			cout<<"El costo total de la compra es: $"<<n4;	
}




	
	

	
