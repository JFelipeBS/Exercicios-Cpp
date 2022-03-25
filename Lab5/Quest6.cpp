#include<iostream>
#include<Windows.h>
#include"ccordenadas.h"

using namespace std;


int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	double x, y;

	cout << "Digite as cordenadas (x,y): ";
	cin >> x; cin.ignore(); cin >> y;
	cout << "Cordenadas polares do vetor: " <<"("<< Vetor(x, y)<<", " << Angulo(x, y)<<")" << endl;


	system("pause");
	return 0;
}

