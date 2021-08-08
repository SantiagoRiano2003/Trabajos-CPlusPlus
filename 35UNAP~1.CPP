#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
unsigned long fotocopias,preciounidad,total,descuento;
main()
{
preciounidad=100;
cout<<"Cuantas fotocopias va a sacar?: "<<endl;
cin>>fotocopias;
	if(fotocopias<99)
	{
	total=preciounidad*fotocopias;
	cout<<"El precio total sin descuento es de: "<<total<<endl;
	}
		else
			{
			if (fotocopias>99 and fotocopias<=200)
			{
			descuento=preciounidad*0.88;
			total=descuento*fotocopias;
			cout<<"El precio total con descuento del 12% es de: "<<total<<endl;
			}
				else
					{
					if (fotocopias>200 and fotocopias<=400)
					{
					descuento=preciounidad*0.85;
					total=descuento*fotocopias;
					cout<<"El precio total con descuento del 15% es de: "<<total<<endl;
					}
						else
						{
						if (fotocopias>400);
						{
						descuento=preciounidad*0.82;
						total=descuento*fotocopias;
						cout<<"El precio total con descuento del 18% es de: "<<total<<endl;
						}
					}
				}
			}
		}
