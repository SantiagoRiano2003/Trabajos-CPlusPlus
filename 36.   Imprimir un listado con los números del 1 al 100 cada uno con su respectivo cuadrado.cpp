#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
unsigned long n1,n2;
main()
{
n1=0;
cout<<"Numero 1 al 100 con su respectivo cuadrado"<<endl;
while (n1<100)
{
n1=n1+1;
n2=n1*n1;
cout<<n1<<" "<<n2<<endl;
}
}
