#include <iostream>
#include<Windows.h>
#include<cmath> 

using namespace std;

int main()
{
	
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	double x, radiano;
	
	// Cabe�alho do programa
	cout.width(70); cout << "----------------\n";
	cout.width(70); cout << "|SENO DO �NGULO|\n";
	cout.width(70); cout << "----------------\n" << endl;
	//______________________________________________________________________________

	// Defini��es dos valores das variaveis
	cout.width(70); cout << "Digite o �ngulo: ";
	cin >> x;
	
	// Calculo do seno do �ngulo
	radiano = (3.14159 * x) / 180;                                            
	cout.width(63); cout << "O seno de " << x << " � " << sin(radiano) << endl;

	system("pause");

	return 0;
}