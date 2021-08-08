#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int n1;
main()
{
cout<<"Ingrese un numero, si es mayor a veinte y menor a cuarenta se le sumara quince:"<<endl<<endl;
cout<<"Valor :";
cin>>n1;
if (n1>20 and n1<40)
	{
	n1=n1+15;
	cout<<"El numero queda como: "<<n1;
	}
	else
	{
	cout<<"El numero queda como: "<<n1;
	}
}
