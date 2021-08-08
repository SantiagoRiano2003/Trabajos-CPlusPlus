#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int num,factorial,n1;
main()
{
factorial=1;
n1=1;
	cout<<"Por favor ingrese para calcular su factorial: ";
	cin>>num;
		if (num<0)
		{	
		cout<<"El numero no se puede calcular";
		}
		 else
			{
			 while(n1<=num)
			 {
				factorial=factorial*n1;
				n1=n1+1;
			 }	
		cout<<"El factorial de "<<num<<" es: "<<factorial;
	}	
}
