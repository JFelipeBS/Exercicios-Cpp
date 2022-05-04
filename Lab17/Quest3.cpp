#include<iostream>

using namespace std;

int soma(int x, int y);

int main() {

	cout << "Quais os valores do INICIAL e FINAL: ";
	int x, y;
	cin >> x;
	cin >> y;

	cout << soma(x, y);
	cout << endl;


	system("pause");
	return 0;
}

int soma(int x, int y) {

	int soma=0;
	
	for (x; x <= y; x++)
	{
		soma = (soma + x);
	}


	return soma;
}