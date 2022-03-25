#include<iostream>
#include<Windows.h>

using namespace std;

short exibir_Bits(unsigned char);
bool testar_Bits(unsigned char);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	unsigned int numero;
	unsigned char n_Num;

	cout << "Digite um valor entre 0 e 255: ";
	cin >> numero;
	n_Num = numero;

	exibir_Bits(n_Num);
	cout << endl;

	system("pause");
	return 0;
}

short exibir_Bits(unsigned char n_Num) {

	cout << "O número " << int(n_Num) << " em binário é ";
	return testar_Bits(n_Num);
}

bool testar_Bits(unsigned char n_Num) {

	int resultado;

	for (int i = 7; i >= 0; i--) {

		resultado = n_Num >> i;

		if (resultado & 1) {
			cout << "1";

		}
		else {
			cout << "0";

		}

	}
	return true;
}