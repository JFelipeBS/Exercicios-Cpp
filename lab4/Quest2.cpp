#include <iostream>
#include<Windows.h>
#include<cmath> 

using namespace std;

int main()
{
	
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	double x, radiano;
	
	// Cabeçalho do programa
	cout.width(70); cout << "----------------\n";
	cout.width(70); cout << "|SENO DO ÂNGULO|\n";
	cout.width(70); cout << "----------------\n" << endl;
	//______________________________________________________________________________

	// Definições dos valores das variaveis
	cout.width(70); cout << "Digite o ângulo: ";
	cin >> x;
	
	// Calculo do seno do ângulo
	radiano = (3.14159 * x) / 180;                                            
	cout.width(63); cout << "O seno de " << x << " é " << sin(radiano) << endl;

	system("pause");

	return 0;
}