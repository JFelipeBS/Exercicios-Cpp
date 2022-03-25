#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	

	cout << "====================================================" << endl;
	cout << "\t\t\  CALORIAS GASTAS " << endl;
	cout << "====================================================" << endl;
	
	double peso, corrida, ciclismo, natacao, minuto1, minuto2, minuto3;

	cout << "seu peso em Kg: ";
	cin >> peso; ;
	cout << "Tempo de corrida: ";
	cin >> corrida; cin.ignore(); cin >> minuto1; cin.ignore();
	cout << "Tempo de ciclisno: ";
	cin >> ciclismo; cin.ignore(); cin >> minuto2; cin.ignore();
	cout << "Tempo de natação: ";
	cin >> natacao; cin.ignore(); cin >> minuto3; cin.ignore();

	double A, B, C;
	A = 7.0 * peso * ((((corrida * 60) + minuto1)) / 60);
	B = 7.0 * peso * ((((ciclismo * 60) + minuto2)) / 60);
	C = 8.0 * peso * ((((natacao * 60) + minuto3)) / 60);

	cout << "Você gastou um total de " << A + B + C << " Calorias." << endl;


	return 0;
}