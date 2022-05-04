#include<iostream>
#include<Windows.h>
using namespace std;

struct local
{
	char nome[30];
	char pais[20];
	char continente[30];
};

int main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Quanto locais voce deseja visitar:";
	int num;
	cin >> num; cin.ignore();

	local* ferias = new local[num];

	for (int i = 0; i < num; i++)
	{
		cout << i+1 << "º lugar:" << endl;
		cout << "Nome do lugar:";
		cin.getline((ferias + i)->nome, 30);
		cout << "Nome do pais:";
		cin.getline((ferias + i)->pais, 20);
		cout << "Nome do continente:";
		cin.getline((ferias + i)->continente, 30);
		cout << endl;
	}

	cout << "================================";
	cout << endl;

	for (int i = 0; i < num; i++)
	{
		cout << i+1 << "º lugar:" << endl;
		cout << "lugar: " << (ferias + i)->nome << endl;
		cout << "pais: " << (ferias + i)->pais << endl;
		cout << "continente: " << (ferias + i)->continente << endl;
		cout << endl;
		
	}
	

	cout << endl;
	delete[] ferias;
	system("pause");
	return 0;
}