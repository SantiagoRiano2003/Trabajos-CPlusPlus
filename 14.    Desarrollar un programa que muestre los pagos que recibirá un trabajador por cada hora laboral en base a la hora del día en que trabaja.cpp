#include<iostream>
#include<string>
#include<cmath>
#include<windows.h>
using namespace std;
int lunes=0,martes=0,miercoles=0,jueves=0,viernes=0,sabado=0;
float horastotales=0,horaextra=0,dinerohoras=0,salario=0;
float lunesextra=0,martesextra=0,miercolesextra=0,juevesextra=0,viernesextra=0,sabadoextra=0;
double dineroextra=0;
int main()
{
cout<<"---Horas laboradas a la semana---"<<endl;
cout<<"Ingrese su salario del mes: $";
cin>>salario;
cout<<endl;
cout<<"(Para calcular horas extra se deben poner mas de 8 horas laboradas)"<<endl;
cout<<"Ingrese las horas laboradas del lunes: ";
cin>>lunes;
cout<<endl;
cout<<"Ingrese las horas laboradas del martes: ";
cin>>martes;
cout<<endl;
cout<<"Ingrese las horas laboradas del Miercoles: ";
cin>>miercoles;
cout<<endl;
cout<<"Ingrese las horas laboradas del Jueves: ";
cin>>jueves;
cout<<endl;
cout<<"Ingrese las horas laboradas del Viernes: ";
cin>>viernes;
cout<<endl;
cout<<"Ingrese las horas laboradas del Sabado: ";
cin>>sabado;
cout<<endl;
cout<<"El domingo no se trabaja: "<<endl;
horastotales=lunes+martes+miercoles+jueves+viernes+sabado;

if (lunes>=8)
{
lunesextra=lunes-8;
lunes=8;
}
if (martes>=8)
{
martesextra=martes-8;
martes=8;
}
if (miercoles>=8)
{
miercolesextra=miercoles-8;
miercoles=8;
}
if (jueves>=8)
{
juevesextra=jueves-8;
jueves = 8;
}
if (viernes>=8)
{
viernesextra=viernes-8;
viernes=8;
}
if (sabado>=4)
{
sabadoextra=sabado-4;
sabado=4;
}
horaextra=lunesextra+martesextra+miercolesextra+juevesextra+viernesextra+sabadoextra;
salario=(salario/4);
dineroextra=(salario/44)*((lunesextra+martesextra+miercolesextra+juevesextra+viernesextra+sabadoextra)*1.63);

cout<<"Usted ha trabajado un total de: "<<horastotales<<" horas"<<endl;
cout<<"Dinero generado por horas normales: $"<<salario<<endl;
cout<<"Horas extra laboradas: "<<horaextra<<endl;
cout<<"Dinero generado por horas extra: $"<<dineroextra<<endl;

if(salario>horaextra)
{
cout<<endl;
cout<<"Usted gano mas por horas laborales que por horas extra"<<endl;
} 
else{
cout<<endl;
cout<<"Usted gano mas por horas extra que por horas normales"<<endl;
}
}

