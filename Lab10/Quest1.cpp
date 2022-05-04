#include<iostream>

using namespace std;

int main() {

	short numeros[5]{ 10,20,30,40,50 };

	for (int i = 0; i <=4 ; i++)
	{
		cout << numeros[i] << " ";
	}
	cout << endl;

	short posicao;
	cout << "-----------------------------" << endl;
	cout << "alterar posicao{0 a 4}: ";
	cin >> posicao;
	cout << "Novo valor: ";
	cin >> numeros[posicao];
	cout << "-----------------------------" << endl;

	for (int i = 0; i <= 4; i++)
	{
		cout << numeros[i] << " ";
	}



	system("pause");
	return 0;
}