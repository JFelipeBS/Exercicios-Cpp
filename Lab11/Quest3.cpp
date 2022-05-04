#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<Windows.h>


using namespace std;

int main() {
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	char data[30]{};
	char nome[30]{};

	cout << "Nome: ";
	cin.getline(nome, 30);
	cout << "Data: ";
	cin.getline(data, 30);

	char juntar[80]{};

	strcpy(juntar, (strcat(nome, " esteve aqui em ")));
	cout << strcat(juntar, data);
	cout << endl;

	system("pause");
	return 0;
}
