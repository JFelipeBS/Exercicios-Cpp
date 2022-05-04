#include<iostream>

using namespace std;

int main() {


	int i = 0;
	while (++i < 4)
		cout << "Oi! ";
	do
		cout << "Tchau! ";
	while (i++ <= 8);

	system("pause");
	return 0;
}

/*Esse codigo irira exibir a palavra "oi" 3 vezes e depois a palavra "tchau" 6 vezes*/