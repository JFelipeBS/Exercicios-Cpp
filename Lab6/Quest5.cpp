#include<iostream>
#include<Windows.h>
#include<climits>

using namespace std;

bool isShort(long long valor);
bool isInt(long long valor);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	long long valor;

	cout << "Digite um valor inteiro: ";
	cin >> valor;
	cout << endl;
	isShort(valor);
	cout << endl;
	isInt(valor);
	cout << endl;

	system("pause");
	return 0;

}

bool isShort(long long valor) {

	if (valor >= SHRT_MIN && valor <= SHRT_MAX){

		cout << valor << " cabe em 16 bits.";
		
	}

	else{

		cout << valor << " não cabe em 16 bits.";

	}

	return true;

}

bool isInt(long long valor) {

	if (valor >= INT_MIN && valor <= INT_MAX ) {

		cout << valor << " cabe em 32 bits.";
		
	}

	else {

		cout << valor << " não cabe em 32 bits.";
		
	}

	return true;

}
