#include <iostream>
#include <conio.h>
using namespace std;
main ()
{
int semestre;
cout<<endl<<"Ingrese el numero del semestre a consultar: "<<endl;
cin>>semestre;
if((semestre==1)||(semestre==2)||(semestre==3)||(semestre==4)||(semestre==5)||(semestre==6))
{
	cout<<endl<<"Estamos en el primer semestre "<<endl;		
	} 
else
	{ 
		if((semestre==7)||(semestre==8)||(semestre==9)||(semestre==10)||(semestre==11)||(semestre==12))
		{
		cout<<endl<<"Estamos en el segundo semestre "<<endl;
		}
		else
		{
		cout<<endl<<"No pertenece a ninguno de los dos primeros semestres del año "<<endl;
		} 
		} 

} 

