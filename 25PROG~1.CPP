#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>
using namespace std;
double producto,iva,total;
main()
{
cout<<"					Calculadora del precio total con el iva al 16%"<<endl<<endl;
cout<<"Introduzca el precio del producto: $";
cin>> producto;
iva=producto*0.16;
total=producto+iva;
cout<<"El valor del articulo sin iva es de: $"<<producto<<endl;
cout<< "El Iva es de: $"<<iva<<endl;
cout<< "El precio del articulo es de: $"<<total<<endl;
}
