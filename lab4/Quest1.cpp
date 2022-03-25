#include <iostream>
#include<Windows.h>
#include<cmath> 

using namespace std;

int main()
{
	
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	double x1, x2, y1, y2;
	
	// Cabeçalho do programa
	cout.width(75); cout << "---------------------------------------\n";
	cout.width(75); cout << "|CALCULAR DISTÂNCIA ENTRES DOIS PONTOS|\n";
	cout.width(75); cout << "---------------------------------------\n" << endl;
	//______________________________________________________________________________

	// Definições dos valores das variaveis
	cout.width(75); cout << "Digite as cordenadas do ponto P (x,y): ";
	cin >> x1; cin.ignore(); cin >> y1;
	cout.width(75); cout << "Digite as cordenadas do ponto Q (x,y): ";
	cin >> x2; cin.ignore(); cin >> y2;
	cout.width(44); cout << "Ponto P:" << x1 << "," << y1 << endl;
	cout.width(44); cout << "Ponto P:" << x2 << "," << y2 << endl;
	
	// Calculo da distancia entre dois pontos
	cout.width(63); cout << "A distância entre P e Q é: " << sqrt((pow((x1 - x2), 2)) + pow((y1 - y2), 2)) << endl;
	cout << endl;


	system("pause");
	return 0;
}