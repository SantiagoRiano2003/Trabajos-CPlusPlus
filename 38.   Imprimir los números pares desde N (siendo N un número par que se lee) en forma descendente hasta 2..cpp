#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int n1;
main()
{
	cout<<"Numero de N hasta 2 de forma descendente"<<endl<<endl;
	cout<<"Coloque un numero par mayor a 50: "<<endl;
	cin>>n1;
	if (n1>2)
	{
		while (n1>2)
		{
		n1=n1-2;
		cout<<"El valor va en: "<<n1<<endl;
		}
	}
		else
			{	
			cout<<"Coloque un numero mayor a 50:"<<endl;
			cin>>n1;
			while (n1>50)
			{
			n1=n1-2;
			cout<<"El valor va en:"<<n1;
			}	
			}
}
