#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
	int n,base=2;
	cout<<"Escriba un dato para almacenarlo y elevarlo"<<endl;
		cout << "Ingrese el exponente: ";
		cin >> n;
		 int resultado=pow(base,n);
		 cout<<base<<" elevado a la "<<n<<" es igual a "<<resultado;
}
