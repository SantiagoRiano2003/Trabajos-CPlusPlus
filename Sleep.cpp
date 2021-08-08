#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>
using namespace std;
main()
	{
	char mensaje[]={'P','R','O','G','R','A','M','A','C','I','O','N',' ','D','E',' ','S','O','F','T','W','A','R','E'};
	string nombres[]={"juan","maria"};
	int edades []={1,3,5,8,90};
	for(int i=0;i<=23;i++)
		{
		cout<<"   "<<mensaje[i];
			Sleep(330);	
		}
		cout<<"\n";
		for(int i=0;i<=23;i++)
		{
		cout<<"   "<<nombres[i];
		cout<<"   "<<edades[i];
		
			Sleep(330);	
		}
	}
	
/*
#include <iostream>
#include <windows.h>
using namespace std;
main()
	{
	char mensaje[]={'P','R','O','G','R','A','M','A','C','I','O','N',' ','D','E',' ','S','O','F','T','W','A','R','E'};
	string nombres[]={"juan","maria","jose","elian camilo","rocio","calima","pedro elian","carlos victor","fredy"};
	int edades[]={2,45,567,0,-1,3,12,2,12,78,-45};
	
	for(int t=0;t<=10;t++)	
		{
			cout<<"   "<<edades[t];
			Sleep(70);	
		}	
		cout<<"\n";
	for(int i=0;i<=23;i++)	
		{
			cout<<"   "<<mensaje[i];
			Sleep(130);	
		}
		cout<<"\n";
	for(int i=0;i<=9;i++)	
		{
			cout<<"   "<<nombres[i];
			Sleep(80);	
		}
		cout<<"\n";
	}
	*/
