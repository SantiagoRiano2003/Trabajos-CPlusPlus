#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>
using namespace std;
double c,f;
main()
{
	f=1;
	for(f=1;f<=999;f++)
	{
	c=f-32;
	c=c/1.8;
	cout<<f<<" Grados farenheit son: "<<c<<" grados celsius"<<endl;
	}
}
