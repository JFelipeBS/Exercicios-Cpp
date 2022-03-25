#include<iostream>
#include<Windows.h>
#include<cmath>

using namespace std;

double VolumeCilindro(double raio, double altura);

int main()
{

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	
	// Cabeçalho do programa
	cout.width(70); cout << "--------------------\n";
	cout.width(70); cout << "|VOLUME DO CILINDRO|\n";
	cout.width(70); cout << "--------------------\n" << endl;
	//______________________________________________________________________________

	double raio, altura;

	cout.width(70); cout << "Qual o raio da base: ";
	cin >> raio;
	cout.width(64); cout << "Qual a altura: ";
	cin >> altura;
	cout.precision(7) << cout.width(72); cout << "O volume do cilindro é:"<< VolumeCilindro(raio, altura) << endl;



	system("pause");
	
	return 0;
}

double VolumeCilindro(double raio, double altura) {

	double v;
		
	v = (3.14159 * pow(raio, 2) * altura);

	return v;

}