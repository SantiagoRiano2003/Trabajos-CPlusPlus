#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>
using namespace std;
double n1,n2;
main()
{
cout<<"Introduzca 2 valores para saber cual es mas grande que otro"<<endl<<endl;
cout<<"Valor 1:";
cin>>n1;
cout<<"Valor 2:";
cin>>n2;

if (n1<n2)
cout<<n2<<" es mayor que "<<n1;
else
cout<<n1<<" es mayor que "<<n2;
}
