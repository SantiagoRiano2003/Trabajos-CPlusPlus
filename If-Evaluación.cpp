#include <iostream>
#include <conio.h>
using namespace std;
main ()
{
	float juan,pedro,maria;
	string juan1,pedro1,maria1,n1,n2;
	cout<<endl<<"Llego Mario?: Si-si/No-no"<<endl;
	cin>>maria1;
	cout<<endl<<"Llego Pedro?: Si-si/No-no"<<endl;
	cin>>pedro1;
	cout<<endl<<"Llego Juan?: Si-si/No-no"<<endl;
	cin>>juan1;

	if ((maria1=="si"and pedro1=="si"and juan1=="si") or (maria1=="Si"and pedro1=="Si"and juan1=="Si"))
	{ 
		cout<<endl<<"Ingresaron a la formacion"<<endl;
		cout<<endl<<"Desean ingresar a la evaluacion? Si-si|No-no"<<endl;
		cin>>n1;
		if ((n1=="si")||(n1=="Si"))
		 { 
			cout<<endl<<"Ingresaron a la evaluacion"<<endl;
			cout<<endl<<"Esperando nota de la evaluacion..."<<endl;			
			cout<<endl<<"Ingrese la nota del estudiante 1 Pedro 1/100"<<endl;
			cin>>pedro;
			cout<<endl<<"Ingrese la nota del estudiante 2 Maria 1/100"<<endl;
			cin>>maria;
			cout<<endl<<"Ingrese la nota del estudiante 3 Juan 1/100"<<endl;
			cin>>juan;
				if ((pedro>=90) or (maria>=90) or (juan>=90))
				cout<<endl<<"Aprobaron la evaluacion"<<endl;
				else
				cout<<endl<<"Necesitan repetir la evaluacion"<<endl;
		} 
		else
		 { 
		cout<<endl<<"Operacion abortada"<<endl;
		} 
	}
		 
	else 
	{ 
	cout<<endl<<"No estan todos los estudiantes, no se puede realizar la evaluacion"<<endl;
	}
	} 	
