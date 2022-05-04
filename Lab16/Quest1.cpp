#include<iostream>

using namespace std;

int main() {

	char jogador[30]{};

	cout << "Digite o nome/time: ";
	cin.getline(jogador, 30);

	int i;
	for (i = 0; jogador[i] !='/'; i++){}

	char* time = &jogador[i + 1];

	cout << "O nome do jogador tem " << i << " letras." << endl;
	cout << "O seu time e o " << time;
	
	cout << endl;
	system("pause");
	return 0;
}