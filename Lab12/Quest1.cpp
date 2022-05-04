#include<iostream>
#include<Windows.h>
#include<cstring>
#include<string>


using namespace std;

struct conta_Bancaria
{
	string nome_Do_Cliente;
	double saldo = 0;
};

int main() {
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	conta_Bancaria conta;

	cout << "Criar conta Bancaria" << endl;
	cout << "Porfavor digite seu nome." << endl;
	getline(cin,conta.nome_Do_Cliente);
	
	cout << endl;
	cout << "Parabens sua conta foi criada com SUCESSO!!!";
	cout << "Seus dados\n" << "NOME: " << conta.nome_Do_Cliente << endl << "SALDO: $" << conta.saldo << endl;
	cout << endl;
	cout << "Deseja fazer um deposito de quanto: ";
	cin >> conta.saldo;
	cout << endl;
	cout << "Seus dados atualizados\n" << "NOME: " << conta.nome_Do_Cliente << endl << "SALDO: $" << conta.saldo << endl;
	cout << endl;




	system("pause");
	return 0;
}