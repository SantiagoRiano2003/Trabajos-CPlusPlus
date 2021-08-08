#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
double n1;
main()
{
cout<<"Ingrese un numero, si es mayor a veinte se le sumara diez:"<<endl<<endl;
cout<<"Valor :";
cin>>n1;
if (n1>20)
	{
	n1=n1+10;
	cout<<"El numero queda como: "<<n1;
	}
	else
	{
	cout<<"El numero queda como: "<<n1;
	}
}
