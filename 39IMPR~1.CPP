#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int n1,n2,n3,n4,a;
main()
{
a=0;
n1=1;
n2=0;
n4=0;
	cout<<"Numeros de Fibonacci"<<endl<<endl;
	while (n4<101)
		{
		a=a+1;
		n4=n4+1;
		n3=n1+n2;
		n1=n2;
		n2=n3;
		cout<<"El numero "<<a<<" va en: "<<n1<<endl;
		}
	}
