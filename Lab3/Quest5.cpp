#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);




	int hora, min;

	cout << "Que horas s�o? ";
	cin >> hora; cin.ignore(); cin >> min;
	cout << "Seu rel�gio est� atrasado." << endl;
	cout << "Agora s�o " << hora + 1 << ":" << min << "." << endl;




	return 0;
}