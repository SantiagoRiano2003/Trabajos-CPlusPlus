#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>
using namespace std;
double mujeres,hombres,ninos,total,porcentajehombres,porcentajemujeres,porcentajeninos,todos;
main()
{
cout<<"						Porcentaje de hombres y mujeres"<<endl<<endl;
cout<<"Digite el numero de mujeres:";
cin>>mujeres;
cout<<"Digite el numero de hombres:";
cin>>hombres;
cout<<"Digite el numero de ninos:";
cin>> ninos;
cout<<"Digite el numero de personas totales:";
cin>>todos;
porcentajehombres=(hombres/todos)*100;
porcentajemujeres=(mujeres/todos)*100;
porcentajeninos=(ninos/todos)*100;
cout<<"El porcentaje de hombres con respecto al total de personas es del: "<<porcentajehombres<<"%"<<endl;
cout<<"El porcentaje de mujeres con respecto al total de personas es del: "<<porcentajemujeres<<"%"<<endl;
cout<<"El porcentaje de ninos con respecto al total de personas es del: "<<porcentajeninos<<"%"<<endl;
cout<<"El numero de personas es: "<<todos<<endl;
}
