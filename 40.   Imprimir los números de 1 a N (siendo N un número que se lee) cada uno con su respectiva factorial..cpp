#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int num,factorial,n1,num2;
main()
{
factorial=1;
n1=1;
num=0;
	cout<<"Por favor ingrese la cantidad de veces que se va a calcular la factorial: ";
	cin>>num2;
		if (num2<0)
		{	
		cout<<"El numero no se puede calcular";
		}
		 else
			{
			 while (num<num2)
					{
					num=num+1;
						while (n1<=num)
						{
						factorial=factorial*n1;
						n1=n1+1;
						cout<<"El factorial de "<<num<<" es: "<<factorial<<endl;
						}	
					}	
			}
}
