#include<iostream>
#include<Windows.h>
using namespace std;

long long calculo(long long, long long);

int main()
{

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	long long resultados = 200530LL * 420800;
	cout << "direto: " << resultados << endl;
	cout << "fun��o: " << calculo(200530, 420800) << endl;
	cout << endl;

	cout << "PRECIONE ENTER PARA VER A RESPOSTA.";
	cin.ignore();
	cout << endl;

	cout << "	Para que a multiplica��o ocorra sem  erros deve ser adicionado o LL depois de um dos dois"<< endl;
	cout << "  n�meros, pois as constantes(200530) e (420800) cabem no 'INT', mas a sua multiplica��o n�o." << endl;
	cout << "  J� n� fun��o as variaveis s�o declaradas como 'long long' o que faz o compilador reconhecer" << endl;
	cout << "  o que for colocadodo dentro delas como 'long logn'." << endl;
	cout << endl;

	system("pause");
	return 0;
}

long long calculo(long long a, long long b)
{
	return a * b;
}