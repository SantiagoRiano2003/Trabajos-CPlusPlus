#include <iostream>
#include <conio.h>
int r,s,m,d,n1,n2;
float n3,n4;
using namespace std;
main ()
{
cout<<endl<<"Operaciones Basicas"<<endl;
cout<<endl<<"Ingrese los numeros a evaluar"<<endl;
cout<<endl<<"Ingrese el primer numero"<<endl;
cin>>n1;
cout<<endl<<"Ingrese el segundo numero"<<endl;
cin>>n2;
cout<<endl<<"Ingrese el tercer numero"<<endl;
cin>>n3;
cout<<endl<<"Ingrese el numero numero"<<endl;
cin>>n4;

s=n1+n2;
r=n1-n2;
m=n3*n4;
d=n3/n4;

cout<<"\n La suma de "<<n1<<" mas "<<n2<< " es; "<<s;
cout<<"\n La resta de "<<n1<<" menos "<<n2<< " es; "<<r;
cout<<"\n La multiplicacion de "<<n3<<" por "<<n4<< " es; "<<m;
cout<<"\n La division de "<<n3<<" entre "<<n4<< " es; "<<d;
}
