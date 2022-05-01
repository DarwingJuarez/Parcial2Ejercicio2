/*Capturar un numero entero cualesquiera e informar si es 
o no es múltiplo de 4*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n;
	cout<<"**EL PROGRAMA FINALIZARA CUANDO INGRESE 0**\n\n";
	do{
	cout<<"Ingrese un numero: "; 
	cin>>n;
	
	if (n % 4 == 0)
	{
		cout<<"El numero SI es multiplo de 4.\n\n";
	}
	else
	{
		cout<<"El numero NO es multiplo de 4.\n\n";
	}
	}while(n != 0);
	
	getch();
	return 0;
}
