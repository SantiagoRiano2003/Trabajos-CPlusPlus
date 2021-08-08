#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
 int n,base;
	 cout<<"Ingrese los siguientes numeros para calcular una potencia"<<endl;
	 cout<<"Ingrese la base para el numero: "<<endl;
	 cin >> base;
	 cout<<"Ingrese el exponente para el numero: "<<endl;
	 cin>>n;
		 int resultado=pow(base,n);
		 cout<<base<<" elevado a la "<< n<<" es igual a "<<resultado<<endl;
}
