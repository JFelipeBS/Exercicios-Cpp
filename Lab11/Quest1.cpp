#include<iostream>
#include<cstring>
#include<Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	char senha[] = "Pokemon123";
	char conferir[20];
	
	cout << "Digite a senha: ";
	cin.getline(conferir, 20);
	

	if (strcmp(senha,conferir)==0) {
		cout << "Senha correta.";
	}
	else{
		cout << "Senha incorreta.";
	}
	
	cout << endl;

	system("pause");
	return 0;
}
