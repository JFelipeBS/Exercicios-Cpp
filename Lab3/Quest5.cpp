#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);




	int hora, min;

	cout << "Que horas são? ";
	cin >> hora; cin.ignore(); cin >> min;
	cout << "Seu relógio está atrasado." << endl;
	cout << "Agora são " << hora + 1 << ":" << min << "." << endl;




	return 0;
}