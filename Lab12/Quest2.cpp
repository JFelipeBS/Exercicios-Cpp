#include<iostream>
#include<Windows.h>
#include<cstring>
#include<string>


using namespace std;

struct Palavra
{
	string palavra_PT;
	string palavra_EN;
	string palavra_ESP;

};

int main() {
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	Palavra dicionario[10] =
	{

	{ "você","you","usted" },
	{ "correr","run","correr"}

	};

	cout << "Adicione mais uma palvra " << endl;
	cout << "Digite a palavra em Portugues: ";
	cin >> dicionario[2].palavra_PT;
	cout << "Digite a palavra em Ingles: ";
	cin >> dicionario[2].palavra_EN;
	cout << "Digite a palavra em Espanhol: ";
	cin >> dicionario[2].palavra_ESP;
	cout << endl;

	cout << "****EXIBINDO PALAVRAS****\n";

	for (int i = 0; i<=7 ; i++)
	{
		cout << dicionario[i].palavra_PT << endl;
		cout << dicionario[i].palavra_EN << endl;
		cout << dicionario[i].palavra_ESP << endl;
		cout << endl;
	}
	cout << endl;

	system("pause");
	return 0;
}