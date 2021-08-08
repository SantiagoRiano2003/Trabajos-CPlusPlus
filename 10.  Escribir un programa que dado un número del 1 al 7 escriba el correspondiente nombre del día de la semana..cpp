#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>
using namespace std;
char letra;
int main()
{
	cout<<"Digite la letra:"<<endl;
	cin>>letra;
	if(letra=='a' or letra=='e' or letra=='i' or letra=='o' or letra=='u')
	{
	    cout<<"Es una vocal";
	}
	else
	{
	    cout<<"No es vocal";
	}
}
