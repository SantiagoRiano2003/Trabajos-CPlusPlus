#include <iostream>
#include <conio.h>
using namespace std;
main ()	
	{
	int n=1,a=1,b,x,z,numero;
	cout<<"Hasta que limite quiere llegar en entrada?:";
		cin>>b;
		for(n=1;n<=b;n++)
		{
			cout<<"Hasta que limite quiere llegar en *****Lloviendo*****?:";
			cin>>x;
			cout<<endl<<"Esta lloviendo en entrada:"<<n<<endl<<endl;
				for(a=1;a<=x;a++)
					{
						if(a>10)
						{
						break;
						}
						cout<<"*****Lloviendo*****"<<a<<endl;
					}
			cout<<"\nQuede en lloviendo:"<<a<<endl<<endl;		
		}
		cout<<"Quede en entrada:"<<n<<endl<<endl;
		cout<<"Ingrese el numero desde donde desea iniciar la enumeracion:"<<endl;	
		cin>>numero;
		cout<<"Hasta que limite quiere llegar llegar la enumeracion?:"<<endl;
		cin>>z;
			for(n=numero;n>=z;n--)
			{
				cout<<"Esta lloviendo en:"<<n<<endl;
			}
			cout<<"Quede en: "<<n<<endl<<endl;
	}
