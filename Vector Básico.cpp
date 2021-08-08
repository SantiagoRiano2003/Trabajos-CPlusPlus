#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
int i;
int galpon[3];
galpon[2]=45;
galpon[0]=5;
galpon[1]=4;
for(i=0;i<9;i++)	
	{
	if(i>2)
		{
		cout<<"El indice ["<<i<<"] no existe\n";
		}
	else
		{ 
		cout<<"En el indice ["<<i<<"] tenemos: "<<galpon[i]<<"\n";
		}
	}
}
