#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>
using namespace std;
double mujeres,hombres,total,porcentajehombres,porcentajemujeres;
main()
{
cout<<"						Porcentaje de hombres y mujeres"<<endl<<endl;
cout<<"Digite el numero de mujeres:";
cin>> mujeres;
cout<<"Digite el numero de hombres:";
cin>>hombres;
total=hombres+mujeres;
porcentajehombres=(hombres/total)*100;
porcentajemujeres=(mujeres/total)*100;
cout<< "El porcentaje de hombres es del: "<<porcentajehombres<<"%"<<endl;
cout<< "El porcentaje de mujeres es del: "<<porcentajemujeres<<"%";
}
