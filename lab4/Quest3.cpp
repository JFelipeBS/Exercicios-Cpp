#include <iostream>
#include<Windows.h>
#include<cmath> 

using namespace std;

double media(double x, double y);

int main()
{
	
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	
	int x, y, z;

	// Cabeçalho do programa
	cout.width(70); cout << "------------------\n";
	cout.width(70); cout << "|MÉDIA ARITMÉTICA|\n";
	cout.width(70); cout << "------------------\n" << endl;
	//______________________________________________________________________________

	// Definições dos valores das variaveis
	cout.width(73); cout << "Digite o primeiro valor: ";
	cin >> x;
	cout.width(73); cout << "Digite o segundo valor: ";
	cin >> y;
	
	//Chamando função
	cout.width(63); cout << media(x,y) << endl;

	system("pause");
	return 0;
}


// Calculo da media 

double media(double x, double y)
{
	double c = (x + y) / 2;
	
	return c;
}



